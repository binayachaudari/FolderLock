#pragma once
#include"Settings.h"
#include"About.h"

namespace FolderLock {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Security::AccessControl;
	using namespace System::Security::Principal;

	/// <summary>
	/// Summary for Main
	/// </summary>

	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		String^ username;

	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
		Main(String^ text)
		{
			InitializeComponent();
			username = text;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;


	private: System::Windows::Forms::Label^  label1;




	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->button2->Location = System::Drawing::Point(16, 254);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 45);
			this->button2->TabIndex = 4;
			this->button2->Text = L"HOME";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(16, 315);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 49);
			this->button3->TabIndex = 5;
			this->button3->Text = L"SETTINGS";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->Location = System::Drawing::Point(16, 379);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(147, 47);
			this->button4->TabIndex = 6;
			this->button4->Text = L"ABOUT";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Main::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 28);
			this->label1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(159, 211);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(186, 249);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Browse Folder";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(181, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(324, 183);
			this->label2->TabIndex = 10;
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(263, 298);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(147, 45);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Lock";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Main::button5_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(339, 249);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(147, 45);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Browse File";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Main::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(263, 357);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(147, 47);
			this->button7->TabIndex = 13;
			this->button7->Text = L"UnLock";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Main::button7_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(222, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(217, 28);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Current File/Folder Path:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(191, 425);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(219, 15);
			this->label4->TabIndex = 15;
			this->label4->Text = L"© Kathmandu University #ENGG Project";
			// 
			// Main
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(506, 466);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Main";
			this->Opacity = 0.9;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Folder Lock";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Main::Main_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 FolderBrowserDialog^ openFolder = gcnew FolderBrowserDialog();
				 if (openFolder->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 String^ Folderpath = openFolder->SelectedPath;
					 label2->Text = Folderpath;
				 }

	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 Stream^ File;
				 OpenFileDialog^ openFile = gcnew OpenFileDialog();
				 openFile->Title = "Choose The Respective file";
				 openFile->Filter = "All Files | *.*";
				 if (openFile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 if ((File = openFile->OpenFile()) != nullptr)
					 {
						 String^ filePath = openFile->InitialDirectory + openFile->FileName;
						 label2->Text = filePath;
						 File->Close();
					 }

				 }
	}

			 //Total hour wasted to implement browse button using OpenFileDialog() to get the location of the selected file = 8 hours.


	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ FolderPath = label2->Text;
				 if (FolderPath != "")
				 {
					 String^ Admin = Environment::UserDomainName + "\\" + Environment::UserName;
					 FileSecurity^ fSecurity = File::GetAccessControl(FolderPath);
					 fSecurity->AddAccessRule(gcnew FileSystemAccessRule(Environment::UserName, FileSystemRights::FullControl, AccessControlType::Deny));
					 File::SetAccessControl(FolderPath, fSecurity);
					 MessageBox::Show("Folder OR File is Locked", "Congratulations!!");

					 /*  String^ Admin = Environment::UserName;
					 DirectoryInfo^ dInfo = gcnew DirectoryInfo(FolderPath);
					 DirectorySecurity^ dSecurity = dInfo->GetAccessControl();
					 dSecurity->AddAccessRule(gcnew FileSystemAccessRule(Admin, FileSystemRights::FullControl, AccessControlType::Deny));
					 dInfo->SetAccessControl(dSecurity);
					 */


				 }

	}

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ FolderPath = label2->Text;
				 if (FolderPath != "")
				 {
					 String^ Admin = Environment::UserDomainName + "\\" + Environment::UserName;
					 FileSecurity^ fSecurity = File::GetAccessControl(FolderPath);
					 fSecurity->RemoveAccessRule(gcnew FileSystemAccessRule(Environment::UserName, FileSystemRights::FullControl, AccessControlType::Deny));
					 File::SetAccessControl(FolderPath, fSecurity);
					 MessageBox::Show("Folder OR File is Unlocked", "Congratulations!!");
				 }
	}
	private: System::Void Main_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 Application::Exit();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Settings^ Change = gcnew Settings(username);
				 Change->Show();
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 About^ about = gcnew About();
			 about->Show();
}
private: System::Void Main_Load(System::Object^  sender, System::EventArgs^  e) {
			 label1->Text = "Welcome: "+username+" ";
}
};
}