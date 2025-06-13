
namespace Project1 {
#include "h2.h"
	PlayingKeys k, s1, s2, s3;
	using namespace System;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ button1;
	protected:
	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Button^ button3;
	public: System::Windows::Forms::Button^ button4;
	public: System::Windows::Forms::Button^ button5;
	public: System::Windows::Forms::Button^ button6;
	public: System::Windows::Forms::Button^ button7;
	public: System::Windows::Forms::Button^ button8;
	public: System::Windows::Forms::Button^ button9;
	public: System::Windows::Forms::Button^ button10;
	public: System::Windows::Forms::Button^ button11;
	public: System::Windows::Forms::Button^ button12;
	public: System::Windows::Forms::Button^ button13;
	public: System::Windows::Forms::Button^ button14;
	public: System::Windows::Forms::Button^ button15;
	public: System::Windows::Forms::Button^ button16;
	public: System::Windows::Forms::Button^ button17;
	public: System::Windows::Forms::Button^ button18;
	public: System::Windows::Forms::Button^ button19;
	public: System::Windows::Forms::Button^ button20;
	public: System::Windows::Forms::Button^ button21;
	public: System::Windows::Forms::Button^ button22;
	public: System::Windows::Forms::Button^ button23;
	public: System::Windows::Forms::Button^ button24;
	public: System::Windows::Forms::Button^ button25;
	public: System::Windows::Forms::Button^ button26;
	public: System::Windows::Forms::Button^ button27;
	public: System::Windows::Forms::Button^ button28;
	public: System::Windows::Forms::Button^ button34;
	public: System::Windows::Forms::Button^ button35;
	public: System::Windows::Forms::Button^ button36;
	public: System::Windows::Forms::Button^ button37;
	public: System::Windows::Forms::Button^ button38;
	public: System::Windows::Forms::Button^ button39;
	public: System::Windows::Forms::Button^ button40;
	public: System::Windows::Forms::Button^ button42;
	public: System::Windows::Forms::Button^ button43;
	public: System::Windows::Forms::Button^ button29;
	public: System::Windows::Forms::Button^ button30;
	public: System::Windows::Forms::Button^ button45;
	public: System::Windows::Forms::Button^ button46;
	public: System::Windows::Forms::Button^ button47;
	public: System::Windows::Forms::Button^ button48;
	private: System::Windows::Forms::Label^ label1;
	public:
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;

	protected:
		System::ComponentModel::Container^ components;
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(94, 101);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 262);
			this->button1->TabIndex = 0;
			this->button1->Text = L"A1";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(134, 101);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(38, 262);
			this->button2->TabIndex = 1;
			this->button2->Text = L"B1";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(176, 101);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(37, 262);
			this->button3->TabIndex = 2;
			this->button3->Text = L"C1";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(217, 101);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(38, 262);
			this->button4->TabIndex = 3;
			this->button4->Text = L"D1";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(260, 101);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 263);
			this->button5->TabIndex = 4;
			this->button5->Text = L"E1";
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(304, 101);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(43, 263);
			this->button6->TabIndex = 5;
			this->button6->Text = L"F1";
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(351, 101);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(39, 263);
			this->button7->TabIndex = 6;
			this->button7->Text = L"G1";
			this->button7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(394, 101);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(37, 263);
			this->button8->TabIndex = 7;
			this->button8->Text = L"A2";
			this->button8->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(436, 101);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(36, 263);
			this->button9->TabIndex = 8;
			this->button9->Text = L"B2";
			this->button9->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(476, 101);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(34, 263);
			this->button10->TabIndex = 9;
			this->button10->Text = L"C2";
			this->button10->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(514, 105);
			this->button11->Margin = System::Windows::Forms::Padding(2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(39, 259);
			this->button11->TabIndex = 10;
			this->button11->Text = L"D2";
			this->button11->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Black;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button12->FlatAppearance->BorderSize = 4;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button12->Location = System::Drawing::Point(372, 102);
			this->button12->Margin = System::Windows::Forms::Padding(2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(36, 149);
			this->button12->TabIndex = 11;
			this->button12->Text = L"G#1";
			this->button12->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Black;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Location = System::Drawing::Point(241, 102);
			this->button13->Margin = System::Windows::Forms::Padding(2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(38, 148);
			this->button13->TabIndex = 12;
			this->button13->Text = L"D#1";
			this->button13->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Black;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button14->Location = System::Drawing::Point(200, 102);
			this->button14->Margin = System::Windows::Forms::Padding(2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(37, 148);
			this->button14->TabIndex = 13;
			this->button14->Text = L"C#1";
			this->button14->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Black;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->Location = System::Drawing::Point(333, 101);
			this->button15->Margin = System::Windows::Forms::Padding(2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(34, 151);
			this->button15->TabIndex = 14;
			this->button15->Text = L"F#1";
			this->button15->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Black;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button16->Location = System::Drawing::Point(116, 100);
			this->button16->Margin = System::Windows::Forms::Padding(2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(37, 147);
			this->button16->TabIndex = 15;
			this->button16->Text = L"A#1";
			this->button16->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Black;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button17->Location = System::Drawing::Point(29, 101);
			this->button17->Margin = System::Windows::Forms::Padding(2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(34, 148);
			this->button17->TabIndex = 16;
			this->button17->Text = L"F#2";
			this->button17->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Black;
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button18->Location = System::Drawing::Point(76, 102);
			this->button18->Margin = System::Windows::Forms::Padding(2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(35, 147);
			this->button18->TabIndex = 17;
			this->button18->Text = L"G#2";
			this->button18->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(50, 102);
			this->button19->Margin = System::Windows::Forms::Padding(2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(40, 260);
			this->button19->TabIndex = 18;
			this->button19->Text = L"G2";
			this->button19->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(558, 101);
			this->button20->Margin = System::Windows::Forms::Padding(2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(40, 263);
			this->button20->TabIndex = 19;
			this->button20->Text = L"E2";
			this->button20->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(603, 102);
			this->button21->Margin = System::Windows::Forms::Padding(2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(38, 262);
			this->button21->TabIndex = 20;
			this->button21->Text = L"F2";
			this->button21->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(10, 101);
			this->button22->Margin = System::Windows::Forms::Padding(2);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(35, 262);
			this->button22->TabIndex = 21;
			this->button22->Text = L"F3";
			this->button22->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click_1);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(646, 101);
			this->button23->Margin = System::Windows::Forms::Padding(2);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(36, 263);
			this->button23->TabIndex = 22;
			this->button23->Text = L"G3";
			this->button23->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(686, 101);
			this->button24->Margin = System::Windows::Forms::Padding(2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(35, 263);
			this->button24->TabIndex = 23;
			this->button24->Text = L"A3";
			this->button24->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(853, 101);
			this->button25->Margin = System::Windows::Forms::Padding(2);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(35, 263);
			this->button25->TabIndex = 27;
			this->button25->Text = L"E3";
			this->button25->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(812, 101);
			this->button26->Margin = System::Windows::Forms::Padding(2);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(36, 263);
			this->button26->TabIndex = 26;
			this->button26->Text = L"D3";
			this->button26->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(770, 102);
			this->button27->Margin = System::Windows::Forms::Padding(2);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(38, 262);
			this->button27->TabIndex = 25;
			this->button27->Text = L"C3";
			this->button27->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(726, 103);
			this->button28->Margin = System::Windows::Forms::Padding(2);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(40, 261);
			this->button28->TabIndex = 24;
			this->button28->Text = L"B3";
			this->button28->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(1024, 102);
			this->button34->Margin = System::Windows::Forms::Padding(2);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(36, 262);
			this->button34->TabIndex = 31;
			this->button34->Text = L"B4";
			this->button34->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(981, 103);
			this->button35->Margin = System::Windows::Forms::Padding(2);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(38, 261);
			this->button35->TabIndex = 30;
			this->button35->Text = L"A4";
			this->button35->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(936, 102);
			this->button36->Margin = System::Windows::Forms::Padding(2);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(40, 262);
			this->button36->TabIndex = 29;
			this->button36->Text = L"G4";
			this->button36->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(892, 102);
			this->button37->Margin = System::Windows::Forms::Padding(2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(39, 262);
			this->button37->TabIndex = 28;
			this->button37->Text = L"F4";
			this->button37->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::Black;
			this->button38->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button38->Location = System::Drawing::Point(500, 101);
			this->button38->Margin = System::Windows::Forms::Padding(2);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(40, 149);
			this->button38->TabIndex = 43;
			this->button38->Text = L"C#2";
			this->button38->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::Black;
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button39->Location = System::Drawing::Point(412, 101);
			this->button39->Margin = System::Windows::Forms::Padding(2);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(41, 151);
			this->button39->TabIndex = 42;
			this->button39->Text = L"A#2";
			this->button39->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::Black;
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button40->Location = System::Drawing::Point(544, 102);
			this->button40->Margin = System::Windows::Forms::Padding(2);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(37, 147);
			this->button40->TabIndex = 41;
			this->button40->Text = L"D#2";
			this->button40->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::Black;
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button42->Location = System::Drawing::Point(631, 102);
			this->button42->Margin = System::Windows::Forms::Padding(2);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(37, 150);
			this->button42->TabIndex = 39;
			this->button42->Text = L"F#2";
			this->button42->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::Black;
			this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button43->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button43->Location = System::Drawing::Point(672, 101);
			this->button43->Margin = System::Windows::Forms::Padding(2);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(38, 151);
			this->button43->TabIndex = 38;
			this->button43->Text = L"G#2";
			this->button43->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Black;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button29->Location = System::Drawing::Point(1007, 102);
			this->button29->Margin = System::Windows::Forms::Padding(2);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(34, 147);
			this->button29->TabIndex = 44;
			this->button29->Text = L"A#3";
			this->button29->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::Black;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button30->Location = System::Drawing::Point(714, 103);
			this->button30->Margin = System::Windows::Forms::Padding(2);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(34, 147);
			this->button30->TabIndex = 47;
			this->button30->Text = L"A#4";
			this->button30->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::Black;
			this->button45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button45->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button45->Location = System::Drawing::Point(791, 101);
			this->button45->Margin = System::Windows::Forms::Padding(2);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(34, 147);
			this->button45->TabIndex = 46;
			this->button45->Text = L"C#3";
			this->button45->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button45_Click);
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::Black;
			this->button46->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button46->FlatAppearance->BorderSize = 4;
			this->button46->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button46->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button46->Location = System::Drawing::Point(830, 101);
			this->button46->Margin = System::Windows::Forms::Padding(2);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(36, 149);
			this->button46->TabIndex = 45;
			this->button46->Text = L"D#3";
			this->button46->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button46->UseVisualStyleBackColor = false;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::button46_Click);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::Black;
			this->button47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button47->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button47->Location = System::Drawing::Point(921, 103);
			this->button47->Margin = System::Windows::Forms::Padding(2);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(34, 147);
			this->button47->TabIndex = 49;
			this->button47->Text = L"F#3";
			this->button47->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button47_Click);
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::Color::Black;
			this->button48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button48->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button48->Location = System::Drawing::Point(968, 103);
			this->button48->Margin = System::Windows::Forms::Padding(2);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(34, 147);
			this->button48->TabIndex = 48;
			this->button48->Text = L"G#3";
			this->button48->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button48->UseVisualStyleBackColor = false;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::button48_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(362, 17);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(404, 64);
			this->label1->TabIndex = 50;
			this->label1->Text = L"DIGITAL PIANO";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioButton1->Location = System::Drawing::Point(10, 396);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(138, 44);
			this->radioButton1->TabIndex = 51;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"PIANO";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioButton2->Location = System::Drawing::Point(469, 396);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(242, 44);
			this->radioButton2->TabIndex = 52;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"BLACK SHEEP";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioButton3->Location = System::Drawing::Point(146, 396);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(313, 44);
			this->radioButton3->TabIndex = 53;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"HAPPY BIRTHDAY";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioButton4->Location = System::Drawing::Point(714, 396);
			this->radioButton4->Margin = System::Windows::Forms::Padding(2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(420, 44);
			this->radioButton4->TabIndex = 54;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"FUUR ELISE by Beethoven";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1138, 467);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button22);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//public: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		k.count = 0; s1.count = 0; s2.count = 0; s3.count = 0;
		this->button22->BackColor = System::Drawing::Color::White;
		this->button19->BackColor = System::Drawing::Color::White;
		this->button1->BackColor = System::Drawing::Color::White;
		this->button2->BackColor = System::Drawing::Color::White;
		this->button3->BackColor = System::Drawing::Color::White;
		this->button4->BackColor = System::Drawing::Color::White;
		this->button5->BackColor = System::Drawing::Color::White;
		this->button6->BackColor = System::Drawing::Color::White;
		this->button7->BackColor = System::Drawing::Color::White;
		this->button8->BackColor = System::Drawing::Color::White;
		this->button9->BackColor = System::Drawing::Color::White;
		this->button10->BackColor = System::Drawing::Color::White;
		this->button20->BackColor = System::Drawing::Color::White;
		this->button21->BackColor = System::Drawing::Color::White;
		this->button23->BackColor = System::Drawing::Color::White;
		this->button24->BackColor = System::Drawing::Color::White;
		this->button25->BackColor = System::Drawing::Color::White;
		this->button28->BackColor = System::Drawing::Color::White;
		this->button27->BackColor = System::Drawing::Color::White;
		this->button26->BackColor = System::Drawing::Color::White;
		this->button37->BackColor = System::Drawing::Color::White;
		this->button36->BackColor = System::Drawing::Color::White;
		this->button35->BackColor = System::Drawing::Color::White;
		this->button34->BackColor = System::Drawing::Color::White;
		this->button11->BackColor = System::Drawing::Color::White;
		//////////////////////////////////////////////////////////////////
		this->button12->BackColor = System::Drawing::Color::Black;
		this->button13->BackColor = System::Drawing::Color::Black;
		this->button14->BackColor = System::Drawing::Color::Black;
		this->button15->BackColor = System::Drawing::Color::Black;
		this->button16->BackColor = System::Drawing::Color::Black;
		this->button17->BackColor = System::Drawing::Color::Black;
		this->button18->BackColor = System::Drawing::Color::Black;
		this->button38->BackColor = System::Drawing::Color::Black;
		this->button39->BackColor = System::Drawing::Color::Black;
		this->button40->BackColor = System::Drawing::Color::Black;
		this->button42->BackColor = System::Drawing::Color::Black;
		this->button43->BackColor = System::Drawing::Color::Black;
		this->button30->BackColor = System::Drawing::Color::Black;
		this->button45->BackColor = System::Drawing::Color::Black;
		this->button46->BackColor = System::Drawing::Color::Black;
		this->button47->BackColor = System::Drawing::Color::Black;
		this->button48->BackColor = System::Drawing::Color::Black;
		this->button29->BackColor = System::Drawing::Color::Black;

	}
	private: System::Void button22_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton1();
		}
	}

	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton2();
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton3();
		}
		else if (radioButton4->Checked == true)
		{
			if (s1.count == 8 || s1.count == 9 || s1.count == 28 || s1.count == 29)
			{
				s1.PlayButton3();
				s1.count++;
				this->button1->BackColor = System::Drawing::Color::White;
				if (s1.count == 10)
					this->button10->BackColor = System::Drawing::Color::Red;
			}
			if (s1.count == 18 || s1.count == 19)
			{
				s1.PlayButton3();
				s1.count++;
				this->button1->BackColor = System::Drawing::Color::White;
				if (s1.count == 20)
					this->button25->BackColor = System::Drawing::Color::Red;
			}

		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton4();
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton5();
		}
		else if (radioButton3->Checked == true)
		{
			if (s2.count == 0 || s2.count == 1 || s2.count == 3 || s2.count == 6 || s2.count == 7 || s2.count == 9 || s2.count == 12 || s2.count == 13 || s2.count == 18)
			{
				s2.PlayButton5();
				this->button3->BackColor = System::Drawing::Color::White;
				if (s2.count == 0)
				{
					this->button3->BackColor = System::Drawing::Color::Blue;
				}
				else if (s2.count == 12)
				{
					this->button3->BackColor = System::Drawing::Color::Green;
				}
				else if (s2.count == 6)
				{
					this->button3->BackColor = System::Drawing::Color::Blue;
				}
				if (s2.count == 1 || s2.count == 7)
				{
					this->button4->BackColor = System::Drawing::Color::Red;
				}
				if (s2.count == 3)
				{
					this->button6->BackColor = System::Drawing::Color::Red;
				}
				if (s2.count == 9) {
					this->button7->BackColor = System::Drawing::Color::Red;
				}
				if (s2.count == 13) {
					this->button9->BackColor = System::Drawing::Color::Red;
				}
				if (s2.count == 18) {
					this->button39->BackColor = System::Drawing::Color::Red;
				}
				s2.count++;
			}
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton6();
		}
		if (radioButton3->Checked == true) {
			if (s2.count == 2 || s2.count == 8 || s2.count == 17)
			{
				s2.PlayButton6();
				s2.count++;
				this->button4->BackColor = System::Drawing::Color::White;
				this->button3->BackColor = System::Drawing::Color::Red;
			}
		}
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton7();
		}
		else if (radioButton4->Checked == true)
		{
			if (s1.count == 13 || s1.count == 14)
			{
				s1.PlayButton7();
				s1.count++;
				this->button5->BackColor = System::Drawing::Color::White;
				if (s1.count == 15)
					this->button20->BackColor = System::Drawing::Color::Red;
			}
		}
		else if (radioButton3->Checked == true) {
			if (s2.count == 5)
			{
				s2.PlayButton7();
				s2.count++;
				this->button5->BackColor = System::Drawing::Color::White;
				this->button3->BackColor = System::Drawing::Color::Red;
			}
			else if (s2.count == 16)
			{
				s2.PlayButton7();
				s2.count++;
				this->button5->BackColor = System::Drawing::Color::White;
				this->button4->BackColor = System::Drawing::Color::Red;
			}
		}
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton8();
		}
		else if (radioButton3->Checked == true) {
			if (s2.count == 4)
			{
				s2.PlayButton8();
				s2.count++;
				this->button6->BackColor = System::Drawing::Color::White;
				this->button5->BackColor = System::Drawing::Color::Red;
			}
			else if (s2.count == 11)
			{
				s2.PlayButton8();
				s2.count++;
				this->button6->BackColor = System::Drawing::Color::White;
				this->button3->BackColor = System::Drawing::Color::Red;
			}
			else if (s2.count == 22)
			{
				s2.PlayButton8();
				s2.count++;
				this->button6->BackColor = System::Drawing::Color::White;
				this->button7->BackColor = System::Drawing::Color::Red;
			}
			else if (s2.count == 24)
			{
				s2.PlayButton8();
				s2.count++;
				this->button6->BackColor = System::Drawing::Color::White;
			}
		}
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton9();
		}
		if (radioButton3->Checked == true) {
			if (s2.count == 10 || s2.count == 23) {
				s2.PlayButton9();
				s2.count++;
				this->button7->BackColor = System::Drawing::Color::White;
				this->button6->BackColor = System::Drawing::Color::Red;
			}
			else  if (s2.count == 15) {
				s2.PlayButton9();
				s2.count++;
				this->button7->BackColor = System::Drawing::Color::White;
				this->button5->BackColor = System::Drawing::Color::Red;
			}
		}
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton10();
		}
		else if (radioButton4->Checked == true)
		{
			if (s1.count == 11)
			{
				s1.PlayButton10();
				s1.count++;
				this->button8->BackColor = System::Drawing::Color::White;
				this->button20->BackColor = System::Drawing::Color::Red;
			}
		}
		else if (radioButton3->Checked == true)
		{
			if (s2.count == 21)
			{
				s2.PlayButton10();
				s2.count++;
				this->button8->BackColor = System::Drawing::Color::White;
				this->button6->BackColor = System::Drawing::Color::Red;
			}
		}
	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton11();
		}
		else if (radioButton3->Checked == true)
		{
			if (s2.count == 14)
			{
				s2.PlayButton11();
				s2.count++;
				this->button9->BackColor = System::Drawing::Color::White;
				this->button7->BackColor = System::Drawing::Color::Red;
			}
		}
	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton12();
		}
		else if (radioButton4->Checked == true)
		{
			if (s1.count == 10)
			{
				s1.count++;
				s1.PlayButton12();
				this->button10->BackColor = System::Drawing::Color::White;
				this->button20->BackColor = System::Drawing::Color::Red;
			}
		}
	}

	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton13();
		}
	}

	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton14();
		}
		else if (radioButton4->Checked == true)
		{
			if (s1.count == 11)
			{
				s1.count++;
				s1.PlayButton14();
				this->button20->BackColor = System::Drawing::Color::White;
				this->button24->BackColor = System::Drawing::Color::Red;
			}
			else if (s1.count == 15)
			{
				s1.count++;
				s1.PlayButton14();
				this->button20->BackColor = System::Drawing::Color::White;
				this->button43->BackColor = System::Drawing::Color::Red;
			}
		}
	}

	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton15();
		}
	}

	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton16();
		}
	}

	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton17();
		}
		else if (radioButton4->Checked == true)
		{
			if (s1.count == 8 || s1.count == 9 || s1.count == 28 || s1.count == 29)
			{
				s1.count++;
				s1.PlayButton17();
				this->button24->BackColor = System::Drawing::Color::White;
				if (s1.count == 10)
					this->button10->BackColor = System::Drawing::Color::Red;
			}
			else if (s1.count == 12)
			{
				s1.count++;
				s1.PlayButton17();
				this->button24->BackColor = System::Drawing::Color::White;
				this->button28->BackColor = System::Drawing::Color::Red;
				this->button5->BackColor = System::Drawing::Color::Red;
			}
		}
	}

	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton18();
		}
		else if (radioButton4->Checked == true)
		{
			if (s1.count == 5 || s1.count == 25)
			{
				s1.PlayButton18();
				this->button28->BackColor = System::Drawing::Color::White;
				this->button26->BackColor = System::Drawing::Color::Red;
				s1.count++;
			}
			else if (s1.count == 13 || s1.count == 14)
			{
				s1.PlayButton18();
				this->button28->BackColor = System::Drawing::Color::White;
				s1.count++;
				if (s1.count == 15)
					this->button20->BackColor = System::Drawing::Color::Red;
			}
			else if (s1.count == 17)
			{
				s1.PlayButton18();
				this->button28->BackColor = System::Drawing::Color::White;
				s1.count++;
				this->button27->BackColor = System::Drawing::Color::Red;
				this->button1->BackColor = System::Drawing::Color::Red;
			}
		}

	}

	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton19();
		}
		else if (radioButton4->Checked == true)
		{
			if (s1.count == 7 || s1.count == 27)
			{
				s1.PlayButton19();
				s1.count++;
				this->button27->BackColor = System::Drawing::Color::White;
				this->button24->BackColor = System::Drawing::Color::Red;
				this->button1->BackColor = System::Drawing::Color::Red;
			}
			if (s1.count == 18 || s1.count == 19)
			{
				s1.PlayButton19();
				s1.count++;
				this->button27->BackColor = System::Drawing::Color::White;
				if (s1.count == 20)
				{
					this->button25->BackColor = System::Drawing::Color::Red;
				}
			}
		}
		else if (radioButton2->Checked == true) {
			if (s3.count == 0 || s3.count == 1 || s3.count == 36 || s3.count == 37) {
				s3.PlayButton19();
				this->button27->BackColor = System::Drawing::Color::White;
				if (s3.count == 0 || s3.count == 36) {
					this->button27->BackColor = System::Drawing::Color::Green;
				}
				else {
					this->button36->BackColor = System::Drawing::Color::Red;
				}
				s3.count++;
			}
			else if (s3.count == 15) {
				s3.PlayButton19();
				this->button27->BackColor = System::Drawing::Color::White;
				this->button36->BackColor = System::Drawing::Color::Red;
				s3.count++;
			}
			else if (s3.count == 51) {
				s3.PlayButton19();
				this->button27->BackColor = System::Drawing::Color::White;
			}
		}
	}

	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton20();
		}
		else if (radioButton4->Checked == true)
		{
			if (s1.count == 6 || s1.count == 26)
			{
				s1.PlayButton20();
				s1.count++;
				this->button26->BackColor = System::Drawing::Color::White;
				this->button27->BackColor = System::Drawing::Color::Red;
			}
		}
		else if (radioButton2->Checked == true) {
			if (s3.count == 13 || s3.count == 14 || s3.count == 35 || s3.count == 49 || s3.count == 50)
			{
				s3.PlayButton20();
				this->button26->BackColor = System::Drawing::Color::White;
				if (s3.count == 13 || s3.count == 49) {
					this->button26->BackColor = System::Drawing::Color::Green;
				}
				else {
					this->button27->BackColor = System::Drawing::Color::Red;
				}
				s3.count++;
			}
			else if (s3.count == 24) {
				s3.PlayButton20();
				s3.count++;
				this->button26->BackColor = System::Drawing::Color::White;
				this->button36->BackColor = System::Drawing::Color::Red;
			}
		}
	}

	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton21();
		}
		else if (radioButton4->Checked == true)
		{
			if (s1.count == 0 || s1.count == 2 || s1.count == 20 || s1.count == 22)
			{
				this->button25->BackColor = System::Drawing::Color::White;
				this->button46->BackColor = System::Drawing::Color::Red;
				s1.count++;
				s1.PlayButton21();
			}
			else if (s1.count == 4 || s1.count == 24)
			{
				s1.PlayButton21();
				this->button25->BackColor = System::Drawing::Color::White;
				this->button28->BackColor = System::Drawing::Color::Red;
				s1.count++;
			}
		}
		else if (radioButton2->Checked == true) {
			if (s3.count == 11 || s3.count == 12 || s3.count == 21 || s3.count == 22 || s3.count == 23 || s3.count == 32 || s3.count == 33 || s3.count == 34 || s3.count == 47 || s3.count == 48)
			{
				s3.PlayButton21();
				this->button25->BackColor = System::Drawing::Color::White;
				if (s3.count == 11 || s3.count == 21 || s3.count == 32 || s3.count == 47) {
					this->button25->BackColor = System::Drawing::Color::Green;
				}
				else if (s3.count == 22 || s3.count == 33)
				{
					this->button25->BackColor = System::Drawing::Color::Yellow;
				}
				else if (s3.count == 12 || s3.count == 23 || s3.count == 34 || s3.count == 48) {
					this->button26->BackColor = System::Drawing::Color::Red;
				}
				s3.count++;
			}
		}

	}

	private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton22();
		}
		else if (radioButton2->Checked == true) {
			if (s3.count == 9 || s3.count == 10 || s3.count == 19 || s3.count == 20 || s3.count == 28 || s3.count == 29 || s3.count == 30 || s3.count == 31 || s3.count == 45 || s3.count == 46) {
				s3.PlayButton22();
				this->button37->BackColor = System::Drawing::Color::White;
				if (s3.count == 9 || s3.count == 19 || s3.count == 28 || s3.count == 45) {
					this->button37->BackColor = System::Drawing::Color::Green;
				}
				else if (s3.count == 29)
				{
					this->button37->BackColor = System::Drawing::Color::Yellow;
				}
				else if (s3.count == 30)
				{
					this->button37->BackColor = System::Drawing::Color::Blue;
				}
				if (s3.count == 10 || s3.count == 20 || s3.count == 31 || s3.count == 32 || s3.count == 46) {
					this->button25->BackColor = System::Drawing::Color::Red;
				}
				s3.count++;
			}
		}
	}

	private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton23();
		}
		else if (radioButton2->Checked == true) {
			if (s3.count == 2 || s3.count == 3 || s3.count == 16 || s3.count == 17 || s3.count == 18 || s3.count == 25 || s3.count == 26 || s3.count == 27 || s3.count == 38 || s3.count == 39) {
				s3.PlayButton23();
				this->button36->BackColor = System::Drawing::Color::White;
				if (s3.count == 2 || s3.count == 16 || s3.count == 25 || s3.count == 38) {
					this->button36->BackColor = System::Drawing::Color::Green;
				}
				else if (s3.count == 17 || s3.count == 26)
				{
					this->button36->BackColor = System::Drawing::Color::Yellow;
				}
				else if (s3.count == 3 || s3.count == 39) {
					this->button35->BackColor = System::Drawing::Color::Red;
				}
				else if (s3.count == 18 || s3.count == 27) {
					this->button37->BackColor = System::Drawing::Color::Red;
				}
				s3.count++;
			}
			if (s3.count == 8 || s3.count == 44) {
				s3.PlayButton23();
				s3.count++;
				this->button36->BackColor = System::Drawing::Color::White;
				this->button37->BackColor = System::Drawing::Color::Red;
			}
		}
	}

	private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton24();
		}
		if (radioButton2->Checked == true) {
			if (s3.count == 4 || s3.count == 5 || s3.count == 6 || s3.count == 7 || s3.count == 41 || s3.count == 42 || s3.count == 43 || s3.count == 40) {
				s3.PlayButton24();
				this->button35->BackColor = System::Drawing::Color::White;
				if (s3.count == 4 || s3.count == 40) {
					this->button35->BackColor = System::Drawing::Color::Green;
				}
				else if (s3.count == 5 || s3.count == 41) {
					this->button35->BackColor = System::Drawing::Color::Yellow;
				}
				else if (s3.count == 6 || s3.count == 42) {
					this->button35->BackColor = System::Drawing::Color::Blue;
				}
				else if (s3.count == 7 || s3.count == 43) {
					this->button36->BackColor = System::Drawing::Color::Red;
				}
				s3.count++;
			}
		}
	}

	private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.PlayButton25();

		}
	}

	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack1();
		}
	}

	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack2();
		}
	}

	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack3();
		}
	}

	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack4();
		}
	}

	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack5();
		}
	}

	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack6();
		}
	}

	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack7();
		}
	}

	private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack8();
		}
		if (radioButton3->Checked == true)
		{
			if (s2.count == 19)
			{
				s2.playBlack8();
				s2.count++;
				this->button39->BackColor = System::Drawing::Color::Black;
				this->button39->BackColor = System::Drawing::Color::Blue;
			}
			else if (s2.count == 20)
			{
				s2.playBlack8();
				s2.count++;
				this->button39->BackColor = System::Drawing::Color::Black;
				this->button8->BackColor = System::Drawing::Color::Red;
			}
		}
	}
	private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack9();
		}
	}
	private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack10();
		}
	}
	private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack11();
		}
	}
	private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack12();
		}
		else if (radioButton4->Checked == true)
		{
			if (s1.count == 16)
			{
				s1.count++;
				s1.playBlack12();
				this->button43->BackColor = System::Drawing::Color::Black;
				this->button28->BackColor = System::Drawing::Color::Red;
			}
		}
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack13();
		}
	}
	private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
		{
			k.playBlack14();
		}
	}
	private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack15();
		}
		else if (radioButton4->Checked == true)
		{
			if (s1.count == 1 || s1.count == 3 || s1.count == 21 || s1.count == 23)
			{
				s1.count++;
				k.playBlack15();
				this->button46->BackColor = System::Drawing::Color::Black;
				this->button25->BackColor = System::Drawing::Color::Red;
			}
		}

	}
	private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack16();
		}
	}
	private: System::Void button48_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack17();
		}
		else if (radioButton4->Checked == true)
		{
			if (s1.count == 1)
			{
				s1.playBlack17();
				this->button37->BackColor = System::Drawing::Color::Red;
				this->button48->BackColor = System::Drawing::Color::Black;
				s1.count++;
			}
		}

	}
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			k.playBlack18();
		}
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (s1.count == 0 || s2.count>0 || s3.count>0)
		{
			this->button25->BackColor = System::Drawing::Color::Red;
			this->button22->BackColor = System::Drawing::Color::White;
			this->button19->BackColor = System::Drawing::Color::White;
			this->button1->BackColor = System::Drawing::Color::White;
			this->button2->BackColor = System::Drawing::Color::White;
			this->button3->BackColor = System::Drawing::Color::White;
			this->button4->BackColor = System::Drawing::Color::White;
			this->button5->BackColor = System::Drawing::Color::White;
			this->button6->BackColor = System::Drawing::Color::White;
			this->button7->BackColor = System::Drawing::Color::White;
			this->button8->BackColor = System::Drawing::Color::White;
			this->button9->BackColor = System::Drawing::Color::White;
			this->button10->BackColor = System::Drawing::Color::White;
			this->button20->BackColor = System::Drawing::Color::White;
			this->button21->BackColor = System::Drawing::Color::White;
			this->button23->BackColor = System::Drawing::Color::White;
			this->button24->BackColor = System::Drawing::Color::White;
			this->button28->BackColor = System::Drawing::Color::White;
			this->button27->BackColor = System::Drawing::Color::White;
			this->button26->BackColor = System::Drawing::Color::White;
			this->button37->BackColor = System::Drawing::Color::White;
			this->button36->BackColor = System::Drawing::Color::White;
			this->button35->BackColor = System::Drawing::Color::White;
			this->button34->BackColor = System::Drawing::Color::White;
			this->button11->BackColor = System::Drawing::Color::White;
			//////////////////////////////////////////////////////////////////
			this->button12->BackColor = System::Drawing::Color::Black;
			this->button13->BackColor = System::Drawing::Color::Black;
			this->button14->BackColor = System::Drawing::Color::Black;
			this->button15->BackColor = System::Drawing::Color::Black;
			this->button16->BackColor = System::Drawing::Color::Black;
			this->button17->BackColor = System::Drawing::Color::Black;
			this->button18->BackColor = System::Drawing::Color::Black;
			this->button38->BackColor = System::Drawing::Color::Black;
			this->button39->BackColor = System::Drawing::Color::Black;
			this->button40->BackColor = System::Drawing::Color::Black;
			this->button42->BackColor = System::Drawing::Color::Black;
			this->button43->BackColor = System::Drawing::Color::Black;
			this->button30->BackColor = System::Drawing::Color::Black;
			this->button45->BackColor = System::Drawing::Color::Black;
			this->button46->BackColor = System::Drawing::Color::Black;
			this->button47->BackColor = System::Drawing::Color::Black;
			this->button48->BackColor = System::Drawing::Color::Black;
			this->button29->BackColor = System::Drawing::Color::Black;
			s2.count = 0; s3.count = 0;
		}

	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (s2.count == 0 || s1.count>0 || s3.count>0)
		{
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button22->BackColor = System::Drawing::Color::White;
			this->button19->BackColor = System::Drawing::Color::White;
			this->button1->BackColor = System::Drawing::Color::White;
			this->button2->BackColor = System::Drawing::Color::White;
			this->button4->BackColor = System::Drawing::Color::White;
			this->button5->BackColor = System::Drawing::Color::White;
			this->button6->BackColor = System::Drawing::Color::White;
			this->button7->BackColor = System::Drawing::Color::White;
			this->button8->BackColor = System::Drawing::Color::White;
			this->button9->BackColor = System::Drawing::Color::White;
			this->button10->BackColor = System::Drawing::Color::White;
			this->button20->BackColor = System::Drawing::Color::White;
			this->button21->BackColor = System::Drawing::Color::White;
			this->button23->BackColor = System::Drawing::Color::White;
			this->button24->BackColor = System::Drawing::Color::White;
			this->button25->BackColor = System::Drawing::Color::White;
			this->button28->BackColor = System::Drawing::Color::White;
			this->button27->BackColor = System::Drawing::Color::White;
			this->button26->BackColor = System::Drawing::Color::White;
			this->button37->BackColor = System::Drawing::Color::White;
			this->button36->BackColor = System::Drawing::Color::White;
			this->button35->BackColor = System::Drawing::Color::White;
			this->button34->BackColor = System::Drawing::Color::White;
			this->button11->BackColor = System::Drawing::Color::White;
			//////////////////////////////////////////////////////////////////
			this->button12->BackColor = System::Drawing::Color::Black;
			this->button13->BackColor = System::Drawing::Color::Black;
			this->button14->BackColor = System::Drawing::Color::Black;
			this->button15->BackColor = System::Drawing::Color::Black;
			this->button16->BackColor = System::Drawing::Color::Black;
			this->button17->BackColor = System::Drawing::Color::Black;
			this->button18->BackColor = System::Drawing::Color::Black;
			this->button38->BackColor = System::Drawing::Color::Black;
			this->button39->BackColor = System::Drawing::Color::Black;
			this->button40->BackColor = System::Drawing::Color::Black;
			this->button42->BackColor = System::Drawing::Color::Black;
			this->button43->BackColor = System::Drawing::Color::Black;
			this->button30->BackColor = System::Drawing::Color::Black;
			this->button45->BackColor = System::Drawing::Color::Black;
			this->button46->BackColor = System::Drawing::Color::Black;
			this->button47->BackColor = System::Drawing::Color::Black;
			this->button48->BackColor = System::Drawing::Color::Black;
			this->button29->BackColor = System::Drawing::Color::Black;
			s1.count = 0; s3.count = 0;
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (s3.count == 0 || s1.count>0 ||s2.count>0)
		{

			this->button27->BackColor = System::Drawing::Color::Red;
			this->button22->BackColor = System::Drawing::Color::White;
			this->button19->BackColor = System::Drawing::Color::White;
			this->button1->BackColor = System::Drawing::Color::White;
			this->button2->BackColor = System::Drawing::Color::White;
			this->button3->BackColor = System::Drawing::Color::White;
			this->button4->BackColor = System::Drawing::Color::White;
			this->button5->BackColor = System::Drawing::Color::White;
			this->button6->BackColor = System::Drawing::Color::White;
			this->button7->BackColor = System::Drawing::Color::White;
			this->button8->BackColor = System::Drawing::Color::White;
			this->button9->BackColor = System::Drawing::Color::White;
			this->button10->BackColor = System::Drawing::Color::White;
			this->button20->BackColor = System::Drawing::Color::White;
			this->button21->BackColor = System::Drawing::Color::White;
			this->button23->BackColor = System::Drawing::Color::White;
			this->button24->BackColor = System::Drawing::Color::White;
			this->button25->BackColor = System::Drawing::Color::White;
			this->button28->BackColor = System::Drawing::Color::White;
			this->button26->BackColor = System::Drawing::Color::White;
			this->button37->BackColor = System::Drawing::Color::White;
			this->button36->BackColor = System::Drawing::Color::White;
			this->button35->BackColor = System::Drawing::Color::White;
			this->button34->BackColor = System::Drawing::Color::White;
			this->button11->BackColor = System::Drawing::Color::White;
			//////////////////////////////////////////////////////////////////
			this->button12->BackColor = System::Drawing::Color::Black;
			this->button13->BackColor = System::Drawing::Color::Black;
			this->button14->BackColor = System::Drawing::Color::Black;
			this->button15->BackColor = System::Drawing::Color::Black;
			this->button16->BackColor = System::Drawing::Color::Black;
			this->button17->BackColor = System::Drawing::Color::Black;
			this->button18->BackColor = System::Drawing::Color::Black;
			this->button38->BackColor = System::Drawing::Color::Black;
			this->button39->BackColor = System::Drawing::Color::Black;
			this->button40->BackColor = System::Drawing::Color::Black;
			this->button42->BackColor = System::Drawing::Color::Black;
			this->button43->BackColor = System::Drawing::Color::Black;
			this->button30->BackColor = System::Drawing::Color::Black;
			this->button45->BackColor = System::Drawing::Color::Black;
			this->button46->BackColor = System::Drawing::Color::Black;
			this->button47->BackColor = System::Drawing::Color::Black;
			this->button48->BackColor = System::Drawing::Color::Black;
			this->button29->BackColor = System::Drawing::Color::Black;
			s2.count = 0; s1.count = 0;
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}