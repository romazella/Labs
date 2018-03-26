#pragma once
#include "Header.h"
#include <ctime>


namespace merge_sort {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	const int ONENUMBERLENGHT = 9;
	const int LINELENGTH = 90;
	bool SORTED = 1;						// set state of file with nubers
	bool INPUT_ERROR = false;				// variable for fix errors
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	private: System::Windows::Forms::TextBox^  textBox8;

	private: System::Windows::Forms::TextBox^  textBox10;

	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(41, 32);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(31, 13);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"MIN";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(41, 54);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(31, 13);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"MAX";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(76, 29);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(41, 20);
			this->textBox3->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(76, 51);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(41, 20);
			this->textBox4->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(122, 29);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 42);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Сгенерировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(8, 131);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(224, 33);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Многопутевая сортировка";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(122, 81);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(93, 20);
			this->textBox5->TabIndex = 3;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(50, 84);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(66, 13);
			this->textBox6->TabIndex = 9;
			this->textBox6->Text = L"Количество";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Location = System::Drawing::Point(17, 213);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(484, 236);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->TabStop = false;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(41, 132);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(99, 13);
			this->textBox8->TabIndex = 12;
			this->textBox8->Text = L"Время сортировки:";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(109, 17);
			this->textBox10->Margin = System::Windows::Forms::Padding(2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(75, 13);
			this->textBox10->TabIndex = 14;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Location = System::Drawing::Point(259, 10);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(242, 177);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Методы";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(8, 20);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(224, 33);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Простая сортировка";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(8, 74);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(224, 33);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Естественная сортировка";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(35, 10);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(197, 100);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Генерация элементов";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Location = System::Drawing::Point(35, 115);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(197, 44);
			this->groupBox3->TabIndex = 20;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Общие сведения";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(516, 470);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Внешние сортировки";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:	
		void Buttons_state(bool flag)						// make buttons disabled
		{
			if (flag)
			{
				button1->Enabled = true;
				button2->Enabled = true;
				button3->Enabled = true;
				button4->Enabled = true;
			}
			if (!flag)
			{
				button1->Enabled = false;
				button2->Enabled = false;
				button3->Enabled = false;
				button4->Enabled = false;
			}
		}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	INPUT_ERROR = false;
	richTextBox1->Text = "";											// clear box for output

	if (!Int32::TryParse(textBox3->Text, SortingMethods::MIN_ELEMENT))	// check input MIN element
	{
		richTextBox1->Text = "Incorrect MIN element!!!\n";
		textBox3->Text = "";
		INPUT_ERROR = true;
	}
	if (!Int32::TryParse(textBox4->Text, SortingMethods::MAX_ELEMENT))	// check input MAX element
	{
		richTextBox1->Text += "Incorrect MAX element!!!\n";
		textBox4->Text = "";
		INPUT_ERROR = true;
	}
	if (!Int32::TryParse(textBox5->Text, SortingMethods::N))			// check values of numbers for generating
	{
		richTextBox1->Text += "Incorrect value of elements!!!\n";
		textBox5->Text = "";
		INPUT_ERROR = true;
	}
	if (SortingMethods::MIN_ELEMENT > SortingMethods::MAX_ELEMENT)		// check correct range
	{
		richTextBox1->Text += "Incorrect range!!!\n";
		INPUT_ERROR = true;
	}
	if (SortingMethods::N < 1)											// check correct input value
	{
		richTextBox1->Text += "Negative value of elements!!!\n";
		INPUT_ERROR = true;
	}
	if (INPUT_ERROR) return;

	Buttons_state(false);												// turn off buttons

	SortingMethods::Generation();										// generate input file
	
	richTextBox1->LoadFile("Input.txt", RichTextBoxStreamType::PlainText);	// output of generated file
	
	Buttons_state(true);													// turn on buttons

	SORTED = false;			
	
	if (SortingMethods::N == 1) SORTED = true;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	if (SORTED) return;

	Buttons_state(false);

	richTextBox1->Text = "";

	double runTime = clock();												// make variable for save time
	SortingMethods::ChoosingMethod(1);										// sort Merge sort
	runTime = (clock() - runTime) / CLOCKS_PER_SEC;
	textBox10->Text = Convert::ToString(runTime) + " sec";					// output time of work
	
	richTextBox1->LoadFile("Input.txt", RichTextBoxStreamType::PlainText);	// output result
	
	Buttons_state(true);													// turn on buttons
	
	SORTED = true;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	if (SORTED) return;

	Buttons_state(false);

	richTextBox1->Text = "";

	double runTime = clock();
	SortingMethods::ChoosingMethod(2);										// sort Natural merge
	runTime = (clock() - runTime) / CLOCKS_PER_SEC;
	textBox10->Text = Convert::ToString(runTime) + " sec";

	richTextBox1->LoadFile("Input.txt", RichTextBoxStreamType::PlainText);
	
	Buttons_state(true);

	SORTED = true;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

	if (SORTED) return;

	Buttons_state(false);

	richTextBox1->Text = "";

	double runTime = clock();
	SortingMethods::ChoosingMethod(3);										// sort Balanced Multiway
	runTime = (clock() - runTime) / CLOCKS_PER_SEC;
	textBox10->Text = Convert::ToString(runTime) + " sec";

	richTextBox1->LoadFile("Input.txt", RichTextBoxStreamType::PlainText);
	
	Buttons_state(true);

	SORTED = true;
}
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
