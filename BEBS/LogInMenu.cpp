#include "pch.h"


BEBS::LogInMenu::LogInMenu(void)
{
	InitializeComponent();

}
BEBS::LogInMenu::LogInMenu(Form^ form)
{
	InitializeComponent();
	lastForm = form;
}

BEBS::LogInMenu::~LogInMenu()
{
	if (components)
	{
		delete components;
	}
}

void BEBS::LogInMenu::InitializeComponent(void)
{
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogInMenu::typeid));
	this->labelLogIn = (gcnew System::Windows::Forms::Label());
	this->TextUser = (gcnew System::Windows::Forms::TextBox());
	this->UserLabel = (gcnew System::Windows::Forms::Label());
	this->TextPassword = (gcnew System::Windows::Forms::TextBox());
	this->PasswordLabel = (gcnew System::Windows::Forms::Label());
	this->LogIn = (gcnew System::Windows::Forms::Button());
	this->Register = (gcnew System::Windows::Forms::Button());
	this->Back = (gcnew System::Windows::Forms::Button());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->ForgotPass = (gcnew System::Windows::Forms::Label());
	this->SuspendLayout();
	// 
	// labelLogIn
	// 
	this->labelLogIn->AutoSize = true;
	this->labelLogIn->BackColor = System::Drawing::Color::Transparent;
	this->labelLogIn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->labelLogIn->ForeColor = System::Drawing::Color::White;
	this->labelLogIn->Location = System::Drawing::Point(79, 39);
	this->labelLogIn->Name = L"labelLogIn";
	this->labelLogIn->Size = System::Drawing::Size(143, 57);
	this->labelLogIn->TabIndex = 1;
	this->labelLogIn->Text = L"Log In";
	// 
	// TextUser
	// 
	this->TextUser->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
	this->TextUser->BorderStyle = System::Windows::Forms::BorderStyle::None;
	this->TextUser->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->TextUser->ForeColor = System::Drawing::Color::White;
	this->TextUser->Location = System::Drawing::Point(83, 160);
	this->TextUser->Margin = System::Windows::Forms::Padding(5);
	this->TextUser->Multiline = true;
	this->TextUser->Name = L"TextUser";
	this->TextUser->Size = System::Drawing::Size(322, 40);
	this->TextUser->TabIndex = 4;
	this->TextUser->Text = L"*************";
	this->TextUser->Click += gcnew System::EventHandler(this, &LogInMenu::TextUser_Click);
	this->TextUser->TextChanged += gcnew System::EventHandler(this, &LogInMenu::TextUser_TextChanged);
	// 
	// UserLabel
	// 
	this->UserLabel->AutoSize = true;
	this->UserLabel->BackColor = System::Drawing::Color::Transparent;
	this->UserLabel->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->UserLabel->ForeColor = System::Drawing::Color::White;
	this->UserLabel->Location = System::Drawing::Point(79, 133);
	this->UserLabel->Name = L"UserLabel";
	this->UserLabel->Size = System::Drawing::Size(95, 24);
	this->UserLabel->TabIndex = 2;
	this->UserLabel->Text = L"User Name";
	// 
	// TextPassword
	// 
	this->TextPassword->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
	this->TextPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
	this->TextPassword->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->TextPassword->ForeColor = System::Drawing::Color::White;
	this->TextPassword->Location = System::Drawing::Point(82, 265);
	this->TextPassword->Margin = System::Windows::Forms::Padding(5);
	this->TextPassword->Multiline = true;
	this->TextPassword->Name = L"TextPassword";
	this->TextPassword->PasswordChar = '*';
	this->TextPassword->Size = System::Drawing::Size(322, 40);
	this->TextPassword->TabIndex = 7;
	this->TextPassword->Text = L"*************";
	this->TextPassword->Click += gcnew System::EventHandler(this, &LogInMenu::TextPassword_Click);
	// 
	// PasswordLabel
	// 
	this->PasswordLabel->AutoSize = true;
	this->PasswordLabel->BackColor = System::Drawing::Color::Transparent;
	this->PasswordLabel->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->PasswordLabel->ForeColor = System::Drawing::Color::White;
	this->PasswordLabel->Location = System::Drawing::Point(79, 238);
	this->PasswordLabel->Name = L"PasswordLabel";
	this->PasswordLabel->Size = System::Drawing::Size(87, 24);
	this->PasswordLabel->TabIndex = 3;
	this->PasswordLabel->Text = L"Password";
	// 
	// LogIn
	// 
	this->LogIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(192)));
	this->LogIn->Cursor = System::Windows::Forms::Cursors::Hand;
	this->LogIn->FlatAppearance->BorderColor = System::Drawing::Color::White;
	this->LogIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->LogIn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->LogIn->ForeColor = System::Drawing::Color::White;
	this->LogIn->Location = System::Drawing::Point(83, 443);
	this->LogIn->Name = L"LogIn";
	this->LogIn->Size = System::Drawing::Size(127, 50);
	this->LogIn->TabIndex = 0;
	this->LogIn->Text = L"Log In";
	this->LogIn->UseVisualStyleBackColor = false;
	this->LogIn->Click += gcnew System::EventHandler(this, &LogInMenu::LogIn_Click);
	// 
	// Register
	// 
	this->Register->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(192)));
	this->Register->Cursor = System::Windows::Forms::Cursors::Hand;
	this->Register->FlatAppearance->BorderColor = System::Drawing::Color::White;
	this->Register->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->Register->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->Register->ForeColor = System::Drawing::Color::White;
	this->Register->Location = System::Drawing::Point(234, 443);
	this->Register->Name = L"Register";
	this->Register->Size = System::Drawing::Size(127, 50);
	this->Register->TabIndex = 11;
	this->Register->Text = L"Register";
	this->Register->UseVisualStyleBackColor = false;
	this->Register->Click += gcnew System::EventHandler(this, &LogInMenu::Register_Click);
	// 
	// Back
	// 
	this->Back->BackColor = System::Drawing::Color::White;
	this->Back->Cursor = System::Windows::Forms::Cursors::Hand;
	this->Back->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
	this->Back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->Back->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->Back->ForeColor = System::Drawing::Color::Blue;
	this->Back->Location = System::Drawing::Point(389, 443);
	this->Back->Name = L"Back";
	this->Back->Size = System::Drawing::Size(127, 50);
	this->Back->TabIndex = 12;
	this->Back->Text = L"Back";
	this->Back->UseVisualStyleBackColor = false;
	this->Back->Click += gcnew System::EventHandler(this, &LogInMenu::Exit_Button_Click);
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(0, 0);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(46, 17);
	this->label1->TabIndex = 13;
	this->label1->Text = L"label1";
	// 
	// ForgotPass
	// 
	this->ForgotPass->AutoSize = true;
	this->ForgotPass->BackColor = System::Drawing::Color::Transparent;
	this->ForgotPass->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->ForgotPass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(192)));
	this->ForgotPass->Location = System::Drawing::Point(86, 344);
	this->ForgotPass->Name = L"ForgotPass";
	this->ForgotPass->Size = System::Drawing::Size(150, 23);
	this->ForgotPass->TabIndex = 14;
	this->ForgotPass->Text = L"Forgot Password\?";
	// 
	// LogInMenu
	// 
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
	this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
	this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
	this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->ClientSize = System::Drawing::Size(1133, 629);
	this->Controls->Add(this->ForgotPass);
	this->Controls->Add(this->label1);
	this->Controls->Add(this->Back);
	this->Controls->Add(this->Register);
	this->Controls->Add(this->TextPassword);
	this->Controls->Add(this->TextUser);
	this->Controls->Add(this->PasswordLabel);
	this->Controls->Add(this->UserLabel);
	this->Controls->Add(this->labelLogIn);
	this->Controls->Add(this->LogIn);
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	this->Name = L"LogInMenu";
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	this->Load += gcnew System::EventHandler(this, &LogInMenu::LogInMenu_Load);
	this->ResumeLayout(false);
	this->PerformLayout();

}

System::Void BEBS::LogInMenu::LogIn_Click(System::Object^ sender, System::EventArgs^ e) {
	MySQL db;
	User^ user = db.getInstaseUser(this->TextUser->Text, this->TextPassword->Text);
	if (user == nullptr)
		MessageBox::Show("not found");
	else
		if (user->getUserRole() == "Buyer") {
			delete lastForm;
			this->~LogInMenu();
			BEBS::ShoppingMenu shop(safe_cast<Coustomer^>(user));
			shop.ShowDialog();
		}
		else if(user->getUserRole() == "Admin")
		{
			delete lastForm;
			this->~LogInMenu();
			delete user;
			BEBS::AdminMenu adminPage;
			adminPage.ShowDialog();

		}

}
System::Void BEBS::LogInMenu::Register_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	BEBS::RegisterMenu NewUser(this);
	NewUser.ShowDialog();
}

System::Void BEBS::LogInMenu::Exit_Button_Click(System::Object^ sender, System::EventArgs^ e) {

	this->~LogInMenu();
	BEBS::HomePage HomePage;
	HomePage.ShowDialog();
}

System::Void BEBS::LogInMenu::TextPassword_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextPassword->Text = L"";
}
System::Void BEBS::LogInMenu::TextUser_Click(System::Object^ sender, System::EventArgs^ e) {
	this->TextUser->Text = L"";
}


System::Void BEBS::LogInMenu::LogInMenu_Load(System::Object^ sender, System::EventArgs^ e) {
}
