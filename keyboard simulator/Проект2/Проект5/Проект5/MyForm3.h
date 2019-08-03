#include<string>
#include<fstream>
#include<msclr/marshal_cppstd.h>
#pragma once

namespace Проект5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	struct people
			{
				std::string login;
				std::string password;
				std::string word;
				people(){ }
				people(std::string s, std::string d, std::string f) {login = s; password = d; word = f; }
			};
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
		int x;
		people*p;
	public:
		MyForm3(void)
		{
			x = 0;
			InitializeComponent();
			std::ifstream fin("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\люди.txt");
			p = new people[1000];
			for( ;fin.peek()!=EOF; x++)
			{
				std::string g, h, j;
				fin >> g >> h >> j;
				p[x] = people(g,h,j);
			}
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(35, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter your login:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(11, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter your keyword:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(178, 69);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(177, 114);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(82, 168);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(124, 20);
			this->textBox3->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(93, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 29);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Get Password";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::btn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::String^ str1 = textBox1->Text;
			 msclr::interop::marshal_context MMM;
			 std::string llogin = MMM.marshal_as<std::string>(str1);
			 System::String^ str2 = textBox2->Text;
			 msclr::interop::marshal_context MM;
			 std::string key = MM.marshal_as<std::string>(str2);
			 bool pased = false;
			 int i = 0;
			 for(; i < x; i ++)
				 if(p[i].login == llogin && p[i].word == key)
				 {
					 pased = true;
					 String^pass = gcnew String(p[i].password.c_str());
					 textBox3->Text = pass;
					 break;
				 }
			if(pased == false)
					{
						MessageBox::Show("Incorrect login or keyword!");
						textBox1->Clear();
						textBox2->Clear();
				}
			 }
};
}
