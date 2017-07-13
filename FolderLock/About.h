#pragma once

namespace FolderLock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for About
	/// </summary>
	public ref class About : public System::Windows::Forms::Form
	{
	public:
		About(void)
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
		~About()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:















	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::LinkLabel^  linkLabel3;
	private: System::Windows::Forms::LinkLabel^  linkLabel4;
	private: System::Windows::Forms::LinkLabel^  linkLabel5;
	private: System::Windows::Forms::LinkLabel^  linkLabel6;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(About::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel6 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"SketchFlow Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(111, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 23);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Folder Lock V1.1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(84, 306);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(219, 15);
			this->label3->TabIndex = 49;
			this->label3->Text = L"© Kathmandu University #ENGG Project";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 20);
			this->label1->TabIndex = 50;
			this->label1->Text = L"Designed and Programmed By:-";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(221, 28);
			this->label4->TabIndex = 51;
			this->label4->Text = L"Binaya Kumar Chaudhary";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(294, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 28);
			this->label6->TabIndex = 51;
			this->label6->Text = L"Sambad Bidari";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(7, 152);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(144, 28);
			this->label8->TabIndex = 51;
			this->label8->Text = L"Ayusha Pradhan";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(144, 266);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(134, 17);
			this->linkLabel1->TabIndex = 52;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Kathmandu University";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &About::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->Location = System::Drawing::Point(36, 286);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(352, 17);
			this->linkLabel2->TabIndex = 52;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Department of Computer Science and Engineering (DoCSE)";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &About::linkLabel2_LinkClicked);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(143, 249);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(129, 16);
			this->label10->TabIndex = 53;
			this->label10->Text = L"© COPYRIGHT 2016";
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel3->Location = System::Drawing::Point(17, 96);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(177, 16);
			this->linkLabel3->TabIndex = 54;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"binayachaudari@gmail.com";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &About::linkLabel3_LinkClicked);
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel4->Location = System::Drawing::Point(235, 126);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(182, 16);
			this->linkLabel4->TabIndex = 54;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"sambad32bidari@gmail.com";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &About::linkLabel4_LinkClicked);
			// 
			// linkLabel5
			// 
			this->linkLabel5->AutoSize = true;
			this->linkLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel5->Location = System::Drawing::Point(13, 180);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(199, 16);
			this->linkLabel5->TabIndex = 54;
			this->linkLabel5->TabStop = true;
			this->linkLabel5->Text = L"pradhan111ayusha@gmail.com";
			this->linkLabel5->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &About::linkLabel5_LinkClicked);
			// 
			// linkLabel6
			// 
			this->linkLabel6->AutoSize = true;
			this->linkLabel6->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel6->Location = System::Drawing::Point(125, 210);
			this->linkLabel6->Name = L"linkLabel6";
			this->linkLabel6->Size = System::Drawing::Size(178, 20);
			this->linkLabel6->TabIndex = 55;
			this->linkLabel6->TabStop = true;
			this->linkLabel6->Text = L"Click Here to Visit Developers";
			this->linkLabel6->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &About::linkLabel6_LinkClicked);
			// 
			// About
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(424, 330);
			this->Controls->Add(this->linkLabel6);
			this->Controls->Add(this->linkLabel3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->linkLabel5);
			this->Controls->Add(this->linkLabel4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"About";
			this->Opacity = 0.9;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"About";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 System::Diagnostics::Process::Start("http://ku.edu.np");
}
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 System::Diagnostics::Process::Start("http://ku.edu.np/cse");
}
private: System::Void linkLabel3_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 System::Diagnostics::Process::Start("https://mail.google.com/mail/u/0/#inbox?compose=new");
}
private: System::Void linkLabel4_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 System::Diagnostics::Process::Start("https://mail.google.com/mail/u/0/#inbox?compose=new");
}
private: System::Void linkLabel5_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 System::Diagnostics::Process::Start("https://mail.google.com/mail/u/0/#inbox?compose=new");
}
private: System::Void linkLabel6_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 System::Diagnostics::Process::Start("https://www.facebook.com/ayusha.pradhan.3");
			 System::Diagnostics::Process::Start("https://www.facebook.com/bidarisambad");
			 System::Diagnostics::Process::Start("https://facebook.com/binayachaudari");
}
};
}
