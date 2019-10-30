#pragma once
//#include "C:\Users\Adib\Desktop\OneDrive - Queen's University\Year_3\CISC320\FractionLibrary\FractionLibrary\FractionLibrary.h"
#include "../FractionLibrary/FractionLibrary.h"
//#include "../FractionLibrary/FractionLibrary.cpp" <-fix


namespace FractionGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
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
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		int opState = 0;
		int f1num, f1den, f2num, f2den;
	private: System::Windows::Forms::GroupBox^ Frac1;
	private: System::Windows::Forms::GroupBox^ Frac2;
	protected:

	protected:

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ radioDiv;

	private: System::Windows::Forms::RadioButton^ radioMult;

	private: System::Windows::Forms::RadioButton^ radioSubtract;

	private: System::Windows::Forms::RadioButton^ radioAdd;
	private: System::Windows::Forms::TextBox^ Frac1Den;

	private: System::Windows::Forms::TextBox^ Frac1Num;
	private: System::Windows::Forms::TextBox^ Frac2Den;


	private: System::Windows::Forms::TextBox^ Frac2Num;
	private: System::Windows::Forms::Button^ calculate;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ ResultNum;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ ResultDen;




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
			this->Frac1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Frac1Den = (gcnew System::Windows::Forms::TextBox());
			this->Frac1Num = (gcnew System::Windows::Forms::TextBox());
			this->Frac2 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Frac2Den = (gcnew System::Windows::Forms::TextBox());
			this->Frac2Num = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioDiv = (gcnew System::Windows::Forms::RadioButton());
			this->radioMult = (gcnew System::Windows::Forms::RadioButton());
			this->radioSubtract = (gcnew System::Windows::Forms::RadioButton());
			this->radioAdd = (gcnew System::Windows::Forms::RadioButton());
			this->calculate = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ResultNum = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->ResultDen = (gcnew System::Windows::Forms::Label());
			this->Frac1->SuspendLayout();
			this->Frac2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// Frac1
			// 
			this->Frac1->Controls->Add(this->label2);
			this->Frac1->Controls->Add(this->label1);
			this->Frac1->Controls->Add(this->Frac1Den);
			this->Frac1->Controls->Add(this->Frac1Num);
			this->Frac1->Location = System::Drawing::Point(12, 69);
			this->Frac1->Name = L"Frac1";
			this->Frac1->Size = System::Drawing::Size(138, 209);
			this->Frac1->TabIndex = 0;
			this->Frac1->TabStop = false;
			this->Frac1->Text = L"1st Fraction";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"DENOMINATOR";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"NUMERATOR";
			// 
			// Frac1Den
			// 
			this->Frac1Den->Location = System::Drawing::Point(16, 143);
			this->Frac1Den->Name = L"Frac1Den";
			this->Frac1Den->Size = System::Drawing::Size(102, 20);
			this->Frac1Den->TabIndex = 1;
			// 
			// Frac1Num
			// 
			this->Frac1Num->Location = System::Drawing::Point(16, 51);
			this->Frac1Num->Name = L"Frac1Num";
			this->Frac1Num->Size = System::Drawing::Size(102, 20);
			this->Frac1Num->TabIndex = 0;
			// 
			// Frac2
			// 
			this->Frac2->Controls->Add(this->label4);
			this->Frac2->Controls->Add(this->label3);
			this->Frac2->Controls->Add(this->Frac2Den);
			this->Frac2->Controls->Add(this->Frac2Num);
			this->Frac2->Location = System::Drawing::Point(178, 69);
			this->Frac2->Name = L"Frac2";
			this->Frac2->Size = System::Drawing::Size(138, 209);
			this->Frac2->TabIndex = 1;
			this->Frac2->TabStop = false;
			this->Frac2->Text = L"2nd Fraction";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"DENOMINATOR";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"NUMERATOR";
			// 
			// Frac2Den
			// 
			this->Frac2Den->Location = System::Drawing::Point(16, 141);
			this->Frac2Den->Name = L"Frac2Den";
			this->Frac2Den->Size = System::Drawing::Size(102, 20);
			this->Frac2Den->TabIndex = 2;
			// 
			// Frac2Num
			// 
			this->Frac2Num->Location = System::Drawing::Point(16, 51);
			this->Frac2Num->Name = L"Frac2Num";
			this->Frac2Num->Size = System::Drawing::Size(102, 20);
			this->Frac2Num->TabIndex = 1;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioDiv);
			this->groupBox3->Controls->Add(this->radioMult);
			this->groupBox3->Controls->Add(this->radioSubtract);
			this->groupBox3->Controls->Add(this->radioAdd);
			this->groupBox3->Location = System::Drawing::Point(386, 69);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(75, 209);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Operation";
			// 
			// radioDiv
			// 
			this->radioDiv->AutoSize = true;
			this->radioDiv->Location = System::Drawing::Point(6, 167);
			this->radioDiv->Name = L"radioDiv";
			this->radioDiv->Size = System::Drawing::Size(55, 17);
			this->radioDiv->TabIndex = 3;
			this->radioDiv->Text = L"Divide";
			this->radioDiv->UseVisualStyleBackColor = true;
			this->radioDiv->CheckedChanged += gcnew System::EventHandler(this, &GUI::radioDiv_CheckedChanged);
			// 
			// radioMult
			// 
			this->radioMult->AutoSize = true;
			this->radioMult->Location = System::Drawing::Point(6, 128);
			this->radioMult->Name = L"radioMult";
			this->radioMult->Size = System::Drawing::Size(60, 17);
			this->radioMult->TabIndex = 2;
			this->radioMult->Text = L"Multiply";
			this->radioMult->UseVisualStyleBackColor = true;
			this->radioMult->CheckedChanged += gcnew System::EventHandler(this, &GUI::radioMult_CheckedChanged);
			// 
			// radioSubtract
			// 
			this->radioSubtract->AutoSize = true;
			this->radioSubtract->Location = System::Drawing::Point(6, 80);
			this->radioSubtract->Name = L"radioSubtract";
			this->radioSubtract->Size = System::Drawing::Size(65, 17);
			this->radioSubtract->TabIndex = 1;
			this->radioSubtract->Text = L"Subtract";
			this->radioSubtract->UseVisualStyleBackColor = true;
			this->radioSubtract->CheckedChanged += gcnew System::EventHandler(this, &GUI::radioSubtract_CheckedChanged);
			// 
			// radioAdd
			// 
			this->radioAdd->AutoSize = true;
			this->radioAdd->Checked = true;
			this->radioAdd->Location = System::Drawing::Point(6, 40);
			this->radioAdd->Name = L"radioAdd";
			this->radioAdd->Size = System::Drawing::Size(44, 17);
			this->radioAdd->TabIndex = 0;
			this->radioAdd->TabStop = true;
			this->radioAdd->Text = L"Add";
			this->radioAdd->UseVisualStyleBackColor = true;
			this->radioAdd->CheckedChanged += gcnew System::EventHandler(this, &GUI::radioAdd_CheckedChanged);
			// 
			// calculate
			// 
			this->calculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->calculate->Location = System::Drawing::Point(245, 304);
			this->calculate->Name = L"calculate";
			this->calculate->Size = System::Drawing::Size(174, 42);
			this->calculate->TabIndex = 3;
			this->calculate->Text = L"CALCULATE";
			this->calculate->UseVisualStyleBackColor = true;
			this->calculate->Click += gcnew System::EventHandler(this, &GUI::calculate_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(552, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"RESULT";
			// 
			// ResultNum
			// 
			this->ResultNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResultNum->Location = System::Drawing::Point(542, 120);
			this->ResultNum->Name = L"ResultNum";
			this->ResultNum->Size = System::Drawing::Size(74, 71);
			this->ResultNum->TabIndex = 5;
			this->ResultNum->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(530, 186);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"______________";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// ResultDen
			// 
			this->ResultDen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResultDen->Location = System::Drawing::Point(542, 207);
			this->ResultDen->Name = L"ResultDen";
			this->ResultDen->Size = System::Drawing::Size(74, 71);
			this->ResultDen->TabIndex = 8;
			this->ResultDen->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 391);
			this->Controls->Add(this->ResultDen);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->ResultNum);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->calculate);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->Frac2);
			this->Controls->Add(this->Frac1);
			this->Name = L"GUI";
			this->Text = L"Fraction Calculator by Adib Chisty (16ac110)";
			this->Frac1->ResumeLayout(false);
			this->Frac1->PerformLayout();
			this->Frac2->ResumeLayout(false);
			this->Frac2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//Event handler for "CALCULATE" button
	private: System::Void calculate_Click(System::Object^ sender, System::EventArgs^ e) { 
		//get integer values of textboxes
		try {
			this->f1num = Int16::Parse(Frac1Num->Text);
			this->f1den = Int16::Parse(Frac1Den->Text);
			this->f2num = Int16::Parse(Frac2Num->Text);
			this->f2den = Int16::Parse(Frac2Den->Text);
		}
		catch (...) { 
			//display errorbox
			MessageBox::Show("Invalid input to fraction input!");
			//clear all textboxes
			Frac1Num->Text = "";
			Frac1Den->Text = "";
			Frac2Num->Text = "";
			Frac2Den->Text = "";
			//clear answer box
			ResultNum->Text = "";
			ResultDen->Text = "";
			return;
		}

		//check if either denominator is zero 
		if (f1den == 0 || f2den == 0) {
			//display errorbox
			MessageBox::Show("Error: A denominator cannot be zero!");
			//clear all textboxes
			Frac1Num->Text = "";
			Frac1Den->Text = "";
			Frac2Num->Text = "";
			Frac2Den->Text = "";
			//clear answer box
			ResultNum->Text = "";
			ResultDen->Text = "";
			return;
		}

		//create fraction classes
		Fraction result;
		Fraction f1(this->f1num, this->f1den);
		Fraction f2(this->f2num, this->f2den);

		//perform operation
		if (this->opState == 0) { //add
			result = f1 + f2;
		}
		else if(this->opState == 1){ //sub
			result = f1 - f2;
		}
		else if (this->opState == 2) { //mult
			result = f1 * f2;
		}
		else { //div
			result = f1 / f2;
		}

		//display result to labels
		ResultNum->Text = Convert::ToString(result.numerator());
		ResultDen->Text = Convert::ToString(result.denominator());
	}
private: System::Void radioAdd_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->opState = 0;
}
private: System::Void radioSubtract_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->opState = 1;
}
private: System::Void radioMult_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->opState = 2;
}
private: System::Void radioDiv_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->opState = 3;
}
};
}
