#pragma once
#include "Main.h"
#include"Settings.h"
namespace FolderLock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Label^  Status;
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Status = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(195, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(195, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 23);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Password";
			// 
			// textBox1
			// 
			this->textBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::HistoryList;
			this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox1->Location = System::Drawing::Point(199, 86);
			this->textBox1->MaxLength = 32;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(210, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Click += gcnew System::EventHandler(this, &Login::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Login::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->AccessibleDescription = L"Password";
			this->textBox2->AccessibleName = L"Password";
			this->textBox2->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Monaco", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(199, 149);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(210, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &Login::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Login::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(199, 203);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// Status
			// 
			this->Status->Font = (gcnew System::Drawing::Font(L"Monaco", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Status->Location = System::Drawing::Point(196, 172);
			this->Status->Name = L"Status";
			this->Status->Size = System::Drawing::Size(208, 28);
			this->Status->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(181, 267);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(333, 202);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(196, 264);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(219, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"© Kathmandu University #ENGG Project";
			// 
			// Login
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(424, 291);
			this->ControlBox = false;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Status);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Login";
			this->Opacity = 0.9;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Folder Lock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ username;
				 if (textBox1->Text == "" && textBox2->Text == "")
					 MessageBox::Show("Please Enter Username And Password", "Please Provide Your Login Details", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 else if (textBox1->Text == "")
					 MessageBox::Show("Please Enter Username", "Username", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 else if (textBox2->Text == "")
					 MessageBox::Show("Please Enter Your Password", "Password", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 if (textBox1->Text != ""&& textBox2->Text != "")
				 {
					 String^ myConnection = "server=db4free.net;port=3306;username=binaya;password=binayastha;database=folderlock";
					 MySqlConnection^ myConn = gcnew MySqlConnection(myConnection);
					 MySqlCommand^ myCommand = gcnew MySqlCommand("select * from folderlock.logintable where Username='" + this->textBox1->Text + "' and Password = '" + this->textBox2->Text + "' ;", myConn);
					 MySqlDataReader^ myReader;
					 try
					 {
						 myConn->Open();
						 myReader = myCommand->ExecuteReader();
						 int count = 0;
						 while (myReader->Read())
						 {
							 count = count + 1;
							 username = myReader["Username"]->ToString();
						 }
						 if (count == 1)
						 {
							 Status->Text = "Login successful!!";
						 }
						 else if (count > 1)
						 {
							 MessageBox::Show("Duplicate Username and password....", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Information);
						 }
						 else
						 {
							 Status->Text = "Login Failed!!";
							 MessageBox::Show("Username OR Password is Incorrect", "Invalid Login", MessageBoxButtons::OK, MessageBoxIcon::Error);
						 }
						 myConn->Close();
					 }

					 catch (Exception^ ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
				 }
				
				 
				 if (Status->Text == "Login successful!!")
				 {
					 this->Hide();
					 Main^ Main_Window = gcnew Main(username);
					 Main_Window->Show();
				 }
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
	}
	private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Status->Text = "";
	}
	private: System::Void textBox2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Status->Text = "";
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 Status->Text = "";
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 Status->Text = "";
	}
	};
}
