#pragma once

namespace Проект8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm7
	/// </summary>
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	public:
		MyForm7(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	protected: 

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(42, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(34, 34);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(42, 72);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(34, 34);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(42, 112);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(34, 34);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(42, 152);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(34, 34);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(361, 32);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(34, 34);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(361, 72);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(34, 34);
			this->textBox6->TabIndex = 5;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(361, 112);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(34, 34);
			this->textBox7->TabIndex = 6;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(361, 152);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(34, 34);
			this->textBox8->TabIndex = 7;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(361, 192);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(34, 34);
			this->textBox9->TabIndex = 8;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(361, 232);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(34, 34);
			this->textBox10->TabIndex = 9;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(361, 272);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(34, 34);
			this->textBox11->TabIndex = 10;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(38, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 23);
			this->label1->TabIndex = 11;
			this->label1->Text = L"1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm7::l1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(357, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 23);
			this->label2->TabIndex = 12;
			this->label2->Text = L"2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm7::l2_Click);
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(162, 72);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(34, 34);
			this->textBox12->TabIndex = 13;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox13->Location = System::Drawing::Point(162, 112);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(34, 34);
			this->textBox13->TabIndex = 14;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox14->Location = System::Drawing::Point(162, 152);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(34, 34);
			this->textBox14->TabIndex = 15;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox15->Location = System::Drawing::Point(162, 192);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(34, 34);
			this->textBox15->TabIndex = 16;
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox16->Location = System::Drawing::Point(162, 232);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(34, 34);
			this->textBox16->TabIndex = 17;
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox17->Location = System::Drawing::Point(162, 272);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(34, 34);
			this->textBox17->TabIndex = 18;
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(161, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 23);
			this->label3->TabIndex = 19;
			this->label3->Text = L"3";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm7::l3_Click);
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox18->Location = System::Drawing::Point(242, 72);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(34, 34);
			this->textBox18->TabIndex = 20;
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox19->Location = System::Drawing::Point(282, 72);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(34, 34);
			this->textBox19->TabIndex = 21;
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox20
			// 
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox20->Location = System::Drawing::Point(322, 72);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(34, 34);
			this->textBox20->TabIndex = 22;
			this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox21
			// 
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox21->Location = System::Drawing::Point(401, 72);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(34, 34);
			this->textBox21->TabIndex = 23;
			this->textBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox22
			// 
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox22->Location = System::Drawing::Point(439, 72);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(34, 34);
			this->textBox22->TabIndex = 24;
			this->textBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(217, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 23);
			this->label4->TabIndex = 25;
			this->label4->Text = L"4";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm7::l4_Click);
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox23->Location = System::Drawing::Point(82, 152);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(34, 34);
			this->textBox23->TabIndex = 26;
			this->textBox23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox24
			// 
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox24->Location = System::Drawing::Point(122, 152);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(34, 34);
			this->textBox24->TabIndex = 27;
			this->textBox24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox25
			// 
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox25->Location = System::Drawing::Point(202, 152);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(34, 34);
			this->textBox25->TabIndex = 28;
			this->textBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(17, 163);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 23);
			this->label5->TabIndex = 29;
			this->label5->Text = L"5";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm7::l5_Click);
			// 
			// textBox26
			// 
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox26->Location = System::Drawing::Point(202, 232);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(34, 34);
			this->textBox26->TabIndex = 30;
			this->textBox26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox27
			// 
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox27->Location = System::Drawing::Point(242, 232);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(34, 34);
			this->textBox27->TabIndex = 31;
			this->textBox27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox28
			// 
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox28->Location = System::Drawing::Point(282, 232);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(34, 34);
			this->textBox28->TabIndex = 32;
			this->textBox28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox29
			// 
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox29->Location = System::Drawing::Point(322, 232);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(34, 34);
			this->textBox29->TabIndex = 33;
			this->textBox29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox30
			// 
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox30->Location = System::Drawing::Point(401, 232);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(34, 34);
			this->textBox30->TabIndex = 34;
			this->textBox30->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(137, 243);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 23);
			this->label6->TabIndex = 35;
			this->label6->Text = L"6";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm7::l6_Click);
			// 
			// textBox31
			// 
			this->textBox31->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox31->Location = System::Drawing::Point(42, 272);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(34, 34);
			this->textBox31->TabIndex = 36;
			this->textBox31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox32
			// 
			this->textBox32->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox32->Location = System::Drawing::Point(82, 272);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(34, 34);
			this->textBox32->TabIndex = 37;
			this->textBox32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox33
			// 
			this->textBox33->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox33->Location = System::Drawing::Point(122, 272);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(34, 34);
			this->textBox33->TabIndex = 38;
			this->textBox33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox34
			// 
			this->textBox34->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox34->Location = System::Drawing::Point(42, 312);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(34, 34);
			this->textBox34->TabIndex = 39;
			this->textBox34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox35
			// 
			this->textBox35->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox35->Location = System::Drawing::Point(42, 352);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(34, 34);
			this->textBox35->TabIndex = 40;
			this->textBox35->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(17, 269);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 23);
			this->label7->TabIndex = 41;
			this->label7->Text = L"7";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm7::l7_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(361, 364);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 34);
			this->button1->TabIndex = 42;
			this->button1->Text = L"Check";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm7::Check_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(82, 367);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(276, 28);
			this->label8->TabIndex = 43;
			this->label8->Text = L"To see question press its number.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(42, 243);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 23);
			this->label9->TabIndex = 44;
			this->label9->Text = L"8";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm7::l8_Click);
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Moccasin;
			this->ClientSize = System::Drawing::Size(504, 410);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox35);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->Name = L"MyForm7";
			this->Text = L"MyForm7";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Check_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(textBox1->Text == "s" && textBox2->Text == "a" && textBox3->Text == "v" && textBox4->Text == "e")
				 {
					 textBox1->BackColor = System::Drawing::Color::Chartreuse;
					 textBox2->BackColor = System::Drawing::Color::Chartreuse;
					 textBox3->BackColor = System::Drawing::Color::Chartreuse;
					 textBox4->BackColor = System::Drawing::Color::Chartreuse;
				 }
				 if(textBox5->Text == "a" && textBox6->Text == "n" && textBox7->Text == "i" && textBox8->Text == "m" && textBox9->Text == "a" && textBox10->Text == "l" && textBox11->Text == "s")
				 {
					 textBox5->BackColor = System::Drawing::Color::Chartreuse;
					 textBox6->BackColor = System::Drawing::Color::Chartreuse;
					 textBox7->BackColor = System::Drawing::Color::Chartreuse;
					 textBox8->BackColor = System::Drawing::Color::Chartreuse;
					 textBox9->BackColor = System::Drawing::Color::Chartreuse;
					 textBox10->BackColor = System::Drawing::Color::Chartreuse;
					 textBox11->BackColor = System::Drawing::Color::Chartreuse;
				 }
				 if(textBox12->Text == "n" && textBox13->Text == "a" && textBox14->Text == "t" && textBox15->Text == "u" && textBox16->Text == "r" && textBox17->Text == "e")
				 {
					 textBox12->BackColor = System::Drawing::Color::Chartreuse;
					 textBox13->BackColor = System::Drawing::Color::Chartreuse;
					 textBox14->BackColor = System::Drawing::Color::Chartreuse;
					 textBox15->BackColor = System::Drawing::Color::Chartreuse;
					 textBox16->BackColor = System::Drawing::Color::Chartreuse;
					 textBox17->BackColor = System::Drawing::Color::Chartreuse;
				 }
				 if(textBox18->Text == "p" && textBox19->Text == "l" && textBox20->Text == "a" && textBox6->Text == "n" && textBox21->Text == "t" && textBox22->Text == "s")
				 {
					 textBox18->BackColor = System::Drawing::Color::Chartreuse;
					 textBox19->BackColor = System::Drawing::Color::Chartreuse;
					 textBox20->BackColor = System::Drawing::Color::Chartreuse;
					 textBox6->BackColor = System::Drawing::Color::Chartreuse;
					 textBox21->BackColor = System::Drawing::Color::Chartreuse;
					 textBox22->BackColor = System::Drawing::Color::Chartreuse;
				 }
				 if(textBox4->Text == "e" && textBox23->Text == "a" && textBox24->Text == "r" && textBox14->Text == "t" && textBox25->Text == "h")
				 {
					 textBox4->BackColor = System::Drawing::Color::Chartreuse;
					 textBox23->BackColor = System::Drawing::Color::Chartreuse;
					 textBox24->BackColor = System::Drawing::Color::Chartreuse;
					 textBox14->BackColor = System::Drawing::Color::Chartreuse;
					 textBox25->BackColor = System::Drawing::Color::Chartreuse;
				 }
				 if(textBox16->Text == "r" && textBox26->Text == "e" && textBox27->Text == "c" && textBox28->Text == "y" && textBox29->Text == "c" && textBox10->Text == "l" && textBox30->Text == "e")
				 {
					 textBox16->BackColor = System::Drawing::Color::Chartreuse;
					 textBox26->BackColor = System::Drawing::Color::Chartreuse;
					 textBox27->BackColor = System::Drawing::Color::Chartreuse;
					 textBox28->BackColor = System::Drawing::Color::Chartreuse;
					 textBox29->BackColor = System::Drawing::Color::Chartreuse;
					 textBox10->BackColor = System::Drawing::Color::Chartreuse;
					 textBox30->BackColor = System::Drawing::Color::Chartreuse;
				 }
				 if(textBox31->Text == "l" && textBox32->Text == "o" && textBox33->Text == "v" && textBox17->Text == "e")
				 {
					 textBox31->BackColor = System::Drawing::Color::Chartreuse;
					 textBox32->BackColor = System::Drawing::Color::Chartreuse;
					 textBox33->BackColor = System::Drawing::Color::Chartreuse;
					 textBox17->BackColor = System::Drawing::Color::Chartreuse;
				 }
				 if(textBox31->Text == "l" && textBox34->Text == "e" && textBox35->Text == "g")
				 {
					 textBox31->BackColor = System::Drawing::Color::Chartreuse;
					 textBox34->BackColor = System::Drawing::Color::Chartreuse;
					 textBox35->BackColor = System::Drawing::Color::Chartreuse;
				 }
			 }
private: System::Void l1_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("We need to ____ and care of the Earth.");
		 }
private: System::Void l2_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Dogs and cats are types of ____.");
		 }
private: System::Void l3_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Plants, trees and birds are a part of ____.");
		 }
private: System::Void l4_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("We have flowers, fruits, vegetables and other ____ in our garden.");
		 }
private: System::Void l5_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("We live on planet ____.");
		 }
private: System::Void l6_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Reduce, Reuse, ____.");
		 }
private: System::Void l7_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Together we can ____ the Earth.");
		 }
private: System::Void l8_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("A rabbit's ____ brings good luck.");
		 }
};
}
