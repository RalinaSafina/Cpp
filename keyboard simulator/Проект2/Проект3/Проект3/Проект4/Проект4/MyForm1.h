#pragma once
#include<iostream>
#include "Проект3\Проект3\MyForm5.h"

namespace Проект4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
		int a;
		char * s;
	public:
		MyForm1(char * s)
		{
			InitializeComponent();
			this->s = s;
			a = 0;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(162, 113);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Beginner";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(162, 170);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Intermediate";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(162, 228);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 32);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Advanced";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(98, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(292, 44);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Choose the difficulty:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateBlue;
			this->ClientSize = System::Drawing::Size(467, 357);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = 1;
				 MessageBox::Show("Here you will have 10 seconds to write the phrase below. \n\nTo end the game press Enter. \n\nGood luck! ");
				 Проект3::MyForm5^ ff = gcnew Проект3::MyForm5(a,s);
				 ff->ShowDialog();
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = 2;
				 MessageBox::Show("Here you will have 20 seconds to write the phrase below. \n\nTo end the game press Enter. \n\nGood luck! ");
				 Проект3::MyForm5^ ff = gcnew Проект3::MyForm5(a,s);
				 ff->ShowDialog();
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 a = 3;
				 MessageBox::Show("Here you will have 30 seconds to write the phrase below. \n\nTo end the game press Enter. \n\nGood luck! ");
				 Проект3::MyForm5^ ff = gcnew Проект3::MyForm5(a,s);
				 ff->ShowDialog();
		 }
};
}
