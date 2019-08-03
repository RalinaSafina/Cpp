#include<msclr/marshal_cppstd.h>
#include<fstream>
#include<string>
#pragma once

namespace Проект7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	struct raiting
	{
		std::string point;
		std::string name;
		raiting(){ }
		raiting(std::string ppoint, std::string nname){point = ppoint; name = nname;}
	};

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
		raiting * r1;
		raiting * r2;
		raiting * r3;
		int rr1, rr2, rr3;
	public:
		MyForm6(void)
		{
			InitializeComponent();
			rr1 = 0, rr2 = 0, rr3 = 0;
			r1 = new raiting [1000];
			r2 = new raiting [1000];
			r3 = new raiting [1000];
			std::ifstream fin10("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\rating1.txt");
			std::ifstream fin20("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\rating2.txt");
			std::ifstream fin30("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\rating3.txt");
			for( ;fin10.peek()!=EOF; rr1++)
			{
				std::string g, h;
				fin10 >> g >> h;
				r1[rr1] = raiting(g,h);
			}
			 
			for( ;fin20.peek()!=EOF; rr2++)
			{
				std::string g, h;
				fin20 >> g >> h;
				r2[rr2] = raiting(g,h);
			}
			for( ;fin30.peek()!=EOF; rr3++)
			{
				std::string g, h;
				fin30 >> g >> h;
				r3[rr3] = raiting(g,h);
			}
			 fin10.close();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(2, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(319, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Rating of \"Typing tutor\" game";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(15, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter your login";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(69, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Beginner";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(39, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Intermediate";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(62, 197);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Advanced";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(167, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(130, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(167, 138);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(130, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(167, 168);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(130, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(167, 197);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(130, 20);
			this->textBox4->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(108, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 31);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Get points";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::Get_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateBlue;
			this->ClientSize = System::Drawing::Size(320, 287);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Get_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::String^ str1 = textBox1->Text;
			 msclr::interop::marshal_context MMM;
			 std::string llogin = MMM.marshal_as<std::string>(str1);
			 bool a = true, b = true, c = true;
			 for(auto i = rr1-1; i >= 0; i --)
				 if(r1[i].name == llogin)
				 {
					 String^point1 = gcnew String(r1[i].point.c_str());
					 textBox2->Text = point1;
					 a = false;
				 }
			if(a)
				textBox2->Text = "0";
			 for(auto i = rr2-1; i >= 0; i --)
				 if(r2[i].name == llogin)
				 {
					 String^point2 = gcnew String(r2[i].point.c_str());
					 textBox3->Text = point2;
					 b = false;
				 }
			if(b)
				textBox3->Text = "0";
			for(auto i = rr3-1; i >= 0; i --)
				 if(r3[i].name == llogin)
				 {
					 String^point3 = gcnew String(r3[i].point.c_str());
					 textBox4->Text = point3;
					 c = false;
				 }
			if(c)
				textBox4->Text = "0";
			 }
			 
};
}
