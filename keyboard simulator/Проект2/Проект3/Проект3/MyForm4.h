#include"Проект4\Проект4\MyForm1.h"
#include"Проект7\Проект7\MyForm6.h"
#include"Проект8\Проект8\MyForm7.h"
#pragma once

namespace Проект3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
		char * s;
	public:
		MyForm4(char * s)
		{
			InitializeComponent();
			this->s = s;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(78, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Choose the game:";
			// 
			// button1
			// 
			this->button1->BackColor=System::Drawing::Color::YellowGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(49, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Crossword";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::Crossword_Click);
			// 
			// button2
			// 
			this->button2->BackColor=System::Drawing::Color::YellowGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(49, 161);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(177, 39);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Typing tutor";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::Typingtutor_Click);
			// 
			// button3
			// 
			this->button3->BackColor=System::Drawing::Color::Yellow;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(232, 95);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(39, 39);
			this->button3->TabIndex = 3;
			this->button3->Text = L"\?";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::Cross_Click);
			// 
			// button4
			// 
			this->button4->BackColor=System::Drawing::Color::Yellow;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(232, 160);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(39, 39);
			this->button4->TabIndex = 4;
			this->button4->Text = L"\?";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm4::Type_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateBlue;
			this->ClientSize = System::Drawing::Size(328, 270);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Crossword_Click(System::Object^  sender, System::EventArgs^  e) {
				 Проект8::MyForm7^ f = gcnew Проект8::MyForm7();
				 f->ShowDialog(); 
			 }
	private: System::Void Typingtutor_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("Typing tutor. \n\nIn each level you will have limited amount of time. If you make a mistake, you will lose one point from your rating.");
				 Проект4::MyForm1^ f = gcnew Проект4::MyForm1(s);
				 f->ShowDialog(); 
			 }
private: System::Void Cross_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Crossword. \n\nIn this game you need to fill gapes with suitable words. If your answer is correct, gapes will become green. \n\nGood luck!");
		 }
private: System::Void Type_Click(System::Object^  sender, System::EventArgs^  e) {
				 Проект7::MyForm6^ f = gcnew Проект7::MyForm6();
				 f->ShowDialog(); 
					 }
};
}
