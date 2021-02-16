#include "pch.h"


BEBS::ShoppingMenu::ShoppingMenu(void)
{
	user = gcnew Coustomer();

	InitializeComponent();
	this->UserName->Text = L"LogIn";
	this->getItemR();
}

BEBS::ShoppingMenu::ShoppingMenu(Coustomer^ user)
{
	this->user = user;
	InitializeComponent();
	this->UserName->Text = user->getName();
	this->getItemR();

}

System::Void BEBS::ShoppingMenu::ArrowL_Click(System::Object^ sender, System::EventArgs^ e) {
	this->getItemL();
}
System::Void BEBS::ShoppingMenu::ArrowR_Click(System::Object^ sender, System::EventArgs^ e) {
	this->getItemR();
}

BEBS::ShoppingMenu::~ShoppingMenu()
{
	if (components)
		delete components;
	if (user)
		delete user;
}
void BEBS::ShoppingMenu::getItemR(void)
{
	Book^ book = store.getBook();
	if (book == nullptr)
		return;
	this->item1->BackgroundImage = Image::FromFile(book->getImg());
	this->titleItem1->Text = book->getTitle();
	this->PriceItem1->Text = book->getPrice();
	this->item1->Name = book->getBookId();
	
	book = store.getBook();
	if (book == nullptr)
		return;
	this->item2->BackgroundImage = Image::FromFile(book->getImg());
	this->PriceItem2->Text = book->getPrice();
	this->titleItem2->Text = book->getTitle();
	this->item2->Name = book->getBookId();
	
	book = store.getBook();
	if (book == nullptr)
		return;
	this->item3->BackgroundImage = Image::FromFile(book->getImg());
	this->PriceItem3->Text = book->getPrice();
	this->titleItem3->Text = book->getTitle();
	this->item3->Name = book->getBookId();
	
	book = store.getBook();
	if (book == nullptr)
		return;
	this->item4->BackgroundImage = Image::FromFile(book->getImg());
	this->PriceItem4->Text = book->getPrice();
	this->titleItem4->Text = book->getTitle();
	this->item4->Name = book->getBookId();
	
}



void BEBS::ShoppingMenu::getItemL(void)
{
	store.BookLIndex();
	Book^ book = store.getBook();
	if (book == nullptr)
		return;
	this->item1->BackgroundImage = Image::FromFile(book->getImg());
	
	this->titleItem1->Text = book->getTitle();
	this->PriceItem1->Text = book->getPrice();
	this->item1->Name = book->getBookId();

	book = store.getBook();
	if (book == nullptr)
		return;
	this->item2->BackgroundImage = Image::FromFile(book->getImg());
	this->PriceItem2->Text = book->getPrice();
	this->titleItem2->Text = book->getTitle();
	this->item2->Name = book->getBookId();

	book = store.getBook();
	if (book == nullptr)
		return;
	this->item3->BackgroundImage = Image::FromFile(book->getImg());
	this->PriceItem3->Text = book->getPrice();
	this->titleItem3->Text = book->getTitle();
	this->item3->Name = book->getBookId();

	book = store.getBook();
	if (book == nullptr)
		return;
	this->item4->BackgroundImage = Image::FromFile(book->getImg());
	this->PriceItem4->Text = book->getPrice();
	this->titleItem4->Text = book->getTitle();
	this->item4->Name = book->getBookId();

}


void BEBS::ShoppingMenu::InitializeComponent(void)
{
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ShoppingMenu::typeid));
	this->TextSearch = (gcnew System::Windows::Forms::TextBox());
	this->CartIcon = (gcnew System::Windows::Forms::PictureBox());
	this->SearchIcon = (gcnew System::Windows::Forms::PictureBox());
	this->profile = (gcnew System::Windows::Forms::PictureBox());
	this->UserName = (gcnew System::Windows::Forms::Label());
	this->HomePage = (gcnew System::Windows::Forms::PictureBox());
	this->labelBackLastPage = (gcnew System::Windows::Forms::Label());
	this->picItems = (gcnew System::Windows::Forms::PictureBox());
	this->titleItem1 = (gcnew System::Windows::Forms::Label());
	this->titleItem2 = (gcnew System::Windows::Forms::Label());
	this->titleItem3 = (gcnew System::Windows::Forms::Label());
	this->titleItem4 = (gcnew System::Windows::Forms::Label());
	this->PriceItem1 = (gcnew System::Windows::Forms::Label());
	this->PriceItem2 = (gcnew System::Windows::Forms::Label());
	this->PriceItem3 = (gcnew System::Windows::Forms::Label());
	this->PriceItem4 = (gcnew System::Windows::Forms::Label());
	this->ArrowL = (gcnew System::Windows::Forms::PictureBox());
	this->ArrowR = (gcnew System::Windows::Forms::PictureBox());
	this->item1 = (gcnew System::Windows::Forms::PictureBox());
	this->item2 = (gcnew System::Windows::Forms::PictureBox());
	this->item3 = (gcnew System::Windows::Forms::PictureBox());
	this->item4 = (gcnew System::Windows::Forms::PictureBox());
	this->addItem2 = (gcnew System::Windows::Forms::Label());
	this->addItem1 = (gcnew System::Windows::Forms::Label());
	this->addItem3 = (gcnew System::Windows::Forms::Label());
	this->addItem4 = (gcnew System::Windows::Forms::Label());
	this->PayBill = (gcnew System::Windows::Forms::Button());
	this->UserLabel = (gcnew System::Windows::Forms::Label());
	this->Invoice = (gcnew System::Windows::Forms::ListBox());
	this->totalPay = (gcnew System::Windows::Forms::TextBox());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CartIcon))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SearchIcon))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picItems))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ArrowL))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ArrowR))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item1))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item2))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item3))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item4))->BeginInit();
	this->SuspendLayout();
	// 
	// TextSearch
	// 
	this->TextSearch->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
	this->TextSearch->BorderStyle = System::Windows::Forms::BorderStyle::None;
	this->TextSearch->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->TextSearch->ForeColor = System::Drawing::Color::White;
	this->TextSearch->Location = System::Drawing::Point(28, 57);
	this->TextSearch->Margin = System::Windows::Forms::Padding(5);
	this->TextSearch->Multiline = true;
	this->TextSearch->Name = L"TextSearch";
	this->TextSearch->Size = System::Drawing::Size(520, 40);
	this->TextSearch->TabIndex = 4;
	this->TextSearch->TextChanged += gcnew System::EventHandler(this, &ShoppingMenu::TextSearch_TextChanged);
	// 
	// CartIcon
	// 
	this->CartIcon->BackColor = System::Drawing::Color::Transparent;
	this->CartIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CartIcon.BackgroundImage")));
	this->CartIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->CartIcon->Cursor = System::Windows::Forms::Cursors::Hand;
	this->CartIcon->Location = System::Drawing::Point(601, 57);
	this->CartIcon->Name = L"CartIcon";
	this->CartIcon->Size = System::Drawing::Size(49, 40);
	this->CartIcon->TabIndex = 5;
	this->CartIcon->TabStop = false;
	// 
	// SearchIcon
	// 
	this->SearchIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SearchIcon.BackgroundImage")));
	this->SearchIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->SearchIcon->Cursor = System::Windows::Forms::Cursors::Hand;
	this->SearchIcon->Location = System::Drawing::Point(546, 57);
	this->SearchIcon->Name = L"SearchIcon";
	this->SearchIcon->Size = System::Drawing::Size(49, 40);
	this->SearchIcon->TabIndex = 6;
	this->SearchIcon->TabStop = false;
	this->SearchIcon->Click += gcnew System::EventHandler(this, &ShoppingMenu::SearchIcon_Click);
	// 
	// profile
	// 
	this->profile->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profile.BackgroundImage")));
	this->profile->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->profile->Cursor = System::Windows::Forms::Cursors::Hand;
	this->profile->Location = System::Drawing::Point(825, 57);
	this->profile->Name = L"profile";
	this->profile->Size = System::Drawing::Size(40, 40);
	this->profile->TabIndex = 7;
	this->profile->TabStop = false;
	this->profile->Click += gcnew System::EventHandler(this, &ShoppingMenu::profile_Click);
	// 
	// UserName
	// 
	this->UserName->AutoSize = true;
	this->UserName->Cursor = System::Windows::Forms::Cursors::Hand;
	this->UserName->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->UserName->ForeColor = System::Drawing::Color::White;
	this->UserName->Location = System::Drawing::Point(822, 100);
	this->UserName->Name = L"UserName";
	this->UserName->Size = System::Drawing::Size(0, 29);
	this->UserName->TabIndex = 8;
	this->UserName->Click += gcnew System::EventHandler(this, &ShoppingMenu::profile_Click);
	// 
	// HomePage
	// 
	this->HomePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomePage.BackgroundImage")));
	this->HomePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->HomePage->Cursor = System::Windows::Forms::Cursors::Hand;
	this->HomePage->Location = System::Drawing::Point(978, 57);
	this->HomePage->Name = L"HomePage";
	this->HomePage->Size = System::Drawing::Size(40, 40);
	this->HomePage->TabIndex = 9;
	this->HomePage->TabStop = false;
	this->HomePage->Click += gcnew System::EventHandler(this, &ShoppingMenu::HomePage_Click);
	// 
	// labelBackLastPage
	// 
	this->labelBackLastPage->AutoSize = true;
	this->labelBackLastPage->Cursor = System::Windows::Forms::Cursors::Hand;
	this->labelBackLastPage->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->labelBackLastPage->ForeColor = System::Drawing::Color::White;
	this->labelBackLastPage->Location = System::Drawing::Point(973, 100);
	this->labelBackLastPage->Name = L"labelBackLastPage";
	this->labelBackLastPage->Size = System::Drawing::Size(45, 29);
	this->labelBackLastPage->TabIndex = 13;
	this->labelBackLastPage->Text = L"Exit";
	this->labelBackLastPage->Click += gcnew System::EventHandler(this, &ShoppingMenu::HomePage_Click);
	// 
	// picItems
	// 
	this->picItems->BackColor = System::Drawing::Color::Transparent;
	this->picItems->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->picItems->Location = System::Drawing::Point(28, 142);
	this->picItems->Name = L"picItems";
	this->picItems->Size = System::Drawing::Size(567, 378);
	this->picItems->TabIndex = 14;
	this->picItems->TabStop = false;
	this->picItems->Click += gcnew System::EventHandler(this, &ShoppingMenu::pictureBox1_Click);
	// 
	// titleItem1
	// 
	this->titleItem1->AutoSize = true;
	this->titleItem1->BackColor = System::Drawing::Color::Transparent;
	this->titleItem1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->titleItem1->ForeColor = System::Drawing::Color::White;
	this->titleItem1->Location = System::Drawing::Point(160, 167);
	this->titleItem1->Name = L"titleItem1";
	this->titleItem1->Size = System::Drawing::Size(0, 20);
	this->titleItem1->TabIndex = 19;
	// 
	// titleItem2
	// 
	this->titleItem2->AutoSize = true;
	this->titleItem2->BackColor = System::Drawing::Color::Transparent;
	this->titleItem2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->titleItem2->ForeColor = System::Drawing::Color::White;
	this->titleItem2->Location = System::Drawing::Point(374, 167);
	this->titleItem2->Name = L"titleItem2";
	this->titleItem2->Size = System::Drawing::Size(0, 20);
	this->titleItem2->TabIndex = 20;
	// 
	// titleItem3
	// 
	this->titleItem3->AutoSize = true;
	this->titleItem3->BackColor = System::Drawing::Color::Transparent;
	this->titleItem3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->titleItem3->ForeColor = System::Drawing::Color::White;
	this->titleItem3->Location = System::Drawing::Point(155, 352);
	this->titleItem3->Name = L"titleItem3";
	this->titleItem3->Size = System::Drawing::Size(0, 20);
	this->titleItem3->TabIndex = 21;
	// 
	// titleItem4
	// 
	this->titleItem4->AutoSize = true;
	this->titleItem4->BackColor = System::Drawing::Color::Transparent;
	this->titleItem4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->titleItem4->ForeColor = System::Drawing::Color::White;
	this->titleItem4->Location = System::Drawing::Point(376, 352);
	this->titleItem4->Name = L"titleItem4";
	this->titleItem4->Size = System::Drawing::Size(0, 20);
	this->titleItem4->TabIndex = 22;
	// 
	// PriceItem1
	// 
	this->PriceItem1->AutoSize = true;
	this->PriceItem1->BackColor = System::Drawing::Color::Transparent;
	this->PriceItem1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->PriceItem1->ForeColor = System::Drawing::Color::White;
	this->PriceItem1->Location = System::Drawing::Point(160, 297);
	this->PriceItem1->Name = L"PriceItem1";
	this->PriceItem1->Size = System::Drawing::Size(0, 20);
	this->PriceItem1->TabIndex = 23;
	// 
	// PriceItem2
	// 
	this->PriceItem2->AutoSize = true;
	this->PriceItem2->BackColor = System::Drawing::Color::Transparent;
	this->PriceItem2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->PriceItem2->ForeColor = System::Drawing::Color::White;
	this->PriceItem2->Location = System::Drawing::Point(374, 297);
	this->PriceItem2->Name = L"PriceItem2";
	this->PriceItem2->Size = System::Drawing::Size(0, 20);
	this->PriceItem2->TabIndex = 24;
	// 
	// PriceItem3
	// 
	this->PriceItem3->AutoSize = true;
	this->PriceItem3->BackColor = System::Drawing::Color::Transparent;
	this->PriceItem3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->PriceItem3->ForeColor = System::Drawing::Color::White;
	this->PriceItem3->Location = System::Drawing::Point(160, 483);
	this->PriceItem3->Name = L"PriceItem3";
	this->PriceItem3->Size = System::Drawing::Size(0, 20);
	this->PriceItem3->TabIndex = 25;
	// 
	// PriceItem4
	// 
	this->PriceItem4->AutoSize = true;
	this->PriceItem4->BackColor = System::Drawing::Color::Transparent;
	this->PriceItem4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->PriceItem4->ForeColor = System::Drawing::Color::White;
	this->PriceItem4->Location = System::Drawing::Point(374, 483);
	this->PriceItem4->Name = L"PriceItem4";
	this->PriceItem4->Size = System::Drawing::Size(0, 20);
	this->PriceItem4->TabIndex = 26;
	// 
	// ArrowL
	// 
	this->ArrowL->BackColor = System::Drawing::Color::Transparent;
	this->ArrowL->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ArrowL.BackgroundImage")));
	this->ArrowL->Cursor = System::Windows::Forms::Cursors::Hand;
	this->ArrowL->Location = System::Drawing::Point(36, 295);
	this->ArrowL->Name = L"ArrowL";
	this->ArrowL->Size = System::Drawing::Size(70, 60);
	this->ArrowL->TabIndex = 31;
	this->ArrowL->TabStop = false;
	this->ArrowL->Click += gcnew System::EventHandler(this, &ShoppingMenu::ArrowL_Click);
	// 
	// ArrowR
	// 
	this->ArrowR->BackColor = System::Drawing::Color::Transparent;
	this->ArrowR->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ArrowR.BackgroundImage")));
	this->ArrowR->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->ArrowR->Cursor = System::Windows::Forms::Cursors::Hand;
	this->ArrowR->Location = System::Drawing::Point(517, 295);
	this->ArrowR->Name = L"ArrowR";
	this->ArrowR->Size = System::Drawing::Size(70, 60);
	this->ArrowR->TabIndex = 32;
	this->ArrowR->TabStop = false;
	this->ArrowR->Click += gcnew System::EventHandler(this, &ShoppingMenu::ArrowR_Click);
	// 
	// item1
	// 
	this->item1->BackColor = System::Drawing::Color::Transparent;
	this->item1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->item1->Cursor = System::Windows::Forms::Cursors::Hand;
	this->item1->Location = System::Drawing::Point(158, 189);
	this->item1->Name = L"item1";
	this->item1->Size = System::Drawing::Size(110, 109);
	this->item1->TabIndex = 33;
	this->item1->TabStop = false;
	// 
	// item2
	// 
	this->item2->BackColor = System::Drawing::Color::Transparent;
	this->item2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->item2->Cursor = System::Windows::Forms::Cursors::Hand;
	this->item2->Location = System::Drawing::Point(374, 189);
	this->item2->Name = L"item2";
	this->item2->Size = System::Drawing::Size(110, 109);
	this->item2->TabIndex = 34;
	this->item2->TabStop = false;
	// 
	// item3
	// 
	this->item3->BackColor = System::Drawing::Color::Transparent;
	this->item3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->item3->Cursor = System::Windows::Forms::Cursors::Hand;
	this->item3->Location = System::Drawing::Point(158, 371);
	this->item3->Name = L"item3";
	this->item3->Size = System::Drawing::Size(110, 109);
	this->item3->TabIndex = 35;
	this->item3->TabStop = false;
	// 
	// item4
	// 
	this->item4->BackColor = System::Drawing::Color::Transparent;
	this->item4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->item4->Cursor = System::Windows::Forms::Cursors::Hand;
	this->item4->Location = System::Drawing::Point(374, 371);
	this->item4->Name = L"item4";
	this->item4->Size = System::Drawing::Size(110, 109);
	this->item4->TabIndex = 36;
	this->item4->TabStop = false;
	// 
	// addItem2
	// 
	this->addItem2->AutoSize = true;
	this->addItem2->BackColor = System::Drawing::Color::Blue;
	this->addItem2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	this->addItem2->Cursor = System::Windows::Forms::Cursors::Hand;
	this->addItem2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->addItem2->ForeColor = System::Drawing::Color::White;
	this->addItem2->Location = System::Drawing::Point(439, 301);
	this->addItem2->Name = L"addItem2";
	this->addItem2->Size = System::Drawing::Size(42, 19);
	this->addItem2->TabIndex = 38;
	this->addItem2->Text = L"ADD+";
	this->addItem2->Click += gcnew System::EventHandler(this, &ShoppingMenu::addItem_Click2);
	// 
	// addItem1
	// 
	this->addItem1->AutoSize = true;
	this->addItem1->BackColor = System::Drawing::Color::Blue;
	this->addItem1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	this->addItem1->Cursor = System::Windows::Forms::Cursors::Hand;
	this->addItem1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->addItem1->ForeColor = System::Drawing::Color::White;
	this->addItem1->Location = System::Drawing::Point(226, 301);
	this->addItem1->Name = L"addItem1";
	this->addItem1->Size = System::Drawing::Size(42, 19);
	this->addItem1->TabIndex = 39;
	this->addItem1->Text = L"ADD+";
	this->addItem1->Click += gcnew System::EventHandler(this, &ShoppingMenu::addItem_Click1);
	// 
	// addItem3
	// 
	this->addItem3->AutoSize = true;
	this->addItem3->BackColor = System::Drawing::Color::Blue;
	this->addItem3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	this->addItem3->Cursor = System::Windows::Forms::Cursors::Hand;
	this->addItem3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->addItem3->ForeColor = System::Drawing::Color::White;
	this->addItem3->Location = System::Drawing::Point(226, 483);
	this->addItem3->Name = L"addItem3";
	this->addItem3->Size = System::Drawing::Size(42, 19);
	this->addItem3->TabIndex = 40;
	this->addItem3->Text = L"ADD+";
	this->addItem3->Click += gcnew System::EventHandler(this, &ShoppingMenu::addItem_Click3);
	// 
	// addItem4
	// 
	this->addItem4->AutoSize = true;
	this->addItem4->BackColor = System::Drawing::Color::Blue;
	this->addItem4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	this->addItem4->Cursor = System::Windows::Forms::Cursors::Hand;
	this->addItem4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->addItem4->ForeColor = System::Drawing::Color::White;
	this->addItem4->Location = System::Drawing::Point(439, 483);
	this->addItem4->Name = L"addItem4";
	this->addItem4->Size = System::Drawing::Size(42, 19);
	this->addItem4->TabIndex = 41;
	this->addItem4->Text = L"ADD+";
	this->addItem4->Click += gcnew System::EventHandler(this, &ShoppingMenu::addItem_Click4);
	// 
	// PayBill
	// 
	this->PayBill->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(192)));
	this->PayBill->Cursor = System::Windows::Forms::Cursors::Hand;
	this->PayBill->FlatAppearance->BorderColor = System::Drawing::Color::White;
	this->PayBill->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->PayBill->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->PayBill->ForeColor = System::Drawing::Color::White;
	this->PayBill->Location = System::Drawing::Point(882, 475);
	this->PayBill->Name = L"PayBill";
	this->PayBill->Size = System::Drawing::Size(249, 50);
	this->PayBill->TabIndex = 44;
	this->PayBill->Text = L"Pay  Bill";
	this->PayBill->UseVisualStyleBackColor = false;
	this->PayBill->Click += gcnew System::EventHandler(this, &ShoppingMenu::PayBillClick);
	// 
	// UserLabel
	// 
	this->UserLabel->AutoSize = true;
	this->UserLabel->BackColor = System::Drawing::Color::Transparent;
	this->UserLabel->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->UserLabel->ForeColor = System::Drawing::Color::White;
	this->UserLabel->Location = System::Drawing::Point(947, 249);
	this->UserLabel->Name = L"UserLabel";
	this->UserLabel->Size = System::Drawing::Size(137, 24);
	this->UserLabel->TabIndex = 45;
	this->UserLabel->Text = L"Invoice Payment";
	// 
	// Invoice
	// 
	this->Invoice->BackColor = System::Drawing::Color::White;
	this->Invoice->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->Invoice->ForeColor = System::Drawing::Color::Black;
	this->Invoice->FormattingEnabled = true;
	this->Invoice->ItemHeight = 16;
	this->Invoice->Location = System::Drawing::Point(882, 276);
	this->Invoice->Name = L"Invoice";
	this->Invoice->Size = System::Drawing::Size(249, 148);
	this->Invoice->TabIndex = 43;
	this->Invoice->SelectedIndexChanged += gcnew System::EventHandler(this, &ShoppingMenu::listBox1_SelectedIndexChanged);
	// 
	// totalPay
	// 
	this->totalPay->BackColor = System::Drawing::Color::White;
	this->totalPay->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->totalPay->ForeColor = System::Drawing::Color::Black;
	this->totalPay->Location = System::Drawing::Point(882, 424);
	this->totalPay->Multiline = true;
	this->totalPay->Name = L"totalPay";
	this->totalPay->Size = System::Drawing::Size(249, 39);
	this->totalPay->TabIndex = 46;
	// 
	// ShoppingMenu
	// 
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
	this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
	this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
	this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->ClientSize = System::Drawing::Size(1133, 629);
	this->Controls->Add(this->totalPay);
	this->Controls->Add(this->UserLabel);
	this->Controls->Add(this->PayBill);
	this->Controls->Add(this->Invoice);
	this->Controls->Add(this->addItem4);
	this->Controls->Add(this->addItem3);
	this->Controls->Add(this->addItem1);
	this->Controls->Add(this->addItem2);
	this->Controls->Add(this->item1);
	this->Controls->Add(this->item2);
	this->Controls->Add(this->item3);
	this->Controls->Add(this->item4);
	this->Controls->Add(this->PriceItem1);
	this->Controls->Add(this->PriceItem2);
	this->Controls->Add(this->PriceItem3);
	this->Controls->Add(this->PriceItem4);
	this->Controls->Add(this->titleItem1);
	this->Controls->Add(this->titleItem2);
	this->Controls->Add(this->titleItem3);
	this->Controls->Add(this->titleItem4);
	this->Controls->Add(this->ArrowR);
	this->Controls->Add(this->ArrowL);
	this->Controls->Add(this->picItems);
	this->Controls->Add(this->labelBackLastPage);
	this->Controls->Add(this->HomePage);
	this->Controls->Add(this->UserName);
	this->Controls->Add(this->profile);
	this->Controls->Add(this->SearchIcon);
	this->Controls->Add(this->CartIcon);
	this->Controls->Add(this->TextSearch);
	this->Cursor = System::Windows::Forms::Cursors::Hand;
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	this->Name = L"ShoppingMenu";
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	this->Load += gcnew System::EventHandler(this, &ShoppingMenu::ShoppingMenu_Load);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CartIcon))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SearchIcon))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picItems))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ArrowL))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ArrowR))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item1))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item2))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item3))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item4))->EndInit();
	this->ResumeLayout(false);
	this->PerformLayout();

}

System::Void BEBS::ShoppingMenu::ShoppingMenu_Load(System::Object^ sender, System::EventArgs^ e) {
}

System::Void BEBS::ShoppingMenu::HomePage_Click(System::Object^ sender, System::EventArgs^ e) {
	this->~ShoppingMenu();
	BEBS::HomePage HomePage;
	HomePage.ShowDialog();
}
System::Void BEBS::ShoppingMenu::profile_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->UserName->Text == "LogIn")
	{
		this->~ShoppingMenu();
		BEBS::LogInMenu LogIn;
		LogIn.ShowDialog();

	}
}
System::Void BEBS::ShoppingMenu::SearchIcon_Click(System::Object^ sender, System::EventArgs^ e) {
	MySQL db;
	if (!(this->TextSearch->Text == ""))
	{
		Book^ b = db.searchBooks(this->TextSearch->Text);
		store.setSearchList(b);
		
	}
}

System::Void BEBS::ShoppingMenu::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}

System::Void BEBS::ShoppingMenu::PayBillClick(System::Object^ sender, System::EventArgs^ e)
{
	this->~ShoppingMenu();
	BEBS::HomePage HomePage;
	HomePage.ShowDialog();

}

System::Void BEBS::ShoppingMenu::addItem_Click1(System::Object^ sender, System::EventArgs^ e) {
	user->addItemToCart(item1->Name, titleItem1->Text, PriceItem1->Text, Invoice, totalPay);
	
}
System::Void BEBS::ShoppingMenu::addItem_Click2(System::Object^ sender, System::EventArgs^ e) {
	user->addItemToCart(item2->Name, titleItem2->Text, PriceItem2->Text, Invoice, totalPay);

}

System::Void BEBS::ShoppingMenu::addItem_Click3(System::Object^ sender, System::EventArgs^ e) {
	user->addItemToCart(item3->Name, titleItem3->Text,PriceItem3->Text, Invoice, totalPay);

}
System::Void BEBS::ShoppingMenu::addItem_Click4(System::Object^ sender, System::EventArgs^ e) {

	user->addItemToCart(item4->Name, titleItem4->Text,PriceItem4->Text, Invoice, totalPay);
}