#include "pch.h"


BEBS::AdminMenu::AdminMenu(void)
{
	InitializeComponent();
	fillListBox();
	fillCom();
}
System::Void BEBS::AdminMenu::HomePage_Click(System::Object^ sender, System::EventArgs^ e) {
	this->~AdminMenu();
	BEBS::HomePage HomePage;
	HomePage.ShowDialog();
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
		this->Profit = (gcnew System::Windows::Forms::Button());
		this->Sales = (gcnew System::Windows::Forms::Button());
		this->Users = (gcnew System::Windows::Forms::Button());
		this->Orders = (gcnew System::Windows::Forms::Button());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->SAVE = (gcnew System::Windows::Forms::Button());
		this->Update = (gcnew System::Windows::Forms::Button());
		this->Discount = (gcnew System::Windows::Forms::Button());
		this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
		this->pag_txt = (gcnew System::Windows::Forms::TextBox());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->author_txt = (gcnew System::Windows::Forms::TextBox());
		this->date_txt = (gcnew System::Windows::Forms::TextBox());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->Delete = (gcnew System::Windows::Forms::Button());
		this->HomePage = (gcnew System::Windows::Forms::PictureBox());
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
		this->listBox->Location = System::Drawing::Point(673, 133);
		this->listBox->Name = L"listBox";
		this->listBox->Size = System::Drawing::Size(241, 290);
		this->listBox->TabIndex = 0;
		this->listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminMenu::listBox_SelectedIndexChanged);
		// 
		// img
		// 
		this->img->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->img->Cursor = System::Windows::Forms::Cursors::Hand;
		this->img->Location = System::Drawing::Point(454, 106);
		this->img->Name = L"img";
		this->img->Size = System::Drawing::Size(162, 153);
		this->img->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->img->TabIndex = 1;
		this->img->TabStop = false;
		this->img->Click += gcnew System::EventHandler(this, &AdminMenu::img_Click);
		// 
		// book_id
		// 
		this->book_id->AutoSize = true;
		this->book_id->BackColor = System::Drawing::Color::Transparent;
		this->book_id->Location = System::Drawing::Point(28, 78);
		this->book_id->Name = L"book_id";
		this->book_id->Size = System::Drawing::Size(55, 17);
		this->book_id->TabIndex = 2;
		this->book_id->Text = L"Book id";
		this->book_id->Click += gcnew System::EventHandler(this, &AdminMenu::label1_Click);
		// 
		// title
		// 
		this->title->AutoSize = true;
		this->title->BackColor = System::Drawing::Color::Transparent;
		this->title->Location = System::Drawing::Point(28, 317);
		this->title->Name = L"title";
		this->title->Size = System::Drawing::Size(35, 17);
		this->title->TabIndex = 3;
		this->title->Text = L"Title";
		this->title->Click += gcnew System::EventHandler(this, &AdminMenu::label1_Click_1);
		// 
		// Price
		// 
		this->Price->AutoSize = true;
		this->Price->BackColor = System::Drawing::Color::Transparent;
		this->Price->Location = System::Drawing::Point(28, 156);
		this->Price->Name = L"Price";
		this->Price->Size = System::Drawing::Size(40, 17);
		this->Price->TabIndex = 4;
		this->Price->Text = L"Price";
		// 
		// Section
		// 
		this->Section->AutoSize = true;
		this->Section->BackColor = System::Drawing::Color::Transparent;
		this->Section->Location = System::Drawing::Point(240, 78);
		this->Section->Name = L"Section";
		this->Section->Size = System::Drawing::Size(55, 17);
		this->Section->TabIndex = 5;
		this->Section->Text = L"Section";
		// 
		// Amount
		// 
		this->Amount->AutoSize = true;
		this->Amount->BackColor = System::Drawing::Color::Transparent;
		this->Amount->Location = System::Drawing::Point(28, 235);
		this->Amount->Name = L"Amount";
		this->Amount->Size = System::Drawing::Size(56, 17);
		this->Amount->TabIndex = 6;
		this->Amount->Text = L"Amount";
		// 
		// Info
		// 
		this->Info->AutoSize = true;
		this->Info->BackColor = System::Drawing::Color::Transparent;
		this->Info->Location = System::Drawing::Point(240, 156);
		this->Info->Name = L"Info";
		this->Info->Size = System::Drawing::Size(31, 17);
		this->Info->TabIndex = 7;
		this->Info->Text = L"Info";
		// 
		// id_txt
		// 
		this->id_txt->BackColor = System::Drawing::Color::Black;
		this->id_txt->ForeColor = System::Drawing::Color::White;
		this->id_txt->Location = System::Drawing::Point(33, 106);
		this->id_txt->Multiline = true;
		this->id_txt->Name = L"id_txt";
		this->id_txt->Size = System::Drawing::Size(162, 34);
		this->id_txt->TabIndex = 8;
		this->id_txt->TextChanged += gcnew System::EventHandler(this, &AdminMenu::textBox1_TextChanged);
		// 
		// price_txt
		// 
		this->price_txt->BackColor = System::Drawing::Color::Black;
		this->price_txt->ForeColor = System::Drawing::Color::White;
		this->price_txt->Location = System::Drawing::Point(33, 184);
		this->price_txt->Multiline = true;
		this->price_txt->Name = L"price_txt";
		this->price_txt->Size = System::Drawing::Size(162, 34);
		this->price_txt->TabIndex = 9;
		// 
		// sec_txt
		// 
		this->sec_txt->BackColor = System::Drawing::Color::Black;
		this->sec_txt->ForeColor = System::Drawing::Color::White;
		this->sec_txt->Location = System::Drawing::Point(245, 106);
		this->sec_txt->Multiline = true;
		this->sec_txt->Name = L"sec_txt";
		this->sec_txt->Size = System::Drawing::Size(162, 34);
		this->sec_txt->TabIndex = 10;
		// 
		// amount_txt
		// 
		this->amount_txt->BackColor = System::Drawing::Color::Black;
		this->amount_txt->ForeColor = System::Drawing::Color::White;
		this->amount_txt->Location = System::Drawing::Point(33, 265);
		this->amount_txt->Multiline = true;
		this->amount_txt->Name = L"amount_txt";
		this->amount_txt->Size = System::Drawing::Size(162, 34);
		this->amount_txt->TabIndex = 11;
		// 
		// info_txt
		// 
		this->info_txt->BackColor = System::Drawing::Color::Black;
		this->info_txt->ForeColor = System::Drawing::Color::White;
		this->info_txt->Location = System::Drawing::Point(245, 184);
		this->info_txt->Multiline = true;
		this->info_txt->Name = L"info_txt";
		this->info_txt->Size = System::Drawing::Size(162, 115);
		this->info_txt->TabIndex = 12;
		// 
		// title_txt
		// 
		this->title_txt->BackColor = System::Drawing::Color::Black;
		this->title_txt->ForeColor = System::Drawing::Color::White;
		this->title_txt->Location = System::Drawing::Point(33, 345);
		this->title_txt->Multiline = true;
		this->title_txt->Name = L"title_txt";
		this->title_txt->Size = System::Drawing::Size(162, 34);
		this->title_txt->TabIndex = 14;
		// 
		// Profit
		// 
		this->Profit->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->Profit->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->Profit->Location = System::Drawing::Point(969, 14);
		this->Profit->Name = L"Profit";
		this->Profit->Size = System::Drawing::Size(104, 50);
		this->Profit->TabIndex = 15;
		this->Profit->Text = L"Profit";
		this->Profit->UseVisualStyleBackColor = false;
		this->Profit->Click += gcnew System::EventHandler(this, &AdminMenu::Profit_Click);
		// 
		// Sales
		// 
		this->Sales->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->Sales->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->Sales->Location = System::Drawing::Point(857, 14);
		this->Sales->Name = L"Sales";
		this->Sales->Size = System::Drawing::Size(106, 50);
		this->Sales->TabIndex = 16;
		this->Sales->Text = L"Sales";
		this->Sales->UseVisualStyleBackColor = false;
		this->Sales->Click += gcnew System::EventHandler(this, &AdminMenu::Sales_Click);
		// 
		// Users
		// 
		this->Users->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->Users->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->Users->Location = System::Drawing::Point(758, 14);
		this->Users->Name = L"Users";
		this->Users->Size = System::Drawing::Size(93, 50);
		this->Users->TabIndex = 17;
		this->Users->Text = L"Users";
		this->Users->UseVisualStyleBackColor = false;
		this->Users->Click += gcnew System::EventHandler(this, &AdminMenu::button1_Click);
		// 
		// Orders
		// 
		this->Orders->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->Orders->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->Orders->Location = System::Drawing::Point(643, 14);
		this->Orders->Name = L"Orders";
		this->Orders->Size = System::Drawing::Size(109, 50);
		this->Orders->TabIndex = 18;
		this->Orders->Text = L"Orders";
		this->Orders->UseVisualStyleBackColor = false;
		this->Orders->Click += gcnew System::EventHandler(this, &AdminMenu::Orders_Click);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
		this->label1->Location = System::Drawing::Point(28, 27);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(104, 17);
		this->label1->TabIndex = 19;
		this->label1->Text = L"Store inventory";
		// 
		// SAVE
		// 
		this->SAVE->BackColor = System::Drawing::Color::Chartreuse;
		this->SAVE->Location = System::Drawing::Point(33, 466);
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
		this->Update->Location = System::Drawing::Point(234, 466);
		this->Update->Name = L"Update";
		this->Update->Size = System::Drawing::Size(162, 50);
		this->Update->TabIndex = 21;
		this->Update->Text = L"Update";
		this->Update->UseVisualStyleBackColor = false;
		this->Update->Click += gcnew System::EventHandler(this, &AdminMenu::Update_Click);
		// 
		// Discount
		// 
		this->Discount->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->Discount->ForeColor = System::Drawing::SystemColors::HighlightText;
		this->Discount->Location = System::Drawing::Point(519, 14);
		this->Discount->Name = L"Discount";
		this->Discount->Size = System::Drawing::Size(118, 50);
		this->Discount->TabIndex = 22;
		this->Discount->Text = L"Discount";
		this->Discount->UseVisualStyleBackColor = false;
		this->Discount->Click += gcnew System::EventHandler(this, &AdminMenu::Discount_Click);
		// 
		// comboBox1
		// 
		this->comboBox1->BackColor = System::Drawing::Color::Black;
		this->comboBox1->ForeColor = System::Drawing::Color::White;
		this->comboBox1->FormattingEnabled = true;
		this->comboBox1->Location = System::Drawing::Point(673, 95);
		this->comboBox1->Name = L"comboBox1";
		this->comboBox1->Size = System::Drawing::Size(241, 24);
		this->comboBox1->TabIndex = 23;
		this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminMenu::comboBox1_SelectedIndexChanged);
		// 
		// pag_txt
		// 
		this->pag_txt->BackColor = System::Drawing::Color::Black;
		this->pag_txt->ForeColor = System::Drawing::Color::White;
		this->pag_txt->Location = System::Drawing::Point(33, 425);
		this->pag_txt->Multiline = true;
		this->pag_txt->Name = L"pag_txt";
		this->pag_txt->Size = System::Drawing::Size(162, 34);
		this->pag_txt->TabIndex = 24;
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->BackColor = System::Drawing::Color::Transparent;
		this->label2->Location = System::Drawing::Point(37, 397);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(48, 17);
		this->label2->TabIndex = 25;
		this->label2->Text = L"Pages";
		this->label2->Click += gcnew System::EventHandler(this, &AdminMenu::label2_Click);
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->BackColor = System::Drawing::Color::Transparent;
		this->label3->Location = System::Drawing::Point(449, 317);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(50, 17);
		this->label3->TabIndex = 26;
		this->label3->Text = L"Author";
		this->label3->Click += gcnew System::EventHandler(this, &AdminMenu::label3_Click);
		// 
		// author_txt
		// 
		this->author_txt->BackColor = System::Drawing::Color::Black;
		this->author_txt->ForeColor = System::Drawing::Color::White;
		this->author_txt->Location = System::Drawing::Point(454, 345);
		this->author_txt->Multiline = true;
		this->author_txt->Name = L"author_txt";
		this->author_txt->Size = System::Drawing::Size(162, 34);
		this->author_txt->TabIndex = 27;
		this->author_txt->TextChanged += gcnew System::EventHandler(this, &AdminMenu::author_txt_TextChanged);
		// 
		// date_txt
		// 
		this->date_txt->BackColor = System::Drawing::Color::Black;
		this->date_txt->ForeColor = System::Drawing::Color::White;
		this->date_txt->Location = System::Drawing::Point(245, 345);
		this->date_txt->Multiline = true;
		this->date_txt->Name = L"date_txt";
		this->date_txt->Size = System::Drawing::Size(162, 34);
		this->date_txt->TabIndex = 29;
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->BackColor = System::Drawing::Color::Transparent;
		this->label4->Location = System::Drawing::Point(240, 317);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(38, 17);
		this->label4->TabIndex = 30;
		this->label4->Text = L"Date";
		this->label4->Click += gcnew System::EventHandler(this, &AdminMenu::label4_Click);
		// 
		// Delete
		// 
		this->Delete->BackColor = System::Drawing::Color::Red;
		this->Delete->ForeColor = System::Drawing::Color::White;
		this->Delete->Location = System::Drawing::Point(432, 466);
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
		this->HomePage->Location = System::Drawing::Point(1331, 14);
		this->HomePage->Name = L"HomePage";
		this->HomePage->Size = System::Drawing::Size(40, 40);
		this->HomePage->TabIndex = 39;
		this->HomePage->TabStop = false;
		this->HomePage->Click += gcnew System::EventHandler(this, &AdminMenu::HomePage_Click);
		// 
		// AdminMenu
		// 
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
		this->BackColor = System::Drawing::SystemColors::ControlText;
		this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
		this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->ClientSize = System::Drawing::Size(1407, 670);
		this->Controls->Add(this->HomePage);
		this->Controls->Add(this->Delete);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->date_txt);
		this->Controls->Add(this->author_txt);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->pag_txt);
		this->Controls->Add(this->comboBox1);
		this->Controls->Add(this->Discount);
		this->Controls->Add(this->Update);
		this->Controls->Add(this->SAVE);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->Orders);
		this->Controls->Add(this->Users);
		this->Controls->Add(this->Sales);
		this->Controls->Add(this->Profit);
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
		this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
		this->Name = L"AdminMenu";
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Text = L"AdminMenu";
		this->Load += gcnew System::EventHandler(this, &AdminMenu::AdminMenu_Load);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->img))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion
System::Void BEBS::AdminMenu::label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
System::Void BEBS::AdminMenu::label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
System::Void BEBS::AdminMenu::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
System::Void BEBS::AdminMenu::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->~AdminMenu();
	BEBS::UsersControl users;
	users.ShowDialog();
}

	   //image text -> add / / image//books//
System::Void BEBS::AdminMenu::saveClick(System::Object^ sender, System::EventArgs^ e) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=bebs";
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

	String^ con = L"datasource=localhost; port=3306; username=root; password=bebs";
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
	String^ con = L"datasource=localhost; port=3306; username=root; password=bebs";
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
	String^ con = L"datasource=localhost; port=3306; username=root; password=bebs";
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

	String^ con = L"datasource=localhost; port=3306; username=root; password=bebs";
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



System::Void BEBS::AdminMenu::Sales_Click(System::Object^ sender, System::EventArgs^ e) {
	this->~AdminMenu();
	BEBS::SalesControl sales;
	sales.ShowDialog();
}
System::Void BEBS::AdminMenu::Profit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->~AdminMenu();
	BEBS::ProfitControl profit;
	profit.ShowDialog();
}
System::Void BEBS::AdminMenu::Orders_Click(System::Object^ sender, System::EventArgs^ e) {
	this->~AdminMenu();
	BEBS::OrdersControl nextPag;
	nextPag.ShowDialog();
}
System::Void BEBS::AdminMenu::Discount_Click(System::Object^ sender, System::EventArgs^ e) {
	this->~AdminMenu();
	BEBS::DiscountControl discount;
	discount.ShowDialog();
}

System::Void BEBS::AdminMenu::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->~AdminMenu();
	BEBS::HomePage HomePage;
	HomePage.ShowDialog();
}


System::Void BEBS::AdminMenu::img_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::OpenFileDialog^ ofd= (gcnew System::Windows::Forms::OpenFileDialog());
	ofd->Filter = L"\"JPEG|*.jpg|PNG |*.png|All Files|*.*\"";
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		img->ImageLocation = ofd->FileName;
	}

}




System::Void BEBS::AdminMenu::label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
System::Void BEBS::AdminMenu::label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
System::Void BEBS::AdminMenu::label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
System::Void BEBS::AdminMenu::author_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
System::Void BEBS::AdminMenu::AdminMenu_Load(System::Object^ sender, System::EventArgs^ e) {
}