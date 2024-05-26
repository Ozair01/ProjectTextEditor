#pragma once
#include <string>
#include <msclr/marshal_cppstd.h>
#include <stack>

namespace ProjectTextEditor {

	const int MAX_SIZE = 100; // Define a max size for the stack
	char globalArrayStack[MAX_SIZE]; // Global array to store characters
	int top = -1; // Global variable to track the top of the stack
	int currentPos = -1; // Current position in the stack
	int saved = 0;
	int unsaved = 0;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	stack<char> St;
	stack<string> uStack;
	stack<char> rStack;



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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textInput;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textShow;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBoxChanges;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnMove;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBoxget;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textMakeChange;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textAfterChange;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textInput = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textShow = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxChanges = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnMove = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBoxget = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textMakeChange = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textAfterChange = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Your Text Here:";
			// 
			// textInput
			// 
			this->textInput->Location = System::Drawing::Point(236, 12);
			this->textInput->Name = L"textInput";
			this->textInput->Size = System::Drawing::Size(398, 26);
			this->textInput->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Your Entered Text:";
			// 
			// textShow
			// 
			this->textShow->Enabled = false;
			this->textShow->Location = System::Drawing::Point(236, 171);
			this->textShow->Name = L"textShow";
			this->textShow->Size = System::Drawing::Size(398, 26);
			this->textShow->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 298);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Movment Appear Here";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(369, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 42);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Save This";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBoxChanges
			// 
			this->textBoxChanges->Enabled = false;
			this->textBoxChanges->Location = System::Drawing::Point(236, 292);
			this->textBoxChanges->Name = L"textBoxChanges";
			this->textBoxChanges->Size = System::Drawing::Size(398, 26);
			this->textBoxChanges->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1037, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Movement of cursor";
			// 
			// btnMove
			// 
			this->btnMove->Location = System::Drawing::Point(1002, 58);
			this->btnMove->Name = L"btnMove";
			this->btnMove->Size = System::Drawing::Size(214, 37);
			this->btnMove->TabIndex = 8;
			this->btnMove->Text = L"Move to Start";
			this->btnMove->UseVisualStyleBackColor = true;
			this->btnMove->Click += gcnew System::EventHandler(this, &MyForm::btnMove_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1002, 127);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(214, 34);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Move to End";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1002, 207);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(214, 34);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Prev";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1002, 292);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(214, 33);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Next";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1002, 452);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(214, 38);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Move";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBoxget
			// 
			this->textBoxget->Location = System::Drawing::Point(1002, 411);
			this->textBoxget->Name = L"textBoxget";
			this->textBoxget->Size = System::Drawing::Size(214, 26);
			this->textBoxget->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(998, 377);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 20);
			this->label5->TabIndex = 14;
			this->label5->Text = L"move at";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(236, 606);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(214, 37);
			this->button6->TabIndex = 15;
			this->button6->Text = L"undo";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(478, 606);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(214, 37);
			this->button7->TabIndex = 16;
			this->button7->Text = L"redo";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(50, 431);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 20);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Make Change";
			// 
			// textMakeChange
			// 
			this->textMakeChange->Location = System::Drawing::Point(268, 431);
			this->textMakeChange->Name = L"textMakeChange";
			this->textMakeChange->Size = System::Drawing::Size(182, 26);
			this->textMakeChange->TabIndex = 18;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(496, 431);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(174, 35);
			this->button8->TabIndex = 19;
			this->button8->Text = L"Save Change";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(50, 551);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(104, 20);
			this->label7->TabIndex = 20;
			this->label7->Text = L"After Change";
			// 
			// textAfterChange
			// 
			this->textAfterChange->Enabled = false;
			this->textAfterChange->Location = System::Drawing::Point(281, 548);
			this->textAfterChange->Name = L"textAfterChange";
			this->textAfterChange->Size = System::Drawing::Size(398, 26);
			this->textAfterChange->TabIndex = 21;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1455, 735);
			this->Controls->Add(this->textAfterChange);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textMakeChange);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxget);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnMove);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxChanges);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textShow);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textInput);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


	private: void curr() {
		if (currentPos >= 0 && currentPos <= top) {
			string output(1, globalArrayStack[currentPos]);
			textBoxChanges->Text = gcnew String(output.c_str());
		}
	}
	private: void UpdateText() {
		if (currentPos >= 0 && currentPos <= top) {
			string output(1, globalArrayStack[currentPos]);
			textBoxChanges->Text = gcnew String(output.c_str());
		}
	}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnMove_Click(System::Object^ sender, System::EventArgs^ e) {
		if (top >= 0) {
			currentPos = 0;
			curr();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ inputText = textInput->Text;
		string inputStr = msclr::interop::marshal_as<std::string>(inputText);
		top = -1;
		currentPos = -1;


		while (!uStack.empty()) {
			uStack.pop();
		}
		while (!rStack.empty()) {
			rStack.pop();
		}
		for (char ch : inputStr)
		{
			if (top < MAX_SIZE - 1) {
				globalArrayStack[++top] = ch;
				St.push(ch);
			}
		}

		string stored;
		for (int i = 0; i <= top; ++i) {
			stored += globalArrayStack[i];

		}
		textShow->Text = gcnew String(stored.c_str());

		if (top >= 0) {
			currentPos = 0;
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentPos < top) {
			currentPos++;
			curr();
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentPos > 0) {
			currentPos--;
			curr();
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (top >= 0) {
			currentPos = top;
			curr();
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		string moveTo = msclr::interop::marshal_as<std::string>(textBoxget->Text);
		char character = moveTo[0];

		int i = 0;
		bool found = false;
		for (i = 0; i <= top; ++i) {
			if (globalArrayStack[i] == character) {
				found = true;
				break;
			}
		}

		if (found) {
			currentPos = i;
		}
		curr();

	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		if (saved > 0) {
			St.pop();
			stack<char> reversedStack;


			while (!St.empty()) {
				reversedStack.push(St.top());
				St.pop();
			}

			string undo = "";

			while (!reversedStack.empty()) {
				undo += reversedStack.top();
				St.push(reversedStack.top());
				reversedStack.pop();
			}
			textAfterChange->Text = gcnew String(undo.c_str());
			saved--;
		}
		else {
			MessageBox::Show("No More Changes");
			return;
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ make = textMakeChange->Text;
		string makeChange = msclr::interop::marshal_as<std::string>(make);
		for (char chr : makeChange) {
			St.push(chr);
			saved++;
		}
		stack<char> reversedStack;


		while (!St.empty()) {
			reversedStack.push(St.top());
			rStack.push(St.top());
			unsaved++;
			St.pop();
		}

		string after = "";

		while (!reversedStack.empty()) {
			after += reversedStack.top();
			St.push(reversedStack.top());
			reversedStack.pop();
		}
		textAfterChange->Text = gcnew String(after.c_str());
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (unsaved > 0) {
			string redo = "";
			while (!rStack.empty()) {
				redo += rStack.top();
				rStack.pop();
				textAfterChange->Text = gcnew String(redo.c_str());
				unsaved--;
			}

		}
		else {
			MessageBox::Show("No More Redo");
			return;
		}


	}
	};
}