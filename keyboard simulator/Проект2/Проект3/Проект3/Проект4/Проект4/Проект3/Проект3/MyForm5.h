#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<ctime>
#include<fstream>
#include <msclr\marshal_cppstd.h>
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
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	int y;
	int a, b;
	char * aa;
	int x; //x - amount of mistakes
	int ball; // whole ball after counting
	char * s;
	public:
		MyForm5() {InitializeComponent();}
		MyForm5(int a, char *s)
		{	
			InitializeComponent();
			y = 0;
			this->a = a;
			this->s = s;
			ball = 0;
			x = -1;
			b = 0;
			
			//TODO: добавьте код конструктора
			//
		}

	protected:
		

		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Timer^  timer5;
	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(201, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(319, 29);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm5::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(197, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(322, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(135, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 42);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Q";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm5::label2_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Location = System::Drawing::Point(182, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 40);
			this->label3->TabIndex = 3;
			this->label3->Text = L"W";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm5::label3_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(229, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 40);
			this->label4->TabIndex = 4;
			this->label4->Text = L"E";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm5::label4_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(275, 153);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 40);
			this->label5->TabIndex = 5;
			this->label5->Text = L"R";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm5::label5_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(321, 153);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 40);
			this->label6->TabIndex = 6;
			this->label6->Text = L"T";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm5::label6_Click);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(367, 153);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 40);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Y";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm5::label7_Click);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(413, 153);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 40);
			this->label8->TabIndex = 8;
			this->label8->Text = L"U";
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label9->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label9->Location = System::Drawing::Point(459, 153);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 40);
			this->label9->TabIndex = 9;
			this->label9->Text = L" I";
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(505, 153);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 40);
			this->label10->TabIndex = 10;
			this->label10->Text = L"O";
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(551, 153);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(40, 40);
			this->label11->TabIndex = 11;
			this->label11->Text = L"P";
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(158, 205);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(40, 40);
			this->label12->TabIndex = 12;
			this->label12->Text = L"A";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm5::label12_Click);
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::White;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(204, 205);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(40, 40);
			this->label13->TabIndex = 13;
			this->label13->Text = L"S";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm5::label13_Click);
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(250, 205);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 40);
			this->label14->TabIndex = 14;
			this->label14->Text = L"D";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm5::label14_Click);
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(296, 205);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(40, 40);
			this->label15->TabIndex = 15;
			this->label15->Text = L"F";
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::White;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(342, 205);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(40, 40);
			this->label16->TabIndex = 16;
			this->label16->Text = L"G";
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::White;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(388, 205);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(40, 40);
			this->label17->TabIndex = 17;
			this->label17->Text = L"H";
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::White;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(434, 205);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(40, 40);
			this->label18->TabIndex = 18;
			this->label18->Text = L"J";
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::White;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(480, 205);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(40, 40);
			this->label19->TabIndex = 19;
			this->label19->Text = L"K";
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::White;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(526, 205);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(40, 40);
			this->label20->TabIndex = 20;
			this->label20->Text = L"L";
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::Color::White;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(204, 255);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(40, 40);
			this->label21->TabIndex = 21;
			this->label21->Text = L"Z";
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::Color::White;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(250, 255);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(40, 40);
			this->label22->TabIndex = 22;
			this->label22->Text = L"X";
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::Color::White;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(296, 255);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(40, 40);
			this->label23->TabIndex = 23;
			this->label23->Text = L"C";
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::White;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(342, 255);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(40, 40);
			this->label24->TabIndex = 24;
			this->label24->Text = L"V";
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::White;
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(388, 255);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(40, 40);
			this->label25->TabIndex = 25;
			this->label25->Text = L"B";
			// 
			// label26
			// 
			this->label26->BackColor = System::Drawing::Color::White;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(434, 255);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(40, 40);
			this->label26->TabIndex = 26;
			this->label26->Text = L"N";
			// 
			// label27
			// 
			this->label27->BackColor = System::Drawing::Color::White;
			this->label27->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(480, 255);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(40, 40);
			this->label27->TabIndex = 27;
			this->label27->Text = L"M";
			// 
			// label28
			// 
			this->label28->BackColor = System::Drawing::Color::White;
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(250, 306);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(221, 32);
			this->label28->TabIndex = 28;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(308, 373);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 55);
			this->button1->TabIndex = 29;
			this->button1->Text = L"End the game";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::End_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 300;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm5::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 10000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm5::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 300;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm5::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 20000;
			this->timer4->Tick += gcnew System::EventHandler(this, &MyForm5::timer4_Tick);
			// 
			// timer5
			// 
			this->timer5->Interval = 30000;
			this->timer5->Tick += gcnew System::EventHandler(this, &MyForm5::timer5_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateBlue;
			this->ClientSize = System::Drawing::Size(712, 440);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm5::MyKeyPress);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			srand(time(0));
			std::vector<std::string> l1(5);
			std::vector<std::string> l2(5);
			std::vector<std::string> l3(5);
			std::ifstream fin1("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\1level.txt");
			std::ifstream fin2("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\2level.txt");
			std::ifstream fin3("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\3level.txt");
			
			for(int i = 0; fin1.peek() != EOF; i ++)
			{
				std::string s;
				getline(fin1,s);
				l1[i] = s;
			}
			for(int i = 0; fin2.peek() != EOF; i ++)
			{
				std::string s;
				getline(fin2,s);
				l2[i] = s;
			}
			for(int i = 0; fin3.peek() != EOF; i ++)
			{
				std::string s;
				getline(fin3,s);
				l3[i] = s;
			}
			fin1.close();
			fin2.close();
			fin3.close();
			std::string ss;
				if(a == 1)
					ss = l1[rand() % 5];
				if(a == 2)
					ss = l2[rand() % 5];
				if(a == 3)
					ss = l3[rand() % 5];
				aa = new char [ss.size()];
				b = ss.size();
				String^ managedString2 = gcnew String (ss.c_str()); 
				label1->Text = managedString2;
				if(a == 1)
					timer2->Start();
				if(a == 2)
					timer4->Start();
				if(a == 3)
					timer5->Start();
				strcpy( aa, ss.c_str() );
			
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void MyKeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			
			 if(e->KeyChar != aa[y])
			 {
				 textBox1->BackColor = System::Drawing::Color::Yellow;
				 x ++;
				 timer3->Start();
			 }
			 else y++;
			 if(e->KeyChar == 'q')
			 { label2 -> BackColor = System::Drawing::Color::Yellow;	timer1->Start(); }
			 if(e->KeyChar == 'w')
			 { label3 -> BackColor = System::Drawing::Color::Yellow;	timer1->Start(); }
			if(e->KeyChar == 'e')
			 { label4 -> BackColor = System::Drawing::Color::Green;	timer1->Start(); }
			if(e->KeyChar == 'r')
			 { label5 -> BackColor = System::Drawing::Color::Green;	timer1->Start(); }
			if(e->KeyChar == 't')
			 { label6 -> BackColor = System::Drawing::Color::Blue;	timer1->Start(); }
			if(e->KeyChar == 'y')
			 { label7 -> BackColor = System::Drawing::Color::Blue;	timer1->Start(); }
			if(e->KeyChar == 'u')
			 { label8 -> BackColor = System::Drawing::Color::Maroon;	timer1->Start(); }
			if(e->KeyChar == 'i')
			 { label9 -> BackColor = System::Drawing::Color::Maroon;	timer1->Start(); }
			if(e->KeyChar == 'o')
			 { label10 -> BackColor = System::Drawing::Color::Aquamarine;	timer1->Start(); }
			if(e->KeyChar == 'p')
			 { label11 -> BackColor = System::Drawing::Color::Aquamarine;	timer1->Start(); }
			if(e->KeyChar == 'a')
			 { label12 -> BackColor = System::Drawing::Color::Yellow;	timer1->Start(); }
			if(e->KeyChar == 's')
			 { label13 -> BackColor = System::Drawing::Color::Yellow;	timer1->Start(); }
			if(e->KeyChar == 'd')
			 { label14 -> BackColor = System::Drawing::Color::Green;	timer1->Start(); }
			if(e->KeyChar == 'f')
			 { label15 -> BackColor = System::Drawing::Color::Green;	timer1->Start(); }
			if(e->KeyChar == 'g')
			 { label16 -> BackColor = System::Drawing::Color::Blue;	timer1->Start(); }
			if(e->KeyChar == 'h')
			 { label17 -> BackColor = System::Drawing::Color::Blue;	timer1->Start(); }
			if(e->KeyChar == 'j')
			 { label18 -> BackColor = System::Drawing::Color::Maroon;	timer1->Start(); }
			if(e->KeyChar == 'k')
			 { label19 -> BackColor = System::Drawing::Color::Maroon;	timer1->Start(); }
			if(e->KeyChar == 'l')
			 { label20 -> BackColor = System::Drawing::Color::Aquamarine;	timer1->Start(); }
			if(e->KeyChar == 'z')
			 { label21 -> BackColor = System::Drawing::Color::Yellow;	timer1->Start(); }
			if(e->KeyChar == 'x')
			 { label22 -> BackColor = System::Drawing::Color::Yellow;	timer1->Start(); }
			if(e->KeyChar == 'c')
			 { label23 -> BackColor = System::Drawing::Color::Green;	timer1->Start(); }
			if(e->KeyChar == 'v')
			 { label24 -> BackColor = System::Drawing::Color::Green;	timer1->Start(); }
			if(e->KeyChar == 'b')
			 { label25 -> BackColor = System::Drawing::Color::Blue;	timer1->Start(); }
			if(e->KeyChar == 'n')
			 { label26 -> BackColor = System::Drawing::Color::Blue;	timer1->Start(); }
			if(e->KeyChar == 'm')
			 { label27 -> BackColor = System::Drawing::Color::Maroon;	timer1->Start(); }
			if(e->KeyChar == ' ')
			 { label28 -> BackColor = System::Drawing::Color::Maroon;	timer1->Start(); }
			if(e -> KeyChar == (char) Keys::Enter)
			{
				timer2->Stop();
				timer4->Stop();
				timer5->Stop();
				ball += 3;
				if(x == -1) x = 0;
				if((b-x)*100 / b <= 97)
					 ball += (b-x)*100 / b;
				 else 
					 ball = 100;
			 if(textBox1->Text == label1->Text)
				 {
					 MessageBox::Show("Stage clear! \nCongratulations!");
					 if(a == 1)
						{ std::ofstream fout("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\rating1.txt", std::ios::app);
						 fout << '\n' << ball << " " << s;}
					 if(a == 2)
						{ std::ofstream fout("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\rating2.txt", std::ios::app);
						 fout << '\n' << ball << " " << s;}
					 if(a == 3)
						{ std::ofstream fout("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\rating3.txt", std::ios::app);
						 fout << '\n' << ball << " " << s;}
					 MyForm5::Close(); 
			 }
			 else  
				 {
					 MessageBox::Show("Don't worry! \nTry again!");
					 textBox1->Clear();
					 ball = 0;
					 x = -1;
					 if(a == 1)
						 timer2->Start();
					 if(a == 2)
						 timer4->Start();
					 if(a == 3)
						 timer5->Start();
			 }

			}
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				timer1->Stop();
				label2 -> BackColor = System::Drawing::Color::White;
				label3 -> BackColor = System::Drawing::Color::White;
				label4 -> BackColor = System::Drawing::Color::White;
				label5 -> BackColor = System::Drawing::Color::White;
				label6 -> BackColor = System::Drawing::Color::White;
				label7 -> BackColor = System::Drawing::Color::White;
				label8 -> BackColor = System::Drawing::Color::White;
				label9 -> BackColor = System::Drawing::Color::White;
				label10 -> BackColor = System::Drawing::Color::White;
				label11 -> BackColor = System::Drawing::Color::White;
				label12 -> BackColor = System::Drawing::Color::White;
				label13 -> BackColor = System::Drawing::Color::White;
				label14 -> BackColor = System::Drawing::Color::White;
				label15 -> BackColor = System::Drawing::Color::White;
				label16 -> BackColor = System::Drawing::Color::White;
				label17 -> BackColor = System::Drawing::Color::White;
				label18 -> BackColor = System::Drawing::Color::White;
				label19 -> BackColor = System::Drawing::Color::White;
				label20 -> BackColor = System::Drawing::Color::White;
				label21 -> BackColor = System::Drawing::Color::White;
				label22 -> BackColor = System::Drawing::Color::White;
				label23 -> BackColor = System::Drawing::Color::White;
				label24 -> BackColor = System::Drawing::Color::White;
				label25 -> BackColor = System::Drawing::Color::White;
				label26 -> BackColor = System::Drawing::Color::White;
				label27 -> BackColor = System::Drawing::Color::White;
				label28 -> BackColor = System::Drawing::Color::White;
		 }
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 timer2->Stop();
				if(x == -1) x = 0;
				 ball = (b-x)*100 / b;
			 if(textBox1->Text == label1->Text)
				 {
					 MessageBox::Show("Stage clear! \nCongratulations!");
					 if(a == 1)
						{ std::ofstream fout("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\rating1.txt", std::ios::app);
						 fout << '\n' << ball << " " << s;}
					 if(a == 2)
						{ std::ofstream fout("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\rating2.txt", std::ios::app);
						 fout << '\n' << ball << " " << s;}
					 if(a == 3)
						{ std::ofstream fout("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\rating3.txt", std::ios::app);
						 fout << '\n' << ball << " " << s;}
					 MyForm5::Close(); 
			 }
			 else  
				 {
					 MessageBox::Show("Don't worry! \nTry again!");
					 textBox1->Clear();
					 ball = 0;
					 x = -1;
					 if(a == 1)
						 timer2->Start();
					 if(a == 2)
						 timer4->Start();
					 if(a == 3)
						 timer5->Start();
			 }

		 }
private: System::Void End_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer2->Stop();
			 MyForm5::Close(); 
		 }
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
			 timer3->Stop();
			 System::String ^ managedString1 = textBox1->Text; 
			 msclr::interop::marshal_context context; 
			 std::string rr = context.marshal_as<std::string>(managedString1);
			 rr.pop_back();
			 String^ managedString2 = gcnew String(rr.c_str()); 
			 textBox1->Text = managedString2; 
			 textBox1->BackColor = System::Drawing::Color::White;
			 textBox1->Select(textBox1->Text->Length, textBox1->Text->Length);
			 y = rr.size();
		 }
private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
			 timer4->Stop();
				if(x == -1) x = 0;
				 ball = (b-x)*100 / b;
			 if(textBox1->Text == label1->Text)
				 {
					 MessageBox::Show("Stage clear! \nCongratulations!");
					 if(a == 1)
						{ std::ofstream fout("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\rating1.txt", std::ios::app);
						 fout << '\n' << ball << " " << s;}
					 if(a == 2)
						{ std::ofstream fout("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\rating2.txt", std::ios::app);
						 fout << '\n' << ball << " " << s;}
					 if(a == 3)
						{ std::ofstream fout("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\rating3.txt", std::ios::app);
						 fout << '\n' << ball << " " << s;}
					 MyForm5::Close(); 
			 }
			 else  
				 {
					 MessageBox::Show("Don't worry! \nTry again!");
					 textBox1->Clear();
					 ball = 0;
					 x = -1;
					 if(a == 1)
						 timer2->Start();
					 if(a == 2)
						 timer4->Start();
					 if(a == 3)
						 timer5->Start();
			 }
		 }
private: System::Void timer5_Tick(System::Object^  sender, System::EventArgs^  e) {
			 timer5->Stop();
				if(x == -1) x = 0;
				 ball = (b-x)*100 / b;
			 if(textBox1->Text == label1->Text)
				 {
					 MessageBox::Show("Stage clear! \nCongratulations!");
					 if(a == 1)
						{ std::ofstream fout("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\rating1.txt", std::ios::app);
						 fout << '\n' << ball << " " << s;}
					 if(a == 2)
						{ std::ofstream fout("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\rating2.txt", std::ios::app);
						 fout << '\n' << ball << " " << s;}
					 if(a == 3)
						{ std::ofstream fout("C:\\Users\\Rustem\\Desktop\\Учебная практика\\Проект2\\rating3.txt", std::ios::app);
						 fout << '\n' << ball << " " << s;}
					 MyForm5::Close(); 
			 }
			 else  
				 {
					 MessageBox::Show("Don't worry! \nTry again!");
					 textBox1->Clear();
					 ball = 0;
					 x = -1;
					 if(a == 1)
						 timer2->Start();
					 if(a == 2)
						 timer4->Start();
					 if(a == 3)
						 timer5->Start();
			 }
		 }

};
}
