using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Forms;
using System.Numerics;
using System.Text;
using System.Security.Cryptography;

namespace RSA
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            textBox5.MaxLength = 4;
            textBox6.MaxLength = 4;
        }

        BigInteger N, fi, e_val, d, l;
        string alf = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZабвгдежзийклмнопрстуфхцчшщъыьэюяАБВГДЕЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ0123456789ёЁ";

        private void button1_Click(object sender, EventArgs e)
        {
            int size1 = Convert.ToInt32(textBox5.Text);
            int size2 = Convert.ToInt32(textBox6.Text);
            if (size1 < 0 || size1 > 1024)
            {
                MessageBox.Show("Первое введенное число не удовлетворяет условию!");
                textBox2.Clear();
            }
            else if (size2 < 0 || size2 > 1024)
            {
                MessageBox.Show("Второе введенное число не удовлетворяет условию!");
                textBox2.Clear();
            }
            else
            {
                BigInteger p = NextBigInteger(size1);
                BigInteger q = NextBigInteger(size2);
                p += ((p - 1) % 2);
                q += ((q - 1) % 2);
                l = size1 + size2;
                bool flag1 = true, flag2 = true;
                while (flag1)
                {
                    if (MillerRabin(p))
                        flag1 = false;
                    else
                        p += 2;
                }
                while (flag2)
                {
                    if (MillerRabin(q) && q != p)
                        flag2 = false;
                    else
                        q += 2;
                }
                N = p * q;
                fi = (p - 1) * (q - 1);
                Random rnd = new Random();
                int size3 = rnd.Next(0, (size1 + size2) / 3);
                e_val = NextBigInteger(size3);
                e_val += ((e_val - 1) % 2);
                bool flag = true;
                while (flag)
                {
                    if (MillerRabin(e_val) && e_val < fi && e_val != p && e_val != q && fi % e_val != 0)
                        flag = false;
                    else
                        e_val += 2;
                }
                int k = 1;
                flag = true;
                while (flag)
                    if ((k * fi + 1) % e_val == 0)
                        flag = false;
                    else
                        k++;
                d = (k * fi + 1) / e_val;
                /*Stack<BigInteger> div = new Stack<BigInteger>();
                BigInteger nod = Nod(fi, e_val, div);
                BigInteger x = 0, y = 1;
                while (div.Count() > 0)
                {
                    BigInteger temp = y;
                    y = x - y * div.Pop();
                    x = temp;
                }
                if (y < 0) d = y + fi;
                else d = y;*/
                textBox1.Text = N.ToString();
                textBox2.Text = fi.ToString();
                textBox3.Text = e_val.ToString();
                textBox4.Text = d.ToString();
            }
        }

        static BigInteger Nod(BigInteger aa, BigInteger bb, Stack<BigInteger> ddiv)
        {
            if (aa % bb == 0)
                return bb;
            else
            {
                ddiv.Push(aa / bb);
                return Nod(bb, aa % bb, ddiv);
            }
        }

        static BigInteger rapidPow(BigInteger a, BigInteger e_val, BigInteger N_val)
        {
            Stack<BigInteger> e_binary = new Stack<BigInteger>();
            while (e_val > 1)
            {
                e_binary.Push(e_val % 2);
                e_val /= 2;
            }
            BigInteger c = a;
            while (e_binary.Count() != 0)
            {
                if (e_binary.Pop() == 0)
                    c = BigInteger.Pow(c, 2) % N_val;
                else
                    c = (BigInteger.Pow(c, 2) * a) % N_val;
            }
            return c;
        }

        public BigInteger NextBigInteger(int bitLength)
        {
            if (bitLength < 1) return BigInteger.Zero;

            int bytes = bitLength / 8;
            int bits = bitLength % 8;

            Random rnd = new Random();
            // Generates enough random bytes to cover our bits.
            byte[] bs = new byte[bytes + 1];
            rnd.NextBytes(bs);

            // Mask out the unnecessary bits.
            byte mask = (byte)(0xFF >> (8 - bits));
            bs[bs.Length - 1] &= mask;

            return new BigInteger(bs);
        }

        static bool CheckPrime(BigInteger num)
        {
            bool prime = true;
            BigInteger m = num - 1, temp = m;
            BigInteger s = 0;
            while (temp % 2 != 1)
            {
                temp /= 2;
                s += 1;
            }
            BigInteger t = temp;
            BigInteger a = 2, stop = (BigInteger)Math.Log((double)num, 2);
            for (; a < stop; a++)
            {
                if (num % a == 0)
                {
                    prime = false;
                    break;
                }
                else
                {
                    BigInteger b = rapidPow(a, t, num);
                    if (b == 1)
                        continue;
                    else
                    {
                        for (int i = 0; b != m; i++)
                        {
                            b = BigInteger.Pow(b, 2) % num; //rapidPow(b, 2, num); 
                            if (i > s - 1)
                            {
                                prime = false;
                                break;
                            }
                        }
                    }
                    if (!prime)
                        break;
                }
            }
            return prime;
        }

        private bool MillerRabin(BigInteger n)
        {
            if (n == 2 || n == 3)
                return true;
            if (n < 2 || n % 2 == 0)
                return false;
            BigInteger t = n - 1;
            int s = 0;
            while (t % 2 == 0)
            {
                t /= 2;
                s += 1;
            }
            for (int i = 0; i < s + 2; i++)
            {
                RNGCryptoServiceProvider rng = new RNGCryptoServiceProvider();
                byte[] b = new byte[n.ToByteArray().LongLength];
                BigInteger a;
                do
                {
                    rng.GetBytes(b);
                    a = new BigInteger(b);
                }
                while (a < 2 || a >= n - 2);
                BigInteger x = BigInteger.ModPow(a, t, n);
                if (x == 1 || x == n - 1)
                    continue;
                for (int r = 1; r < s; r++)
                {
                    x = BigInteger.ModPow(x, 2, n);
                    if (x == 1)
                        return false;
                    if (x == n - 1)
                        break;
                }

                if (x != n - 1)
                    return false;
            }
            return true;
        }

        static string tobinary(BigInteger n)
        {
            Stack<int> stack = new Stack<int>();
            while(n != 1)
            {
                stack.Push((int)(n % 2));
                n /= 2;
            }
            stack.Push(1);
            if(stack.Count < 7)
                while (stack.Count != 7)
                    stack.Push(0);
            string bin = "";
            while (stack.Count != 0)
                bin += stack.Pop();
            return bin;
        }

        static BigInteger todecimal(string str)
        {
            BigInteger n = 0;
            for (int i = str.Length - 1, j = 0; j < str.Length; i--, j++)
                n += BigInteger.Pow(2, j) * (str[i]-48);
            return n;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            richTextBox2.Text = "";
            foreach (char ch in richTextBox1.Text)
                richTextBox2.Text += rapidPow(ch, e_val, N) + "\n";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            richTextBox3.Text = "";
            string[] text = richTextBox2.Text.Split('\n');
            for(int i = 0; i < text.Length - 1; i++)
            {
                richTextBox3.Text += (char)(rapidPow(BigInteger.Parse(text[i]), d, N) % 7000);
            }
        }
    }
}
