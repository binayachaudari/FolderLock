#pragma once
#include"Login.h"

namespace FolderLock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(196, 262);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(219, 15);
			this->label3->TabIndex = 15;
			this->label3->Text = L"© Kathmandu University #ENGG Project";
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(333, 200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Register::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(221, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::HistoryList;
			this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox1->Location = System::Drawing::Point(199, 39);
			this->textBox1->MaxLength = 32;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(210, 20);
			this->textBox1->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(195, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 23);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(195, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 23);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Username";
			// 
			// textBox2
			// 
			this->textBox2->AccessibleDescription = L"Password";
			this->textBox2->AccessibleName = L"Password";
			this->textBox2->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(199, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(210, 19);
			this->textBox2->TabIndex = 10;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(195, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 23);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Confirm Password";
			// 
			// textBox3
			// 
			this->textBox3->AccessibleDescription = L"Password";
			this->textBox3->AccessibleName = L"Password";
			this->textBox3->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->textBox3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(199, 160);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(210, 19);
			this->textBox3->TabIndex = 10;
			this->textBox3->UseSystemPasswordChar = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(11, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(181, 267);
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			// 
			// Register
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(431, 295);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Register";
			this->Opacity = 0.9;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ user;
				 String^ pass;
				 user = textBox1->Text;
				 pass = textBox2->Text;
			if (textBox1->Text == "" && textBox2->Text == "")
					 MessageBox::Show("Please Enter Username And Password", "Please Provide Your Login Details", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 else if (textBox1->Text == "")
					 MessageBox::Show("Please Enter Username", "Username", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 else if (textBox2->Text == "")
					 MessageBox::Show("Please Enter Your Password", "Password", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 else if (textBox2->Text != textBox3->Text)
					 MessageBox::Show("Password Did not match", "Password Details", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 else if (textBox2->Text==textBox3->Text)
				 {
					 this->Hide();
					 Login^ Login_page = gcnew Login();
					 Login_page->Show();
				 }
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
}
};
}
