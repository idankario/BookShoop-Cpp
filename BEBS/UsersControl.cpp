#include "pch.h"



BEBS::UsersControl::UsersControl(void)
{
	InitializeComponent();
	//fillCom();
	fillListBox();
	//
	//TODO: Add the constructor code here
	//
}
BEBS::UsersControl::UsersControl(Form^ lastForm)
{
	this->lastForm = lastForm;
	InitializeComponent();
	fillListBox();
}

BEBS::UsersControl::~UsersControl()
{
	if (components)
	{
		delete components;
	}
}

void BEBS::UsersControl::InitializeComponent(void)
{
	System::Windows::Forms::TextBox^ textBoxStatus;
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UsersControl::typeid));
	this->listBoxTable = (gcnew System::Windows::Forms::ListBox());
	this->HomePage = (gcnew System::Windows::Forms::PictureBox());
	this->edit = (gcnew System::Windows::Forms::Button());
	this->cartLabl = (gcnew System::Windows::Forms::Label());
	this->textBoxlName = (gcnew System::Windows::Forms::TextBox());
	this->textBoxEmail = (gcnew System::Windows::Forms::TextBox());
	this->textBoxDate = (gcnew System::Windows::Forms::TextBox());
	this->textName = (gcnew System::Windows::Forms::Label());
	this->textEmail = (gcnew System::Windows::Forms::Label());
	this->textJoinDate = (gcnew System::Windows::Forms::Label());
	this->textStatus = (gcnew System::Windows::Forms::Label());
	this->textPurchases = (gcnew System::Windows::Forms::Label());
	this->userPurchesTable = (gcnew System::Windows::Forms::DataGridView());
	this->block = (gcnew System::Windows::Forms::Button());
	this->UpdateInventoryButton = (gcnew System::Windows::Forms::Button());
	this->DiscountButton = (gcnew System::Windows::Forms::Button());
	this->OrderButton = (gcnew System::Windows::Forms::Button());
	this->UsersButton = (gcnew System::Windows::Forms::Button());
	this->SalesButton = (gcnew System::Windows::Forms::Button());
	this->ProfitButton = (gcnew System::Windows::Forms::Button());
	textBoxStatus = (gcnew System::Windows::Forms::TextBox());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->userPurchesTable))->BeginInit();
	this->SuspendLayout();
	// 
	// textBoxStatus
	// 
	textBoxStatus->BackColor = System::Drawing::Color::Black;
	textBoxStatus->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	textBoxStatus->ForeColor = System::Drawing::Color::White;
	textBoxStatus->Location = System::Drawing::Point(36, 398);
	textBoxStatus->Name = L"textBoxStatus";
	textBoxStatus->Size = System::Drawing::Size(280, 34);
	textBoxStatus->TabIndex = 19;
	// 
	// listBoxTable
	// 
	this->listBoxTable->BackColor = System::Drawing::Color::Black;
	this->listBoxTable->ForeColor = System::Drawing::Color::White;
	this->listBoxTable->FormattingEnabled = true;
	this->listBoxTable->ItemHeight = 16;
	this->listBoxTable->Location = System::Drawing::Point(414, 109);
	this->listBoxTable->Name = L"listBoxTable";
	this->listBoxTable->Size = System::Drawing::Size(310, 164);
	this->listBoxTable->TabIndex = 20;
	this->listBoxTable->SelectedIndexChanged += gcnew System::EventHandler(this, &UsersControl::listBox1_SelectedIndexChanged);
	// 
	// HomePage
	// 
	this->HomePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomePage.BackgroundImage")));
	this->HomePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->HomePage->Cursor = System::Windows::Forms::Cursors::Hand;
	this->HomePage->Location = System::Drawing::Point(1000, 10);
	this->HomePage->Name = L"HomePage";
	this->HomePage->Size = System::Drawing::Size(40, 40);
	this->HomePage->TabIndex = 10;
	this->HomePage->TabStop = false;
	this->HomePage->Click += gcnew System::EventHandler(this, &UsersControl::HomePageClick);
	// 
	// edit
	// 
	this->edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	this->edit->Cursor = System::Windows::Forms::Cursors::Hand;
	this->edit->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->edit->ForeColor = System::Drawing::Color::White;
	this->edit->Location = System::Drawing::Point(200, 500);
	this->edit->Name = L"edit";
	this->edit->Size = System::Drawing::Size(116, 50);
	this->edit->TabIndex = 12;
	this->edit->Text = L"Edit";
	this->edit->UseVisualStyleBackColor = false;
	this->edit->Click += gcnew System::EventHandler(this, &UsersControl::edit_Click);
	// 
	// cartLabl
	// 
	this->cartLabl->AutoSize = true;
	this->cartLabl->Location = System::Drawing::Point(670, 287);
	this->cartLabl->Name = L"cartLabl";
	this->cartLabl->Size = System::Drawing::Size(0, 17);
	this->cartLabl->TabIndex = 15;
	// 
	// textBoxlName
	// 
	this->textBoxlName->BackColor = System::Drawing::Color::Black;
	this->textBoxlName->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->textBoxlName->ForeColor = System::Drawing::Color::White;
	this->textBoxlName->Location = System::Drawing::Point(36, 113);
	this->textBoxlName->Name = L"textBoxlName";
	this->textBoxlName->Size = System::Drawing::Size(280, 34);
	this->textBoxlName->TabIndex = 16;
	// 
	// textBoxEmail
	// 
	this->textBoxEmail->BackColor = System::Drawing::Color::Black;
	this->textBoxEmail->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->textBoxEmail->ForeColor = System::Drawing::Color::White;
	this->textBoxEmail->Location = System::Drawing::Point(36, 205);
	this->textBoxEmail->Name = L"textBoxEmail";
	this->textBoxEmail->Size = System::Drawing::Size(280, 34);
	this->textBoxEmail->TabIndex = 17;
	// 
	// textBoxDate
	// 
	this->textBoxDate->BackColor = System::Drawing::Color::Black;
	this->textBoxDate->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->textBoxDate->ForeColor = System::Drawing::Color::White;
	this->textBoxDate->Location = System::Drawing::Point(36, 303);
	this->textBoxDate->Name = L"textBoxDate";
	this->textBoxDate->Size = System::Drawing::Size(280, 34);
	this->textBoxDate->TabIndex = 18;
	// 
	// textName
	// 
	this->textName->AutoSize = true;
	this->textName->BackColor = System::Drawing::Color::Transparent;
	this->textName->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->textName->ForeColor = System::Drawing::Color::White;
	this->textName->Location = System::Drawing::Point(30, 77);
	this->textName->Name = L"textName";
	this->textName->Size = System::Drawing::Size(95, 19);
	this->textName->TabIndex = 21;
	this->textName->Text = L"User Name";
	// 
	// textEmail
	// 
	this->textEmail->AutoSize = true;
	this->textEmail->BackColor = System::Drawing::Color::Transparent;
	this->textEmail->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->textEmail->ForeColor = System::Drawing::Color::White;
	this->textEmail->Location = System::Drawing::Point(30, 169);
	this->textEmail->Name = L"textEmail";
	this->textEmail->Size = System::Drawing::Size(51, 19);
	this->textEmail->TabIndex = 22;
	this->textEmail->Text = L"Email";
	this->textEmail->Click += gcnew System::EventHandler(this, &UsersControl::label1_Click);
	// 
	// textJoinDate
	// 
	this->textJoinDate->AutoSize = true;
	this->textJoinDate->BackColor = System::Drawing::Color::Transparent;
	this->textJoinDate->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->textJoinDate->ForeColor = System::Drawing::Color::White;
	this->textJoinDate->Location = System::Drawing::Point(30, 267);
	this->textJoinDate->Name = L"textJoinDate";
	this->textJoinDate->Size = System::Drawing::Size(83, 19);
	this->textJoinDate->TabIndex = 23;
	this->textJoinDate->Text = L"Join Date";
	// 
	// textStatus
	// 
	this->textStatus->AutoSize = true;
	this->textStatus->BackColor = System::Drawing::Color::Transparent;
	this->textStatus->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->textStatus->ForeColor = System::Drawing::Color::White;
	this->textStatus->Location = System::Drawing::Point(30, 362);
	this->textStatus->Name = L"textStatus";
	this->textStatus->Size = System::Drawing::Size(60, 19);
	this->textStatus->TabIndex = 24;
	this->textStatus->Text = L"Status";
	// 
	// textPurchases
	// 
	this->textPurchases->AutoSize = true;
	this->textPurchases->BackColor = System::Drawing::Color::Transparent;
	this->textPurchases->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->textPurchases->ForeColor = System::Drawing::Color::White;
	this->textPurchases->Location = System::Drawing::Point(414, 321);
	this->textPurchases->Name = L"textPurchases";
	this->textPurchases->Size = System::Drawing::Size(134, 19);
	this->textPurchases->TabIndex = 28;
	this->textPurchases->Text = L"User Purchases";
	// 
	// userPurchesTable
	// 
	this->userPurchesTable->BackgroundColor = System::Drawing::Color::Black;
	this->userPurchesTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->userPurchesTable->Location = System::Drawing::Point(414, 351);
	this->userPurchesTable->Name = L"userPurchesTable";
	this->userPurchesTable->ReadOnly = true;
	this->userPurchesTable->RowHeadersWidth = 72;
	this->userPurchesTable->RowTemplate->Height = 31;
	this->userPurchesTable->Size = System::Drawing::Size(461, 196);
	this->userPurchesTable->TabIndex = 30;
	this->userPurchesTable->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UsersControl::dataGridView1_CellContentClick_1);
	// 
	// block
	// 
	this->block->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(0)));
	this->block->Cursor = System::Windows::Forms::Cursors::Hand;
	this->block->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->block->ForeColor = System::Drawing::Color::White;
	this->block->Location = System::Drawing::Point(34, 500);
	this->block->Name = L"block";
	this->block->Size = System::Drawing::Size(116, 50);
	this->block->TabIndex = 11;
	this->block->Text = L"Block";
	this->block->UseVisualStyleBackColor = false;
	this->block->Click += gcnew System::EventHandler(this, &UsersControl::block_Click);
	// 
	// UpdateInventoryButton
	// 
	this->UpdateInventoryButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
	this->UpdateInventoryButton->Cursor = System::Windows::Forms::Cursors::Hand;
	this->UpdateInventoryButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->UpdateInventoryButton->ForeColor = System::Drawing::SystemColors::HighlightText;
	this->UpdateInventoryButton->Location = System::Drawing::Point(817, 12);
	this->UpdateInventoryButton->Name = L"UpdateInventoryButton";
	this->UpdateInventoryButton->Size = System::Drawing::Size(104, 50);
	this->UpdateInventoryButton->TabIndex = 70;
	this->UpdateInventoryButton->Text = L"Update Inventory";
	this->UpdateInventoryButton->UseVisualStyleBackColor = false;
	this->UpdateInventoryButton->Click += gcnew System::EventHandler(this, &UsersControl::InventoryClick);
	// 
	// DiscountButton
	// 
	this->DiscountButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
	this->DiscountButton->Cursor = System::Windows::Forms::Cursors::Hand;
	this->DiscountButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->DiscountButton->ForeColor = System::Drawing::SystemColors::HighlightText;
	this->DiscountButton->Location = System::Drawing::Point(257, 12);
	this->DiscountButton->Name = L"DiscountButton";
	this->DiscountButton->Size = System::Drawing::Size(118, 50);
	this->DiscountButton->TabIndex = 69;
	this->DiscountButton->Text = L"Discount";
	this->DiscountButton->UseVisualStyleBackColor = false;
	this->DiscountButton->Click += gcnew System::EventHandler(this, &UsersControl::DiscountClick);
	// 
	// OrderButton
	// 
	this->OrderButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
	this->OrderButton->Cursor = System::Windows::Forms::Cursors::Hand;
	this->OrderButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->OrderButton->ForeColor = System::Drawing::SystemColors::HighlightText;
	this->OrderButton->Location = System::Drawing::Point(381, 12);
	this->OrderButton->Name = L"OrderButton";
	this->OrderButton->Size = System::Drawing::Size(109, 50);
	this->OrderButton->TabIndex = 68;
	this->OrderButton->Text = L"Orders";
	this->OrderButton->UseVisualStyleBackColor = false;
	this->OrderButton->Click += gcnew System::EventHandler(this, &UsersControl::OrdersClick);
	// 
	// UsersButton
	// 
	this->UsersButton->BackColor = System::Drawing::Color::Gray;
	this->UsersButton->Cursor = System::Windows::Forms::Cursors::Default;
	this->UsersButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->UsersButton->ForeColor = System::Drawing::SystemColors::HighlightText;
	this->UsersButton->Location = System::Drawing::Point(496, 12);
	this->UsersButton->Name = L"UsersButton";
	this->UsersButton->Size = System::Drawing::Size(93, 50);
	this->UsersButton->TabIndex = 67;
	this->UsersButton->Text = L"Users";
	this->UsersButton->UseVisualStyleBackColor = false;
	// 
	// SalesButton
	// 
	this->SalesButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
	this->SalesButton->Cursor = System::Windows::Forms::Cursors::Hand;
	this->SalesButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->SalesButton->ForeColor = System::Drawing::SystemColors::HighlightText;
	this->SalesButton->Location = System::Drawing::Point(595, 12);
	this->SalesButton->Name = L"SalesButton";
	this->SalesButton->Size = System::Drawing::Size(106, 50);
	this->SalesButton->TabIndex = 66;
	this->SalesButton->Text = L"Sales";
	this->SalesButton->UseVisualStyleBackColor = false;
	this->SalesButton->Click += gcnew System::EventHandler(this, &UsersControl::SalesClick);
	// 
	// ProfitButton
	// 
	this->ProfitButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
	this->ProfitButton->Cursor = System::Windows::Forms::Cursors::Hand;
	this->ProfitButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->ProfitButton->ForeColor = System::Drawing::SystemColors::HighlightText;
	this->ProfitButton->Location = System::Drawing::Point(707, 12);
	this->ProfitButton->Name = L"ProfitButton";
	this->ProfitButton->Size = System::Drawing::Size(104, 50);
	this->ProfitButton->TabIndex = 65;
	this->ProfitButton->Text = L"Profit";
	this->ProfitButton->UseVisualStyleBackColor = false;
	this->ProfitButton->Click += gcnew System::EventHandler(this, &UsersControl::ProfitClick);
	// 
	// UsersControl
	// 
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
	this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
	this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->ClientSize = System::Drawing::Size(1115, 582);
	this->Controls->Add(this->UpdateInventoryButton);
	this->Controls->Add(this->DiscountButton);
	this->Controls->Add(this->OrderButton);
	this->Controls->Add(this->UsersButton);
	this->Controls->Add(this->SalesButton);
	this->Controls->Add(this->ProfitButton);
	this->Controls->Add(this->userPurchesTable);
	this->Controls->Add(this->textPurchases);
	this->Controls->Add(this->textStatus);
	this->Controls->Add(this->textJoinDate);
	this->Controls->Add(this->textEmail);
	this->Controls->Add(this->textName);
	this->Controls->Add(textBoxStatus);
	this->Controls->Add(this->textBoxDate);
	this->Controls->Add(this->textBoxEmail);
	this->Controls->Add(this->textBoxlName);
	this->Controls->Add(this->cartLabl);
	this->Controls->Add(this->edit);
	this->Controls->Add(this->block);
	this->Controls->Add(this->HomePage);
	this->Controls->Add(this->listBoxTable);
	this->Name = L"UsersControl";
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	this->Text = L"UsersControl";
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->userPurchesTable))->EndInit();
	this->ResumeLayout(false);
	this->PerformLayout();

}

System::Void BEBS::UsersControl::dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

Void BEBS::UsersControl::fillCom(void) {
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select user_name,email,join_date,user_role from book_store.users where user_role='buyer';", conData);


	try {
		//conData->Open();
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDB;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSorce = gcnew BindingSource();

		bSorce->DataSource = dbdataset;
		userPurchesTable->DataSource = bSorce;
		sda->Update(dbdataset);

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
System::Void BEBS::UsersControl::label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
System::Void BEBS::UsersControl::label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}

	   int countList2 = 0;
System::Void BEBS::UsersControl::listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ listVal = listBoxTable->Text;
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.users where user_name='" + listVal + "' ;", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();

		if (myRender->Read()) {
			String^ vId = myRender->GetInt32("user_id").ToString();
			String^ vname = myRender->GetString("user_name");
			String^ vemail = myRender->GetString("email");
			String^ vdate = myRender->GetString("join_date");
			String^ vstatus = myRender->GetString("user_status");

			//set vals to text box
			textName->Text = vname;
			textEmail->Text = vemail;
			textJoinDate->Text = vdate;
			textStatus->Text = vstatus;

			//set list 2:
			conData->Close();
			MySqlCommand^ cmdDB2 = gcnew MySqlCommand("select pyment_date,price_paid,payment_method from book_store.purchases where user_id='" + vId + "';", conData);



			try {
				conData->Open();
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = cmdDB2;
				DataTable^ dbdataset = gcnew DataTable();
				sda->Fill(dbdataset);
				BindingSource^ bSorce = gcnew BindingSource();

				bSorce->DataSource = dbdataset;
				userPurchesTable->DataSource = bSorce;
				sda->Update(dbdataset);

			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}

			/*try {
				conData->Open();
				myRender2 = cmdDB2->ExecuteReader();
				//remove each click
				if (countList2 > 0) {
					countList2--;
					int i = 0;
					for (; i <= countList2; i++) {
						listBox2->Items->RemoveAt(countList2);
						countList2--;
					}
				}
				//set:
				while (myRender2->Read()) {
					String^ pId = myRender2->GetInt32("purchase_id").ToString();
					String^ pprice = myRender2->GetString("price_paid");
					String^ pdate = myRender2->GetString("pyment_date");
					String^ pmethod = myRender2->GetString("payment_method");
					countList2++;
					listBox2->Items->Add(pId + ", " + pprice + ", " + pdate + ", " + pmethod);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			*/

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

Void BEBS::UsersControl::fillListBox(void) {
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.users where user_role='buyer';", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		while (myRender->Read()) {
			String^ vName;
			vName = myRender->GetString("user_name");
			listBoxTable->Items->Add(vName);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

System::Void BEBS::UsersControl::dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
System::Void BEBS::UsersControl::block_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("update book_store.users set user_status='OFF' where email='" + textEmail->Text + "' ;", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Blocked");
		while (myRender->Read()) {

		}
		this->Hide();
		BEBS::UsersControl renderPage;
		renderPage.ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
System::Void BEBS::UsersControl::edit_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ conData = gcnew MySqlConnection(con);
	MySqlCommand^ cmdDB = gcnew MySqlCommand("update book_store.users set user_name='" + textName->Text + "',user_status='" + textStatus->Text + "' where email='" + textEmail->Text + "' ;", conData);
	MySqlDataReader^ myRender;

	try {
		conData->Open();
		myRender = cmdDB->ExecuteReader();
		MessageBox::Show("Edited");
		while (myRender->Read()) {

		}
		this->Hide();
		BEBS::UsersControl renderPage;
		renderPage.ShowDialog();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

System::Void BEBS::UsersControl::InventoryClick(System::Object^ sender, System::EventArgs^ e) {
	this->~UsersControl();
	BEBS::AdminMenu admin;
	admin.ShowDialog();
}
System::Void BEBS::UsersControl::DiscountClick(System::Object^ sender, System::EventArgs^ e) {
	this->~UsersControl();
	BEBS::DiscountControl discount;
	discount.ShowDialog();
}
System::Void BEBS::UsersControl::OrdersClick(System::Object^ sender, System::EventArgs^ e) {
	this->~UsersControl();
	BEBS::OrdersControl order;
	order.ShowDialog();
}
System::Void BEBS::UsersControl::SalesClick(System::Object^ sender, System::EventArgs^ e) {
	this->~UsersControl();
	BEBS::SalesControl sales;
	sales.ShowDialog();
}
System::Void BEBS::UsersControl::ProfitClick(System::Object^ sender, System::EventArgs^ e) {
	this->~UsersControl();
	BEBS::ProfitControl profit;
	profit.ShowDialog();
}
System::Void BEBS::UsersControl::HomePageClick(System::Object^ sender, System::EventArgs^ e) {
	this->~UsersControl();
	BEBS::HomePage HomePage;
	HomePage.ShowDialog();
}
		
		
