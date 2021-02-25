#include "pch.h"



BEBS::RegisterMenu::RegisterMenu(void)
{
	InitializeComponent();

}
BEBS::RegisterMenu::RegisterMenu(Form^ lastForm)
{
	this->lastForm = lastForm;
	InitializeComponent();


}


BEBS::RegisterMenu::~RegisterMenu()
{
	if (components)
	{
		delete components;
	}
}

void BEBS::RegisterMenu::InitializeComponent(void)
{
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterMenu::typeid));
	this->labelUser = (gcnew System::Windows::Forms::Label());
	this->textUser = (gcnew System::Windows::Forms::TextBox());
	this->textPass = (gcnew System::Windows::Forms::TextBox());
	this->labelPass = (gcnew System::Windows::Forms::Label());
	this->labelName = (gcnew System::Windows::Forms::Label());
	this->CreateAcount = (gcnew System::Windows::Forms::Button());
	this->labelRegister = (gcnew System::Windows::Forms::Label());
	this->backButtonImage = (gcnew System::Windows::Forms::PictureBox());
	this->backButton = (gcnew System::Windows::Forms::Label());
	this->checkConditation = (gcnew System::Windows::Forms::CheckBox());
	this->ConditionText = (gcnew System::Windows::Forms::Label());
	this->textName = (gcnew System::Windows::Forms::TextBox());
	this->textPhone = (gcnew System::Windows::Forms::TextBox());
	this->labelPhone = (gcnew System::Windows::Forms::Label());
	this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
	this->panel = (gcnew System::Windows::Forms::Panel());
	this->textCondition = (gcnew System::Windows::Forms::TextBox());
	this->labelTerm = (gcnew System::Windows::Forms::Label());
	this->closeCondition = (gcnew System::Windows::Forms::Button());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backButtonImage))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
	this->panel->SuspendLayout();
	this->SuspendLayout();
	// 
	// labelUser
	// 
	this->labelUser->AutoSize = true;
	this->labelUser->BackColor = System::Drawing::Color::Transparent;
	this->labelUser->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->labelUser->ForeColor = System::Drawing::Color::White;
	this->labelUser->Location = System::Drawing::Point(79, 143);
	this->labelUser->Name = L"labelUser";
	this->labelUser->Size = System::Drawing::Size(165, 19);
	this->labelUser->TabIndex = 0;
	this->labelUser->Text = L"Email (User Name) :";
	// 
	// textUser
	// 
	this->textUser->BackColor = System::Drawing::Color::Black;
	this->textUser->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->textUser->ForeColor = System::Drawing::Color::White;
	this->textUser->Location = System::Drawing::Point(269, 143);
	this->textUser->Name = L"textUser";
	this->textUser->Size = System::Drawing::Size(280, 30);
	this->textUser->TabIndex = 1;
	// 
	// textPass
	// 
	this->textPass->BackColor = System::Drawing::Color::Black;
	this->textPass->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->textPass->ForeColor = System::Drawing::Color::White;
	this->textPass->Location = System::Drawing::Point(269, 226);
	this->textPass->Name = L"textPass";
	this->textPass->PasswordChar = '*';
	this->textPass->Size = System::Drawing::Size(280, 30);
	this->textPass->TabIndex = 3;
	// 
	// labelPass
	// 
	this->labelPass->AutoSize = true;
	this->labelPass->BackColor = System::Drawing::Color::Transparent;
	this->labelPass->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->labelPass->ForeColor = System::Drawing::Color::White;
	this->labelPass->Location = System::Drawing::Point(79, 226);
	this->labelPass->Name = L"labelPass";
	this->labelPass->Size = System::Drawing::Size(98, 19);
	this->labelPass->TabIndex = 2;
	this->labelPass->Text = L"Password :";
	// 
	// labelName
	// 
	this->labelName->AutoSize = true;
	this->labelName->BackColor = System::Drawing::Color::Transparent;
	this->labelName->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->labelName->ForeColor = System::Drawing::Color::White;
	this->labelName->Location = System::Drawing::Point(79, 307);
	this->labelName->Name = L"labelName";
	this->labelName->Size = System::Drawing::Size(59, 19);
	this->labelName->TabIndex = 4;
	this->labelName->Text = L"Name:";
	// 
	// CreateAcount
	// 
	this->CreateAcount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(192)));
	this->CreateAcount->Cursor = System::Windows::Forms::Cursors::Hand;
	this->CreateAcount->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->CreateAcount->ForeColor = System::Drawing::Color::White;
	this->CreateAcount->Location = System::Drawing::Point(79, 546);
	this->CreateAcount->Name = L"CreateAcount";
	this->CreateAcount->Size = System::Drawing::Size(127, 50);
	this->CreateAcount->TabIndex = 6;
	this->CreateAcount->Text = L"Create Acount";
	this->CreateAcount->UseVisualStyleBackColor = false;
	this->CreateAcount->Click += gcnew System::EventHandler(this, &RegisterMenu::Next_Click);
	// 
	// labelRegister
	// 
	this->labelRegister->AutoSize = true;
	this->labelRegister->BackColor = System::Drawing::Color::Transparent;
	this->labelRegister->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 28.2F, System::Drawing::FontStyle::Bold));
	this->labelRegister->ForeColor = System::Drawing::Color::White;
	this->labelRegister->Location = System::Drawing::Point(79, 39);
	this->labelRegister->Name = L"labelRegister";
	this->labelRegister->Size = System::Drawing::Size(182, 57);
	this->labelRegister->TabIndex = 9;
	this->labelRegister->Text = L"Register";
	// 
	// backButtonImage
	// 
	this->backButtonImage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backButtonImage.BackgroundImage")));
	this->backButtonImage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->backButtonImage->Cursor = System::Windows::Forms::Cursors::Hand;
	this->backButtonImage->Location = System::Drawing::Point(1018, 39);
	this->backButtonImage->Name = L"backButtonImage";
	this->backButtonImage->Size = System::Drawing::Size(40, 40);
	this->backButtonImage->TabIndex = 11;
	this->backButtonImage->TabStop = false;
	this->backButtonImage->Click += gcnew System::EventHandler(this, &RegisterMenu::BackLastGui_Click);
	// 
	// backButton
	// 
	this->backButton->AutoSize = true;
	this->backButton->Cursor = System::Windows::Forms::Cursors::Hand;
	this->backButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->backButton->ForeColor = System::Drawing::Color::White;
	this->backButton->Location = System::Drawing::Point(1013, 82);
	this->backButton->Name = L"backButton";
	this->backButton->Size = System::Drawing::Size(57, 29);
	this->backButton->TabIndex = 12;
	this->backButton->Text = L"Back";
	this->backButton->Click += gcnew System::EventHandler(this, &RegisterMenu::BackLastGui_Click);
	// 
	// checkConditation
	// 
	this->checkConditation->AutoSize = true;
	this->checkConditation->BackColor = System::Drawing::Color::Black;
	this->checkConditation->Cursor = System::Windows::Forms::Cursors::Hand;
	this->checkConditation->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->checkConditation->ForeColor = System::Drawing::Color::White;
	this->checkConditation->Location = System::Drawing::Point(89, 471);
	this->checkConditation->Name = L"checkConditation";
	this->checkConditation->Size = System::Drawing::Size(140, 23);
	this->checkConditation->TabIndex = 9;
	this->checkConditation->Text = L"I agree to the ";
	this->checkConditation->UseVisualStyleBackColor = false;
	// 
	// ConditionText
	// 
	this->ConditionText->AutoSize = true;
	this->ConditionText->BackColor = System::Drawing::Color::Black;
	this->ConditionText->Cursor = System::Windows::Forms::Cursors::Hand;
	this->ConditionText->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->ConditionText->ForeColor = System::Drawing::Color::Blue;
	this->ConditionText->Location = System::Drawing::Point(210, 473);
	this->ConditionText->Name = L"ConditionText";
	this->ConditionText->Size = System::Drawing::Size(190, 19);
	this->ConditionText->TabIndex = 10;
	this->ConditionText->Text = L"Terms and Condiations";
	this->ConditionText->Click += gcnew System::EventHandler(this, &RegisterMenu::ConditionText_Click);
	// 
	// textName
	// 
	this->textName->BackColor = System::Drawing::Color::Black;
	this->textName->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->textName->ForeColor = System::Drawing::Color::White;
	this->textName->Location = System::Drawing::Point(269, 307);
	this->textName->Name = L"textName";
	this->textName->Size = System::Drawing::Size(280, 30);
	this->textName->TabIndex = 13;
	// 
	// textPhone
	// 
	this->textPhone->BackColor = System::Drawing::Color::Black;
	this->textPhone->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->textPhone->ForeColor = System::Drawing::Color::White;
	this->textPhone->Location = System::Drawing::Point(269, 381);
	this->textPhone->Name = L"textPhone";
	this->textPhone->Size = System::Drawing::Size(280, 30);
	this->textPhone->TabIndex = 5;
	// 
	// labelPhone
	// 
	this->labelPhone->AutoSize = true;
	this->labelPhone->BackColor = System::Drawing::Color::Transparent;
	this->labelPhone->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->labelPhone->ForeColor = System::Drawing::Color::White;
	this->labelPhone->Location = System::Drawing::Point(79, 381);
	this->labelPhone->Name = L"labelPhone";
	this->labelPhone->Size = System::Drawing::Size(65, 19);
	this->labelPhone->TabIndex = 14;
	this->labelPhone->Text = L"Phone:";
	// 
	// pictureBox1
	// 
	this->pictureBox1->BackColor = System::Drawing::Color::Black;
	this->pictureBox1->Location = System::Drawing::Point(80, 471);
	this->pictureBox1->Name = L"pictureBox1";
	this->pictureBox1->Size = System::Drawing::Size(309, 32);
	this->pictureBox1->TabIndex = 15;
	this->pictureBox1->TabStop = false;
	// 
	// panel
	// 
	this->panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel.BackgroundImage")));
	this->panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->panel->Controls->Add(this->labelTerm);
	this->panel->Controls->Add(this->closeCondition);
	this->panel->Controls->Add(this->textCondition);
	this->panel->Location = System::Drawing::Point(0, 0);
	this->panel->Name = L"panel";
	this->panel->Size = System::Drawing::Size(1147, 644);
	this->panel->TabIndex = 16;
	
	// 
	// textCondition
	// 
	this->textCondition->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)));
	this->textCondition->Cursor = System::Windows::Forms::Cursors::Default;
	this->textCondition->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->textCondition->Location = System::Drawing::Point(289, 66);
	this->textCondition->Multiline = true;
	this->textCondition->Name = L"textCondition";
	this->textCondition->ReadOnly = true;
	this->textCondition->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	this->textCondition->Size = System::Drawing::Size(604, 316);
	this->textCondition->TabIndex = 0;
	this->textCondition->Text = resources->GetString(L"textCondition.Text");
	// 
	// labelTerm
	// 
	this->labelTerm->AutoSize = true;
	this->labelTerm->BackColor = System::Drawing::Color::Transparent;
	this->labelTerm->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->labelTerm->ForeColor = System::Drawing::Color::White;
	this->labelTerm->Location = System::Drawing::Point(279, 9);
	this->labelTerm->Name = L"labelTerm";
	this->labelTerm->Size = System::Drawing::Size(315, 57);
	this->labelTerm->TabIndex = 5;
	this->labelTerm->Text = L"Term Condition";
	// 
	// closeCondition
	// 
	this->closeCondition->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(192)));
	this->closeCondition->Cursor = System::Windows::Forms::Cursors::Hand;
	this->closeCondition->FlatAppearance->BorderColor = System::Drawing::Color::White;
	this->closeCondition->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->closeCondition->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->closeCondition->ForeColor = System::Drawing::Color::White;
	this->closeCondition->Location = System::Drawing::Point(289, 377);
	this->closeCondition->Name = L"closeCondition";
	this->closeCondition->Size = System::Drawing::Size(308, 50);
	this->closeCondition->TabIndex = 4;
	this->closeCondition->Text = L"Go Back";
	this->closeCondition->UseVisualStyleBackColor = false;
	this->closeCondition->Click += gcnew System::EventHandler(this, &RegisterMenu::closeConditionClick);
	// 
	// RegisterMenu
	// 
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
	this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
	this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
	this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->ClientSize = System::Drawing::Size(1133, 629);
	panel->Hide();
	this->Controls->Add(this->panel);
	this->Controls->Add(this->ConditionText);
	this->Controls->Add(this->checkConditation);
	this->Controls->Add(this->pictureBox1);
	this->Controls->Add(this->labelPhone);
	this->Controls->Add(this->textName);
	this->Controls->Add(this->backButton);
	this->Controls->Add(this->backButtonImage);
	this->Controls->Add(this->labelRegister);
	this->Controls->Add(this->CreateAcount);
	this->Controls->Add(this->textPhone);
	this->Controls->Add(this->labelName);
	this->Controls->Add(this->textPass);
	this->Controls->Add(this->labelPass);
	this->Controls->Add(this->textUser);
	this->Controls->Add(this->labelUser);
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	this->Name = L"RegisterMenu";
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backButtonImage))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
	this->panel->ResumeLayout(false);
	this->panel->PerformLayout();
	this->ResumeLayout(false);
	this->PerformLayout();

}



System::Void BEBS::RegisterMenu::ConditionText_Click(System::Object^ sender, System::EventArgs^ e) {
	panel->Show();
}


System::Void BEBS::RegisterMenu::BackLastGui_Click(System::Object^ sender, System::EventArgs^ e) {
	this->~RegisterMenu();
	lastForm->Show();
}



System::Void BEBS::RegisterMenu::Next_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->textUser->Text;
	String^ pass = this->textPass->Text;
	String^ name = this->textName->Text;
	if (isValidInfoUser(email, pass, name))
	{
		if (!this->checkConditation->Checked)
		{
			MessageBox::Show("You need to confirm our terms");
			return;
		}
		MySQL db;
		if (db.addNewUser(email, pass, name)) {
			MessageBox::Show("Conrgulition you are amember on our shop");
			this->~RegisterMenu();
			BEBS::LogInMenu logIn(lastForm);
			logIn.ShowDialog();
		}
		else {
			MessageBox::Show("This Email Already Exist");
		}
	}
}
System::Void BEBS::RegisterMenu::closeConditionClick(System::Object^ sender, System::EventArgs^ e) {
	panel->Hide();
}



