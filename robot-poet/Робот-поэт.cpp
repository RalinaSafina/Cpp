#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include<Windows.h>
using namespace std;

struct Word
{
	char s[15];
	int len;
	bool used = false;
	char ends[3];
};

void rifma(Word rs[], Word file[], int k, int &m, char end[])
{
	for(int i = 0, l = 0; i < k; i ++)
		{
			bool p = true;
			for(int j = 0; j < 3; j ++)
				if(file[i].ends[j] != end[j])
					p = false;
			if(p)
				{
					for(int j = 0; j < file[i].len; j ++)
						{
							rs[l].s[j] = file[i].s[j];
						//	cout << file[i].s[j];
						//	cout << rs[l].s[j];
						}
					rs[l].len = file[i].len;
					m ++;
					l ++;
					file[i].used = true;
				}
				
		}
}

void rifma1(Word rs[], Word file[], int k, int &m, char end[])
{
	for(int i = 0, l = 0; i < k; i ++)
		{
			bool p = true;
			for(int j = 1; j < 3; j ++)
				if(file[i].ends[j] != end[j])
					p = false;
			if(p)
				{
					for(int j = 0; j < file[i].len; j ++)
						{
							rs[l].s[j] = file[i].s[j];
						//	cout << file[i].s[j];
						//	cout << rs[l].s[j];
						}
					rs[l].len = file[i].len;
					m ++;
					l ++;
					file[i].used = true;
				}
				
		}
}

void  Rifma(Word rs[], Word file[], int k, int m, int & r, char * is)
{
	int i = 1;
	while(i <= 3)
		{
		srand(time(0));
		int p = rand() % (k - 1);
		while(file[p].used != false)
			if(p == (k - 1))
				p = 0;
			else
				p ++;			//может зациклиться, если рифм не осталось
		for(int j = 0; j < file[p].len; j ++)
			cout << file[p].s[j];
		cout << " ";
		file[p].used = true;
//		i += file[p].len;
		i ++;
		}
	if(r == 0)
		for(int i = 0; i < strlen(is); i ++)
			cout << is[i];
	else
		{
		int p = rand() % (m - 1);
		while(rs[p].used != false)
			if(p == (m - 1))
				p = 0;
			else
				p ++;			//может зациклиться, если рифм не осталось
		for(int j = 0; j < rs[p].len; j ++)
			cout << rs[p].s[j];
		cout << " ";
		rs[p].used = true;
		i ++;
		}	
	r ++;
	cout << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream fin("C:\\merged_partition_content\\Учебная практика\\Робот-поэт\\Slova.txt");
	if(fin == 0)
		{
			cout << "File is not opened";
			return 0;
		}
	Word file[6000];
	Word rs[6000];
	int k = 0;
	int m = 0;
	for(int i = 0; fin.peek() != EOF; i ++)
		{
			string c;
			getline(fin,c);
			strcpy( file[i].s, c.c_str() );
			file[i].len = c.size();
			for(int l = file[i].len-3,j = 0; l < file[i].len; l ++, j ++)
				file[i].ends[j] = file[i].s[l];
			k ++;
		}
	string v;
	cin >> v;
	char * is = new char[v.size()];
	strcpy( is, v.c_str() );
	char end[3];
	for(int i = strlen(is)-3, j = 0; i < strlen(is); i ++, j ++)
		end[j] = is[i];
	rifma(rs, file, k, m, end);
	/*for(int i = 0; i < m; i ++)
		{
			for(int j = 0;	j < rs[i].len; j ++)
				cout << rs[i].s[j];
			cout << " ";
		}*/
	int n;
	cin >> n;
	int r = 0;
	if(n <= m)
		while(r < n)
			Rifma(rs, file, k, m, r, is);
	else
		{
		rifma1(rs, file, k, m, end);
		if(n <= m)
			while(r < n)
				Rifma(rs, file, k, m, r, is);
		else
			cout << "Недостаточно рифмованных слов" << endl << "Доступно " << m <<" строк" ;
	}
	delete(is);
	return 0;
}
