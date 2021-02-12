#include "pch.h"


BEBS::AdminMenu::AdminMenu(void)
{
	InitializeComponent();
	fillListBox();
	fillCom();
}



BEBS::AdminMenu::~AdminMenu()
	{
		if (components)
		{
			delete components;
		}
	}


	void BEBS::AdminMenu::InitializeComponent(void)
	{
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminMenu::typeid));
		this->listBox = (gcnew System::Windows::Forms::ListBox());
		this->img = (gcnew System::Windows::Forms::PictureBox());
		this->book_id = (gcnew System::Windows::Forms::Label());
		this->title = (gcnew System::Windows::Forms::Label());
		this->Price = (gcnew System::Windows::Forms::Label());
		this->Section = (gcnew System::Windows::Forms::Label());
		this->Amount = (gcnew System::Windows::Forms::Label());
		this->Info = (gcnew System::Windows::Forms::Label());
		this->id_txt = (gcnew System::Windows::Forms::TextBox());
		this->price_txt = (gcnew System::Windows::Forms::TextBox());
		this->sec_txt = (gcnew System::Windows::Forms::TextBox());
		this->amount_txt = (gcnew System::Windows::Forms::TextBox());
		this->info_txt = (gcnew System::Windows::Forms::TextBox());
		this->title_txt = (gcnew System::Windows::Forms::TextBox());
		this->ProfitButton = (gcnew System::Windows::Forms::Button());
		this->SalesButton = (gcnew System::Windows::Forms::Button());
		this->UsersButton = (gcnew System::Windows::Forms::Button());
		this->OrderButton = (gcnew System::Windows::Forms::Button());
		this->SAVE = (gcnew System::Windows::Forms::Button());
		this->Update = (gcnew System::Windows::Forms::Button());
		this->DiscountButton = (gcnew System::Windows::Forms::Button());
		this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
		this->pag_txt = (gcnew System::Windows::Forms::TextBox());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->author_txt = (gcnew System::Windows::Forms::TextBox());
		this->date_txt = (gcnew System::Windows::Forms::TextBox());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->Delete = (gcnew System::Windows::Forms::Button());
		this->HomePage = (gcnew System::Windows::Forms::PictureBox());
		this->UpdateInventoryButton = (gcnew System::Windows::Forms::Button());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->BeginInit();
		this->SuspendLayout();
		// 
		// listBox
		// 
		this->listBox->BackColor = System::Drawing::Color::Black;
		this->listBox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->listBox->ForeColor = System::Drawing::Color::White;
		this->listBox->FormattingEnabled = true;
		this->listBox->ItemHeight = 22;
		this->listBox->Location = System::Drawing::Point(749, 146);
		this->listBox->Name = L"listBox";
		this->listBox->Size = System::Drawing::Size(241, 290);
		this->listBox->TabIndex = 0;
		this->listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminMenu::listBox_SelectedIndexChanged);
		// 
		// img
		// 
		this->img->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->img->Cursor = System::Windows::Forms::Cursors::Hand;
		this->img->Location = System::Drawing::Point(500, 106);
		this->img->Name = L"img";
		this->img->Size = System::Drawing::Size(162, 153);
		this->img->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->img->TabIndex = 1;
		this->img->TabStop = false;
		this->img->Click += gcnew System::EventHandler(this, &AdminMenu::itemImageClick);
		// 
		// book_id
		// 
		this->book_id->AutoSize = true;
		this->book_id->BackColor = System::Drawing::Color::Transparent;
		this->book_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->book_id->Location = System::Drawing::Point(257, 346);
		this->book_id->Name = L"book_id";
		this->book_id->Size = System::Drawing::Size(72, 20);
		this->book_id->TabIndex = 2;
		this->book_id->Text = L"Book id";
		// 
		// title
		// 
		this->title->AutoSize = true;
		this->title->BackColor = System::Drawing::Color::Transparent;
		this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->title->Location = System::Drawing::Point(28, 256);
		this->title->Name = L"title";
		this->title->Size = System::Drawing::Size(46, 20);
		this->title->TabIndex = 3;
		this->title->Text = L"Title";
		// 
		// Price
		// 
		this->Price->AutoSize = true;
		this->Price->BackColor = System::Drawing::Color::Transparent;
		this->Price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Price->Location = System::Drawing::Point(28, 76);
		this->Price->Name = L"Price";
		this->Price->Size = System::Drawing::Size(53, 20);
		this->Price->TabIndex = 4;
		this->Price->Text = L"Price";
		// 
		// Section
		// 
		this->Section->AutoSize = true;
		this->Section->BackColor = System::Drawing::Color::Transparent;
		this->Section->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Section->Location = System::Drawing::Point(257, 76);
		this->Section->Name = L"Section";
		this->Section->Size = System::Drawing::Size(72, 20);
		this->Section->TabIndex = 5;
		this->Section->Text = L"Section";
		// 
		// Amount
		// 
		this->Amount->AutoSize = true;
		this->Amount->BackColor = System::Drawing::Color::Transparent;
		this->Amount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Amount->Location = System::Drawing::Point(28, 166);
		this->Amount->Name = L"Amount";
		this->Amount->Size = System::Drawing::Size(72, 20);
		this->Amount->TabIndex = 6;
		this->Amount->Text = L"Amount";
		// 
		// Info
		// 
		this->Info->AutoSize = true;
		this->Info->BackColor = System::Drawing::Color::Transparent;
		this->Info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Info->Location = System::Drawing::Point(500, 266);
		this->Info->Name = L"Info";
		this->Info->Size = System::Drawing::Size(40, 20);
		this->Info->TabIndex = 7;
		this->Info->Text = L"Info";
		// 
		// id_txt
		// 
		this->id_txt->BackColor = System::Drawing::Color::Black;
		this->id_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->id_txt->ForeColor = System::Drawing::Color::White;
		this->id_txt->Location = System::Drawing::Point(257, 376);
		this->id_txt->Multiline = true;
		this->id_txt->Name = L"id_txt";
		this->id_txt->Size = System::Drawing::Size(162, 34);
		this->id_txt->TabIndex = 8;
		// 
		// price_txt
		// 
		this->price_txt->BackColor = System::Drawing::Color::Black;
		this->price_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->price_txt->ForeColor = System::Drawing::Color::White;
		this->price_txt->Location = System::Drawing::Point(28, 106);
		this->price_txt->Multiline = true;
		this->price_txt->Name = L"price_txt";
		this->price_txt->Size = System::Drawing::Size(162, 34);
		this->price_txt->TabIndex = 9;
		// 
		// sec_txt
		// 
		this->sec_txt->BackColor = System::Drawing::Color::Black;
		this->sec_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->sec_txt->ForeColor = System::Drawing::Color::White;
		this->sec_txt->Location = System::Drawing::Point(257, 106);
		this->sec_txt->Multiline = true;
		this->sec_txt->Name = L"sec_txt";
		this->sec_txt->Size = System::Drawing::Size(162, 34);
		this->sec_txt->TabIndex = 10;
		// 
		// amount_txt
		// 
		this->amount_txt->BackColor = System::Drawing::Color::Black;
		this->amount_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->amount_txt->ForeColor = System::Drawing::Color::White;
		this->amount_txt->Location = System::Drawing::Point(28, 196);
		this->amount_txt->Multiline = true;
		this->amount_txt->Name = L"amount_txt";
		this->amount_txt->Size = System::Drawing::Size(162, 34);
		this->amount_txt->TabIndex = 11;
		// 
		// info_txt
		// 
		this->info_txt->BackColor = System::Drawing::Color::Black;
		this->info_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->info_txt->ForeColor = System::Drawing::Color::White;
		this->info_txt->Location = System::Drawing::Point(500, 295);
		this->info_txt->Multiline = true;
		this->info_txt->Name = L"info_txt";
		this->info_txt->Size = System::Drawing::Size(162, 115);
		this->info_txt->TabIndex = 12;
		// 
		// title_txt
		// 
		this->title_txt->BackColor = System::Drawing::Color::Black;
		this->title_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->title_txt->ForeColor = System::Drawing::Color::White;
		this->title_txt->Location = System::Drawing::Point(28, 286);
		this->title_txt->Multiline = true;
		this->title_txt->Name = L"title_txt";
		this->title_txt->Size = System::Drawing::Size(162, 34);
		this->title_txt->TabIndex = 14;
		// 
		// ProfitButton
		// 
		this->ProfitButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->ProfitButton->Cursor = System::Windows::Forms::Cursors::Hand;
		this->ProfitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->ProfitButton->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->ProfitButton->Location = System::Drawing::Point(708, 12);
		this->ProfitButton->Name = L"ProfitButton";
		this->ProfitButton->Size = System::Drawing::Size(104, 50);
		this->ProfitButton->TabIndex = 15;
		this->ProfitButton->Text = L"Profit";
		this->ProfitButton->UseVisualStyleBackColor = false;

		// 
		// SalesButton
		// 
		this->SalesButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->SalesButton->Cursor = System::Windows::Forms::Cursors::Hand;
		this->SalesButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->SalesButton->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->SalesButton->Location = System::Drawing::Point(596, 12);
		this->SalesButton->Name = L"SalesButton";
		this->SalesButton->Size = System::Drawing::Size(106, 50);
		this->SalesButton->TabIndex = 16;
		this->SalesButton->Text = L"Sales";
		this->SalesButton->UseVisualStyleBackColor = false;

		// 
		// UsersButton
		// 
		this->UsersButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->UsersButton->Cursor = System::Windows::Forms::Cursors::Hand;
		this->UsersButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->UsersButton->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->UsersButton->Location = System::Drawing::Point(497, 12);
		this->UsersButton->Name = L"UsersButton";
		this->UsersButton->Size = System::Drawing::Size(93, 50);
		this->UsersButton->TabIndex = 17;
		this->UsersButton->Text = L"Users";
		this->UsersButton->UseVisualStyleBackColor = false;

		// 
		// OrderButton
		// 
		this->OrderButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->OrderButton->Cursor = System::Windows::Forms::Cursors::Hand;
		this->OrderButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->OrderButton->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->OrderButton->Location = System::Drawing::Point(382, 12);
		this->OrderButton->Name = L"OrderButton";
		this->OrderButton->Size = System::Drawing::Size(109, 50);
		this->OrderButton->TabIndex = 18;
		this->OrderButton->Text = L"Orders";
		this->OrderButton->UseVisualStyleBackColor = false;

		// 
		// SAVE
		// 
		this->SAVE->BackColor = System::Drawing::Color::Chartreuse;
		this->SAVE->Location = System::Drawing::Point(33, 474);
		this->SAVE->Name = L"SAVE";
		this->SAVE->Size = System::Drawing::Size(162, 50);
		this->SAVE->TabIndex = 20;
		this->SAVE->Text = L"SAVE";
		this->SAVE->UseVisualStyleBackColor = false;
		this->SAVE->Click += gcnew System::EventHandler(this, &AdminMenu::saveClick);
		// 
		// Update
		// 
		this->Update->BackColor = System::Drawing::Color::Gold;
		this->Update->Location = System::Drawing::Point(234, 474);
		this->Update->Name = L"Update";
		this->Update->Size = System::Drawing::Size(162, 50);
		this->Update->TabIndex = 21;
		this->Update->Text = L"Update";
		this->Update->UseVisualStyleBackColor = false;
		this->Update->Click += gcnew System::EventHandler(this, &AdminMenu::Update_Click);
		// 
		// DiscountButton
		// 
		this->DiscountButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->DiscountButton->Cursor = System::Windows::Forms::Cursors::Hand;
		this->DiscountButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->DiscountButton->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->DiscountButton->Location = System::Drawing::Point(257, 12);
		this->DiscountButton->Name = L"DiscountButton";
		this->DiscountButton->Size = System::Drawing::Size(118, 50);
		this->DiscountButton->TabIndex = 22;
		this->DiscountButton->Text = L"Discount";
		this->DiscountButton->UseVisualStyleBackColor = false;

		// 
		// comboBox1
		// 
		this->comboBox1->BackColor = System::Drawing::Color::Black;
		this->comboBox1->ForeColor = System::Drawing::Color::White;
		this->comboBox1->FormattingEnabled = true;
		this->comboBox1->Location = System::Drawing::Point(749, 106);
		this->comboBox1->Name = L"comboBox1";
		this->comboBox1->Size = System::Drawing::Size(241, 28);
		this->comboBox1->TabIndex = 23;
		this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminMenu::comboBox1_SelectedIndexChanged);
		// 
		// pag_txt
		// 
		this->pag_txt->BackColor = System::Drawing::Color::Black;
		this->pag_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->pag_txt->ForeColor = System::Drawing::Color::White;
		this->pag_txt->Location = System::Drawing::Point(28, 376);
		this->pag_txt->Multiline = true;
		this->pag_txt->Name = L"pag_txt";
		this->pag_txt->Size = System::Drawing::Size(162, 34);
		this->pag_txt->TabIndex = 24;
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->BackColor = System::Drawing::Color::Transparent;
		this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label2->Location = System::Drawing::Point(28, 346);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(61, 20);
		this->label2->TabIndex = 25;
		this->label2->Text = L"Pages";
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->BackColor = System::Drawing::Color::Transparent;
		this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label3->Location = System::Drawing::Point(257, 166);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(64, 20);
		this->label3->TabIndex = 26;
		this->label3->Text = L"Author";
		// 
		// author_txt
		// 
		this->author_txt->BackColor = System::Drawing::Color::Black;
		this->author_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->author_txt->ForeColor = System::Drawing::Color::White;
		this->author_txt->Location = System::Drawing::Point(257, 196);
		this->author_txt->Multiline = true;
		this->author_txt->Name = L"author_txt";
		this->author_txt->Size = System::Drawing::Size(162, 34);
		this->author_txt->TabIndex = 27;
		// 
		// date_txt
		// 
		this->date_txt->BackColor = System::Drawing::Color::Black;
		this->date_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->date_txt->ForeColor = System::Drawing::Color::White;
		this->date_txt->Location = System::Drawing::Point(257, 286);
		this->date_txt->Multiline = true;
		this->date_txt->Name = L"date_txt";
		this->date_txt->Size = System::Drawing::Size(162, 34);
		this->date_txt->TabIndex = 29;
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->BackColor = System::Drawing::Color::Transparent;
		this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label4->Location = System::Drawing::Point(257, 256);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(49, 20);
		this->label4->TabIndex = 30;
		this->label4->Text = L"Date";
		// 
		// Delete
		// 
		this->Delete->BackColor = System::Drawing::Color::Red;
		this->Delete->ForeColor = System::Drawing::Color::White;
		this->Delete->Location = System::Drawing::Point(432, 474);
		this->Delete->Name = L"Delete";
		this->Delete->Size = System::Drawing::Size(162, 50);
		this->Delete->TabIndex = 31;
		this->Delete->Text = L"Delete";
		this->Delete->UseVisualStyleBackColor = false;
		this->Delete->Click += gcnew System::EventHandler(this, &AdminMenu::Delete_Click);
		// 
		// HomePage
		// 
		this->HomePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomePage.BackgroundImage")));
		this->HomePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->HomePage->Cursor = System::Windows::Forms::Cursors::Hand;
		this->HomePage->Location = System::Drawing::Point(1005, 23);
		this->HomePage->Name = L"HomePage";
		this->HomePage->Size = System::Drawing::Size(40, 40);
		this->HomePage->TabIndex = 39;
		this->HomePage->TabStop = false;

		// 
		// UpdateInventoryButton
		// 
		this->UpdateInventoryButton->BackColor = System::Drawing::Color::Gray;
		this->UpdateInventoryButton->Cursor = System::Windows::Forms::Cursors::Default;
		this->UpdateInventoryButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->UpdateInventoryButton->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->UpdateInventoryButton->Location = System::Drawing::Point(818, 12);
		this->UpdateInventoryButton->Name = L"UpdateInventoryButton";
		this->UpdateInventoryButton->Size = System::Drawing::Size(104, 50);
		this->UpdateInventoryButton->TabIndex = 40;
		this->UpdateInventoryButton->Text = L"Update Inventory";
		this->UpdateInventoryButton->UseVisualStyleBackColor = false;

		this->DiscountButton->Click += gcnew System::EventHandler(this, &AdminMenu::DiscountClick);
		this->OrderButton->Click += gcnew System::EventHandler(this, &AdminMenu::OrdersClick);
		this->UsersButton->Click += gcnew System::EventHandler(this, &AdminMenu::UsersClick);
		this->SalesButton->Click += gcnew System::EventHandler(this, &AdminMenu::SalesClick);
		this->ProfitButton->Click += gcnew System::EventHandler(this, &AdminMenu::ProfitClick);
		this->HomePage->Click += gcnew System::EventHandler(this, &AdminMenu::HomePageClick);
		
		// 
		// AdminMenu
		// 
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
		this->BackColor = System::Drawing::SystemColors::ControlText;
		this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
		this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->ClientSize = System::Drawing::Size(1082, 536);
		this->Controls->Add(this->UpdateInventoryButton);
		this->Controls->Add(this->HomePage);
		this->Controls->Add(this->Delete);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->date_txt);
		this->Controls->Add(this->author_txt);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->pag_txt);
		this->Controls->Add(this->comboBox1);
		this->Controls->Add(this->DiscountButton);
		this->Controls->Add(this->Update);
		this->Controls->Add(this->SAVE);
		this->Controls->Add(this->OrderButton);
		this->Controls->Add(this->UsersButton);
		this->Controls->Add(this->SalesButton);
		this->Controls->Add(this->ProfitButton);
		this->Controls->Add(this->title_txt);
		this->Controls->Add(this->info_txt);
		this->Controls->Add(this->amount_txt);
		this->Controls->Add(this->sec_txt);
		this->Controls->Add(this->price_txt);
		this->Controls->Add(this->id_txt);
		this->Controls->Add(this->Info);
		this->Controls->Add(this->Amount);
		this->Controls->Add(this->Section);
		this->Controls->Add(this->Price);
		this->Controls->Add(this->title);
		this->Controls->Add(this->book_id);
		this->Controls->Add(this->img);
		this->Controls->Add(this->listBox);
		this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
		this->Name = L"AdminMenu";
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Text = L"AdminMenu";
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion


System::Void BEBS::AdminMenu::DiscountClick(System::Object^ sender, System::EventArgs^ e) {
	this->~AdminMenu();
	BEBS::DiscountControl discount;
	discount.ShowDialog();
}
System::Void BEBS::AdminMenu::OrdersClick(System::Object^ sender, System::EventArgs^ e) {
	this->~AdminMenu();
	BEBS::OrdersControl nextPag;
	nextPag.ShowDialog();
}
System::Void BEBS::AdminMenu::UsersClick(System::Object^ sender, System::EventArgs^ e) {
	this->~AdminMenu();
	BEBS::UsersControl users;
	users.ShowDialog();
}
System::Void BEBS::AdminMenu::SalesClick(System::Object^ sender, System::EventArgs^ e) {
	this->~AdminMenu();
	BEBS::SalesControl sales;
	sales.ShowDialog();
}
System::Void BEBS::AdminMenu::ProfitClick(System::Object^ sender, System::EventArgs^ e) {
	this->~AdminMenu();
	BEBS::ProfitControl profit;
	profit.ShowDialog();
}
System::Void BEBS::AdminMenu::HomePageClick(System::Object^ sender, System::EventArgs^ e) {
	this->~AdminMenu();
	BEBS::HomePage HomePage;
	HomePage.ShowDialog();
}




	   //image text -> add / / image//books//
System::Void BEBS::AdminMenu::saveClick(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("INSERT INTO `book_store`.`books`(`book_id`,`title`,`pages` ,`section`,`price`,`amount`,`info`,`img`,`author`) VALUES('" + id_txt->Text + "','" + title_txt->Text + "','" + pag_txt->Text + "','" + sec_txt->Text + "', '" + price_txt->Text + "' ,'" + amount_txt->Text + "','" + info_txt->Text + "','"
											+ "Image\\SignIn.jpg" + "','" + author_txt->Text + "');", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Added");
		while (myRender->Read()) {

		}
		this->~AdminMenu();
		BEBS::AdminMenu renderPage;
		renderPage.ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}



System::Void BEBS::AdminMenu::listBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ listVal = listBox->Text;
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books where title='" + listVal + "';", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();

		if (myRender->Read()) {
			String^ vId = myRender->GetInt32("book_id").ToString();
			String^ vtitle = myRender->GetString("title");
			String^ vpages = myRender->GetInt32("pages").ToString();
			String^ vsection = myRender->GetString("section");
			String^ vprice = myRender->GetInt32("price").ToString();
			String^ vamount = myRender->GetInt32("amount").ToString();
			String^ vpublish_date = myRender->GetDateTime("publish_date").ToString();
			String^ vinfo = myRender->GetString("info");
			String^ vimg = "Image\\books\\" + myRender->GetString("img");
			String^ vauthor = myRender->GetString("author");
			//this->img->BackgroundImage = Image::FromFile("Image\\cpp1.jpg");
			//String^ vimg = myRender->GetString("img");
			this->img->ImageLocation = vimg;



			//set vals to text box
			id_txt->Text = vId;
			title_txt->Text = vtitle;
			sec_txt->Text = vsection;
			price_txt->Text = vprice;
			info_txt->Text = vinfo;
	
			amount_txt->Text = vamount;
			author_txt->Text = vauthor;
			date_txt->Text = vpublish_date;
			pag_txt->Text = vpages;

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

Void BEBS::AdminMenu::fillListBox(void) {
	
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books;", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vTitle;
			vTitle = myRender->GetString("title");
			listBox->Items->Add(vTitle);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

Void BEBS::AdminMenu::fillCom(void) {
	
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books;", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vTitle;
			vTitle = myRender->GetString("title");
			comboBox1->Items->Add(vTitle);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}


System::Void BEBS::AdminMenu::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ comboVal = comboBox1->Text;
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books where title='" + comboVal + "';", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();

		if (myRender->Read()) {
			String^ vId = myRender->GetInt32("book_id").ToString();
			String^ vtitle = myRender->GetString("title");
			String^ vpages = myRender->GetInt32("pages").ToString();
			String^ vsection = myRender->GetString("section");
			String^ vprice = myRender->GetInt32("price").ToString();
			String^ vamount = myRender->GetInt32("amount").ToString();
			String^ vpublish_date = myRender->GetDateTime("publish_date").ToString();
			String^ vinfo = myRender->GetString("info");
			String^ vimg = itemPath + myRender->GetString("img");
			String^ vauthor = myRender->GetString("author");

			//set vals to text box
			id_txt->Text = vId;
			title_txt->Text = vtitle;
			sec_txt->Text = vsection;
			price_txt->Text = vprice;
			info_txt->Text = vinfo;
			amount_txt->Text = vamount;
			author_txt->Text = vauthor;
			date_txt->Text = vpublish_date;
			pag_txt->Text = vpages;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

System::Void BEBS::AdminMenu::Update_Click(System::Object^ sender, System::EventArgs^ e) {
	MySQL db;
	strP imgL = sec_txt->Text+ id_txt->Text + System::IO::Path::GetExtension(img->ImageLocation);
	
	img->Image->Save(itemPath + imgL);
	db.updateBook(title_txt->Text ,pag_txt->Text ,sec_txt->Text, price_txt->Text  ,
					amount_txt->Text , info_txt->Text , imgL, author_txt->Text, id_txt->Text );
	this->~AdminMenu();
	BEBS::AdminMenu renderPage;
	renderPage.ShowDialog();
}
System::Void BEBS::AdminMenu::Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	MySQL db;
	db.deleteBook(id_txt->Text);
	this->~AdminMenu();
	BEBS::AdminMenu renderPage;
	renderPage.ShowDialog();
}




System::Void BEBS::AdminMenu::itemImageClick(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::OpenFileDialog^ ofd= (gcnew System::Windows::Forms::OpenFileDialog());
	ofd->Filter = L"\"JPEG|*.jpg|PNG |*.png|All Files|*.*\"";
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		img->ImageLocation = ofd->FileName;
	}

}



