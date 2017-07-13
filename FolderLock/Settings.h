#pragma once
#include"About.h"

namespace FolderLock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Settings
	/// </summary>
	public ref class Settings : public System::Windows::Forms::Form
	{
	public:
		String^ my_username;
	public:
		Settings(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Settings(String^ text)
		{
			InitializeComponent();
			my_username = text;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Settings()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label7;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Settings::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(11, 258);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 45);
			this->button2->TabIndex = 16;
			this->button2->Text = L"HOME";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Settings::button2_Click);
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->Location = System::Drawing::Point(11, 382);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(147, 47);
			this->button4->TabIndex = 18;
			this->button4->Text = L"ABOUT";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Settings::button4_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(11, 318);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 49);
			this->button3->TabIndex = 17;
			this->button3->Text = L"SETTINGS";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(11, 24);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(159, 228);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 25;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(222, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(201, 36);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Change Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(199, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 25);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Old Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(199, 186);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 25);
			this->label5->TabIndex = 28;
			this->label5->Text = L"New Password:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(200, 271);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(176, 25);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Retype New Password:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(204, 118);
			this->textBox1->MaxLength = 32;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(255, 26);
			this->textBox1->TabIndex = 29;
			this->textBox1->UseSystemPasswordChar = true;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(204, 214);
			this->textBox2->MaxLength = 32;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(255, 26);
			this->textBox2->TabIndex = 29;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(204, 303);
			this->textBox3->MaxLength = 32;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(255, 26);
			this->textBox3->TabIndex = 29;
			this->textBox3->UseSystemPasswordChar = true;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(317, 347);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 46);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Change Password";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Settings::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 28);
			this->label1->TabIndex = 31;
			// 
			// button5
			// 
			this->button5->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(363, 405);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(85, 39);
			this->button5->TabIndex = 30;
			this->button5->Text = L"Close";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Settings::button5_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Subheading", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(247, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 23);
			this->label3->TabIndex = 32;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(138, 442);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(219, 15);
			this->label7->TabIndex = 33;
			this->label7->Text = L"© Kathmandu University #ENGG Project";
			// 
			// Settings
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->button5;
			this->ClientSize = System::Drawing::Size(506, 466);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Settings";
			this->Opacity = 0.9;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Settings";
			this->Load += gcnew System::EventHandler(this, &Settings::Settings_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "")
				 MessageBox::Show("Please Enter Your old Password", "Old Password");
			 if (textBox1->Text != "")
			 {
				 String^ myConnection = "server=db4free.net;port=3306;username=binaya;password=binayastha;database=folderlock";
				 MySqlConnection^ myConn = gcnew MySqlConnection(myConnection);
				 MySqlCommand^ myCommand = gcnew MySqlCommand("select * from folderlock.logintable where Username='"+my_username+"' and Password = '" + this->textBox1->Text + "' ;", myConn);
				 MySqlDataReader^ myReader;
				 try
				 {
					 myConn->Open();
					 myReader = myCommand->ExecuteReader();
					 int count = 0;
					 while (myReader->Read())
					 {
						 count = count + 1;

					 }
					 if (count == 1)
					 {
						 label3->Text = "Old Password-->Correct!";
					 }
					 if (count != 1)
					 {
						 MessageBox::Show("Incorrect Old Password", "Old Password");
					 }
					 myConn->Close();
				 }

				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
			 }
			 
			 if (label3->Text=="Old Password-->Correct!")
			 {
				 if (textBox2->Text == "")
					 MessageBox::Show("Please Enter New Password", "New Password");
				 if (textBox2->Text != "" && textBox3->Text == "")
					 MessageBox::Show("Please Confirm Your New Password", "Confirm Password");
			 }

			 if (label3->Text == "Old Password-->Correct!")
			 {
				 if (textBox2->Text != "")
				 {
					 if (textBox3->Text == textBox2->Text)
					 {
						 String^ myConnection = "server=db4free.net;port=3306;username=binaya;password=binayastha;database=folderlock";
						 MySqlConnection^ myConn = gcnew MySqlConnection(myConnection);
						 MySqlCommand^ myCommand = gcnew MySqlCommand("update folderlock.logintable set Password = '" + this->textBox3->Text + "' where Username='"+my_username+"';", myConn);
						 MySqlDataReader^ myReader;
						 try
						 {
							 myConn->Open();
							 myReader = myCommand->ExecuteReader();
							 MessageBox::Show("Password Changed!!", "Congratulations", MessageBoxButtons::OK, MessageBoxIcon::Information);
							 while (myReader->Read())
							 {

							 }

							 myConn->Close();
						 }

						 catch (Exception^ ex)
						 {
							 MessageBox::Show(ex->Message);
						 }
						 textBox1->Text = "";
						 textBox2->Text = "";
						 textBox3->Text = "";
						 label3->Text = "";
					 }
				 }
			 }
			 
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 About^ about = gcnew About();
			 about->Show();
}
private: System::Void Settings_Load(System::Object^  sender, System::EventArgs^  e) {
			 label1->Text = "Username: " + my_username + " ";
}
};
}
