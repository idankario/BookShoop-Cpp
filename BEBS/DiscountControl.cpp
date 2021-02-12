#include "pch.h"
BEBS::DiscountControl::DiscountControl(void)
{
	InitializeComponent();
	fillListBox();
	fillCurrent();
	fillListBox2();
}
BEBS::DiscountControl::DiscountControl(Form^ lastForm)
{
	this->lastForm = lastForm;
	InitializeComponent();
	fillListBox();
	fillCurrent();
	fillListBox2();
}

BEBS::DiscountControl::~DiscountControl()
		{
			if (components)
			{
				delete components;
			}
		}



void BEBS::DiscountControl::InitializeComponent(void)
{
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DiscountControl::typeid));
	this->label5 = (gcnew System::Windows::Forms::Label());
	this->discount = (gcnew System::Windows::Forms::TextBox());
	this->start = (gcnew System::Windows::Forms::TextBox());
	this->end = (gcnew System::Windows::Forms::TextBox());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->block = (gcnew System::Windows::Forms::Button());
	this->edit = (gcnew System::Windows::Forms::Button());
	this->SAVE = (gcnew System::Windows::Forms::Button());
	this->HomePage = (gcnew System::Windows::Forms::PictureBox());
	this->id_tet = (gcnew System::Windows::Forms::TextBox());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->listBox1 = (gcnew System::Windows::Forms::ListBox());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->label7 = (gcnew System::Windows::Forms::Label());
	this->listBox2 = (gcnew System::Windows::Forms::ListBox());
	this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->BeginInit();
	this->SuspendLayout();
	// 
	// label5
	// 
	this->label5->AutoSize = true;
	this->label5->BackColor = System::Drawing::Color::Transparent;
	this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label5->ForeColor = System::Drawing::Color::White;
	this->label5->Location = System::Drawing::Point(47, 39);
	this->label5->Name = L"label5";
	this->label5->Size = System::Drawing::Size(130, 24);
	this->label5->TabIndex = 28;
	this->label5->Text = L"BEBS Discounts";
	// 
	// discount
	// 
	this->discount->BackColor = System::Drawing::Color::Black;
	this->discount->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->discount->ForeColor = System::Drawing::Color::White;
	this->discount->Location = System::Drawing::Point(53, 125);
	this->discount->Name = L"discount";
	this->discount->Size = System::Drawing::Size(485, 34);
	this->discount->TabIndex = 29;
	// 
	// start
	// 
	this->start->BackColor = System::Drawing::Color::Black;
	this->start->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->start->ForeColor = System::Drawing::Color::White;
	this->start->Location = System::Drawing::Point(53, 228);
	this->start->Name = L"start";
	this->start->Size = System::Drawing::Size(485, 34);
	this->start->TabIndex = 30;
	// 
	// end
	// 
	this->end->BackColor = System::Drawing::Color::Black;
	this->end->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->end->ForeColor = System::Drawing::Color::White;
	this->end->Location = System::Drawing::Point(53, 320);
	this->end->Name = L"end";
	this->end->Size = System::Drawing::Size(485, 34);
	this->end->TabIndex = 31;
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->BackColor = System::Drawing::Color::Transparent;
	this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label2->ForeColor = System::Drawing::Color::White;
	this->label2->Location = System::Drawing::Point(47, 89);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(73, 24);
	this->label2->TabIndex = 32;
	this->label2->Text = L"Discount";
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->BackColor = System::Drawing::Color::Transparent;
	this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label1->ForeColor = System::Drawing::Color::White;
	this->label1->Location = System::Drawing::Point(47, 192);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(213, 24);
	this->label1->TabIndex = 33;
	this->label1->Text = L"Date Start :: YYYY-MM-DD";
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->BackColor = System::Drawing::Color::Transparent;
	this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label3->ForeColor = System::Drawing::Color::White;
	this->label3->Location = System::Drawing::Point(47, 284);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(212, 24);
	this->label3->TabIndex = 34;
	this->label3->Text = L"Date End ::  YYYY-MM-DD";
	// 
	// block
	// 
	this->block->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	this->block->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->block->ForeColor = System::Drawing::Color::White;
	this->block->Location = System::Drawing::Point(411, 458);
	this->block->Name = L"block";
	this->block->Size = System::Drawing::Size(127, 50);
	this->block->TabIndex = 35;
	this->block->Text = L"Delete";
	this->block->UseVisualStyleBackColor = false;
	this->block->Click += gcnew System::EventHandler(this, &DiscountControl::block_Click);
	// 
	// edit
	// 
	this->edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	this->edit->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->edit->ForeColor = System::Drawing::Color::White;
	this->edit->Location = System::Drawing::Point(232, 461);
	this->edit->Name = L"edit";
	this->edit->Size = System::Drawing::Size(127, 50);
	this->edit->TabIndex = 36;
	this->edit->Text = L"Edit";
	this->edit->UseVisualStyleBackColor = false;
	this->edit->Click += gcnew System::EventHandler(this, &DiscountControl::edit_Click);
	// 
	// SAVE
	// 
	this->SAVE->BackColor = System::Drawing::Color::Chartreuse;
	this->SAVE->ForeColor = System::Drawing::Color::White;
	this->SAVE->Location = System::Drawing::Point(53, 461);
	this->SAVE->Name = L"SAVE";
	this->SAVE->Size = System::Drawing::Size(144, 50);
	this->SAVE->TabIndex = 37;
	this->SAVE->Text = L"Add";
	this->SAVE->UseVisualStyleBackColor = false;
	this->SAVE->Click += gcnew System::EventHandler(this, &DiscountControl::SAVE_Click);
	// 
	// HomePage
	// 
	this->HomePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomePage.BackgroundImage")));
	this->HomePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->HomePage->Cursor = System::Windows::Forms::Cursors::Hand;
	this->HomePage->Location = System::Drawing::Point(988, 39);
	this->HomePage->Name = L"HomePage";
	this->HomePage->Size = System::Drawing::Size(40, 40);
	this->HomePage->TabIndex = 38;
	this->HomePage->TabStop = false;
	this->HomePage->Click += gcnew System::EventHandler(this, &DiscountControl::HomePage_Click);
	// 
	// id_tet
	// 
	this->id_tet->BackColor = System::Drawing::Color::Black;
	this->id_tet->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->id_tet->ForeColor = System::Drawing::Color::White;
	this->id_tet->Location = System::Drawing::Point(53, 408);
	this->id_tet->Name = L"id_tet";
	this->id_tet->Size = System::Drawing::Size(485, 34);
	this->id_tet->TabIndex = 40;
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->BackColor = System::Drawing::Color::Transparent;
	this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label4->ForeColor = System::Drawing::Color::White;
	this->label4->Location = System::Drawing::Point(47, 372);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(24, 24);
	this->label4->TabIndex = 41;
	this->label4->Text = L"Id";
	// 
	// listBox1
	// 
	this->listBox1->BackColor = System::Drawing::Color::Black;
	this->listBox1->ForeColor = System::Drawing::Color::White;
	this->listBox1->FormattingEnabled = true;
	this->listBox1->ItemHeight = 16;
	this->listBox1->Location = System::Drawing::Point(630, 342);
	this->listBox1->Name = L"listBox1";
	this->listBox1->Size = System::Drawing::Size(310, 116);
	this->listBox1->TabIndex = 42;
	this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DiscountControl::listBox1_SelectedIndexChanged);
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->BackColor = System::Drawing::Color::Transparent;
	this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label6->ForeColor = System::Drawing::Color::White;
	this->label6->Location = System::Drawing::Point(624, 306);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(140, 24);
	this->label6->TabIndex = 43;
	this->label6->Text = L"Expired Discounts";
	// 
	// label7
	// 
	this->label7->AutoSize = true;
	this->label7->BackColor = System::Drawing::Color::Transparent;
	this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label7->ForeColor = System::Drawing::Color::White;
	this->label7->Location = System::Drawing::Point(628, 105);
	this->label7->Name = L"label7";
	this->label7->Size = System::Drawing::Size(138, 24);
	this->label7->TabIndex = 44;
	this->label7->Text = L"Future  Discounts";
	// 
	// listBox2
	// 
	this->listBox2->BackColor = System::Drawing::Color::Black;
	this->listBox2->ForeColor = System::Drawing::Color::White;
	this->listBox2->FormattingEnabled = true;
	this->listBox2->ItemHeight = 16;
	this->listBox2->Location = System::Drawing::Point(630, 179);
	this->listBox2->Name = L"listBox2";
	this->listBox2->Size = System::Drawing::Size(310, 116);
	this->listBox2->TabIndex = 45;
	this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &DiscountControl::listBox2_SelectedIndexChanged);
	// 
	// comboBox1
	// 
	this->comboBox1->BackColor = System::Drawing::Color::Black;
	this->comboBox1->ForeColor = System::Drawing::Color::White;
	this->comboBox1->FormattingEnabled = true;
	this->comboBox1->Location = System::Drawing::Point(630, 141);
	this->comboBox1->Name = L"comboBox1";
	this->comboBox1->Size = System::Drawing::Size(310, 24);
	this->comboBox1->TabIndex = 46;
	this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DiscountControl::comboBox1_SelectedIndexChanged);
	// 
	// DiscountControl
	// 
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
	this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
	this->ClientSize = System::Drawing::Size(1076, 536);
	this->Controls->Add(this->comboBox1);
	this->Controls->Add(this->listBox2);
	this->Controls->Add(this->label7);
	this->Controls->Add(this->label6);
	this->Controls->Add(this->listBox1);
	this->Controls->Add(this->label4);
	this->Controls->Add(this->id_tet);
	this->Controls->Add(this->HomePage);
	this->Controls->Add(this->SAVE);
	this->Controls->Add(this->edit);
	this->Controls->Add(this->block);
	this->Controls->Add(this->label3);
	this->Controls->Add(this->label1);
	this->Controls->Add(this->label2);
	this->Controls->Add(this->end);
	this->Controls->Add(this->start);
	this->Controls->Add(this->discount);
	this->Controls->Add(this->label5);
	this->Name = L"DiscountControl";
	this->Text = L"DiscountControl";
	this->Load += gcnew System::EventHandler(this, &DiscountControl::DiscountControl_Load);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->EndInit();
	this->ResumeLayout(false);
	this->PerformLayout();

}

System::Void BEBS::DiscountControl::listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

Void BEBS::DiscountControl::fillListBox(void) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.discounts  where (date_from >= '2018-01-01' and  date_until <= '2021-01-17');", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vpercent = myRender->GetString("percent");
			String^ vfrom = myRender->GetString("date_from");
			String^ vuntil = myRender->GetString("date_until");
			String^ vid = myRender->GetInt32("discount_id").ToString();

			listBox1->Items->Add(vpercent + "% ,FROM " + vfrom + " TO " + vuntil);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}


Void BEBS::DiscountControl::fillListBox2(void) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.discounts where (date_from >= '2021-01-18' and  date_until <= '2021-12-30');", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vpercent = myRender->GetString("percent");
			String^ vfrom = myRender->GetString("date_from");
			String^ vuntil = myRender->GetString("date_until");
			String^ vid = myRender->GetInt32("discount_id").ToString();

			listBox2->Items->Add(vid + " : " + vpercent + "% ,FROM " + vfrom + " TO " + vuntil);
			comboBox1->Items->Add(vid);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

Void BEBS::DiscountControl::fillCurrent(void) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.discounts  where (date_from >= '2020-12-30' and  date_until <= '2021-02-20');", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vpercent = myRender->GetString("percent");
			String^ vfrom = myRender->GetString("date_from");
			String^ vuntil = myRender->GetString("date_until");
			String^ vid = myRender->GetInt32("discount_id").ToString();

			id_tet->Text = vid;
			discount->Text = vpercent;
			start->Text = vfrom;
			end->Text = vuntil;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
System::Void BEBS::DiscountControl::SAVE_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);

	int^ vId;
	//get id count
	MySqlCommand^ cmdDB0 = gcnew MySqlCommand("select count(*) from book_store.discounts;", conData);
	MySqlDataReader^ myRender0;
	try {
		conData->Open();
		myRender0 = cmdDB0->ExecuteReader();
		while (myRender0->Read()) {
			vId = myRender0->GetInt32("count(*)") + 1;
		}

		conData->Close();
		conData->Open();
		MySqlCommand^ cmdDB = gcnew MySqlCommand("INSERT INTO `book_store`.`discounts`(`discount_id`,`percent`,`date_from` ,`date_until`) VALUES('" + vId + "','" + discount->Text + "','" + start->Text + "','" + end->Text + "');", conData);
		MySqlDataReader^ myRender;
		try {
			myRender = cmdDB->ExecuteReader();
			MessageBox::Show("Added");
			while (myRender->Read()) {

			}
			this->Hide();
			BEBS::DiscountControl renderPage;
			renderPage.ShowDialog();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}



}
	System::Void BEBS::DiscountControl::listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
System::Void BEBS::DiscountControl::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ listVal = comboBox1->Text;

	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.discounts where discount_id='" + listVal + "';", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();

		if (myRender->Read()) {
			String^ vId = myRender->GetInt32("discount_id").ToString();
			String^ vpercent = myRender->GetInt32("percent").ToString();
			String^ vdate_from = myRender->GetString("date_from");
			String^ vdate_until = myRender->GetString("date_until");


			//set vals to text box
			id_tet->Text = vId;
			discount->Text = vpercent;
			start->Text = vdate_from;
			end->Text = vdate_until;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
System::Void BEBS::DiscountControl::edit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("update book_store.discounts set discount_id='" + id_tet->Text + "',percent='" + discount->Text + "',date_from='" + start->Text + "',date_until='" + end->Text + "' where discount_id='" + id_tet->Text + "';", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Update");
		while (myRender->Read()) {

		}
		this->Hide();
		BEBS::DiscountControl renderPage;
		renderPage.ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
System::Void BEBS::DiscountControl::block_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("delete from book_store.books where discounts='" + id_tet->Text + "' ;", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Deleted");
		while (myRender->Read()) {

		}
		this->Hide();
		BEBS::DiscountControl renderPage;
		renderPage.ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
System::Void BEBS::DiscountControl::HomePage_Click(System::Object^ sender, System::EventArgs^ e) {
	this->~DiscountControl();
	lastForm->Show();
}
System::Void BEBS::DiscountControl::DiscountControl_Load(System::Object^ sender, System::EventArgs^ e) {
}
	
