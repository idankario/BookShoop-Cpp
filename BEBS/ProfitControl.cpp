#include "pch.h"

BEBS::ProfitControl::ProfitControl(void)
{
	InitializeComponent();
	fillAll();
	//
	//TODO: Add the constructor code here
	//
}
BEBS::ProfitControl::ProfitControl(Form^ lastForm)
{
	this->lastForm = lastForm;
	InitializeComponent();
	fillAll();
}
BEBS::ProfitControl::~ProfitControl()
{
	if (components)
	{
		delete components;
	}
}

		void BEBS::ProfitControl::InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProfitControl::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->weekly = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Quarterly = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->BackLastPage = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BackLastPage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(40, 38);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 24);
			this->label5->TabIndex = 27;
			this->label5->Text = L"BEBS Profits";
			// 
			// weekly
			// 
			this->weekly->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->weekly->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->weekly->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->weekly->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->weekly->ForeColor = System::Drawing::Color::White;
			this->weekly->Location = System::Drawing::Point(67, 98);
			this->weekly->Name = L"weekly";
			this->weekly->Size = System::Drawing::Size(141, 50);
			this->weekly->TabIndex = 33;
			this->weekly->Text = L"Weekly";
			this->weekly->UseVisualStyleBackColor = false;
			this->weekly->Click += gcnew System::EventHandler(this, &ProfitControl::weekly_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(232, 98);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 50);
			this->button2->TabIndex = 34;
			this->button2->Text = L"Monthly";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ProfitControl::button2_Click);
			// 
			// Quarterly
			// 
			this->Quarterly->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Quarterly->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Quarterly->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Quarterly->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quarterly->ForeColor = System::Drawing::Color::White;
			this->Quarterly->Location = System::Drawing::Point(391, 98);
			this->Quarterly->Name = L"Quarterly";
			this->Quarterly->Size = System::Drawing::Size(141, 50);
			this->Quarterly->TabIndex = 35;
			this->Quarterly->Text = L"Quarterly";
			this->Quarterly->UseVisualStyleBackColor = false;
			this->Quarterly->Click += gcnew System::EventHandler(this, &ProfitControl::Quarterly_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(569, 98);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Color = System::Drawing::Color::Blue;
			series1->Legend = L"Legend1";
			series1->Name = L"Books";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(465, 395);
			this->chart1->TabIndex = 36;
			this->chart1->Text = L"chart1";
			// 
			// BackLastPage
			// 
			this->BackLastPage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BackLastPage.BackgroundImage")));
			this->BackLastPage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BackLastPage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BackLastPage->Location = System::Drawing::Point(994, 31);
			this->BackLastPage->Name = L"BackLastPage";
			this->BackLastPage->Size = System::Drawing::Size(40, 40);
			this->BackLastPage->TabIndex = 37;
			this->BackLastPage->TabStop = false;
			this->BackLastPage->Click += gcnew System::EventHandler(this, &ProfitControl::BackLastPage_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(67, 168);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 72;
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(483, 325);
			this->dataGridView1->TabIndex = 38;
			// 
			// ProfitControl
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1076, 536);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->BackLastPage);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->Quarterly);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->weekly);
			this->Controls->Add(this->label5);
			this->Name = L"ProfitControl";
			this->Text = L"ProfitControl";
			this->Load += gcnew System::EventHandler(this, &ProfitControl::ProfitControl_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BackLastPage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	System::Void BEBS::ProfitControl::weekly_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
		MySqlConnection^ conData = gcnew MySqlConnection(con);
		MySqlCommand^ cmdDB = gcnew MySqlCommand("select sum(b.price), b.title, bl.book_id from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-11-01' and order_date <= '2020-11-20') group by b.price;", conData);
		MySqlDataReader^ myRender;

		this->chart1->Series["Books"]->Points->Clear();

		try {
			conData->Open();
			myRender = cmdDB->ExecuteReader();
			while (myRender->Read()) {
				String^ vtitle = myRender->GetString("book_id");
				String^ vprice = myRender->GetInt32("sum(b.price)").ToString();
				this->chart1->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("sum(b.price)"));
			}
			conData->Close();
			conData->Open();
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDB;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSorce = gcnew BindingSource();

			bSorce->DataSource = dbdataset;
			dataGridView1->DataSource = bSorce;
			sda->Update(dbdataset);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	Void BEBS::ProfitControl::fillAll(void) {
		String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
		MySqlConnection^ conData = gcnew MySqlConnection(con);
		MySqlCommand^ cmdDB = gcnew MySqlCommand("select sum(b.price), b.title, bl.book_id from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-11-01' and order_date <= '2020-11-20') group by b.price;", conData);
		MySqlDataReader^ myRender;

		this->chart1->Series["Books"]->Points->Clear();

		try {
			conData->Open();
			myRender = cmdDB->ExecuteReader();
			while (myRender->Read()) {
				String^ vtitle = myRender->GetString("book_id");
				String^ vprice = myRender->GetInt32("sum(b.price)").ToString();
				this->chart1->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("sum(b.price)"));
			}
			conData->Close();
			conData->Open();
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDB;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSorce = gcnew BindingSource();

			bSorce->DataSource = dbdataset;
			dataGridView1->DataSource = bSorce;
			sda->Update(dbdataset);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	System::Void BEBS::ProfitControl::button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
		MySqlConnection^ conData = gcnew MySqlConnection(con);
		MySqlCommand^ cmdDB = gcnew MySqlCommand("select sum(b.price), b.title, bl.book_id from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (MONTH(order_date)=11 and Year(order_date)=2020) group by b.price;", conData);
		MySqlDataReader^ myRender;

		this->chart1->Series["Books"]->Points->Clear();

		try {
			conData->Open();
			myRender = cmdDB->ExecuteReader();
			while (myRender->Read()) {
				String^ vtitle = myRender->GetString("book_id");
				String^ vprice = myRender->GetInt32("sum(b.price)").ToString();
				this->chart1->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("sum(b.price)"));
			}
			conData->Close();
			conData->Open();
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDB;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSorce = gcnew BindingSource();

			bSorce->DataSource = dbdataset;
			dataGridView1->DataSource = bSorce;
			sda->Update(dbdataset);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	System::Void BEBS::ProfitControl::Quarterly_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
		MySqlConnection^ conData = gcnew MySqlConnection(con);
		MySqlCommand^ cmdDB = gcnew MySqlCommand("select sum(b.price), b.title, bl.book_id from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-06-01' and order_date <= '2021-01-01') group by b.price;", conData);
		MySqlDataReader^ myRender;

		this->chart1->Series["Books"]->Points->Clear();

		try {
			conData->Open();
			myRender = cmdDB->ExecuteReader();
			while (myRender->Read()) {
				String^ vtitle = myRender->GetString("book_id");
				String^ vprice = myRender->GetInt32("sum(b.price)").ToString();
				this->chart1->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("sum(b.price)"));
			}
			conData->Close();
			conData->Open();
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDB;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSorce = gcnew BindingSource();

			bSorce->DataSource = dbdataset;
			dataGridView1->DataSource = bSorce;
			sda->Update(dbdataset);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	System::Void BEBS::ProfitControl::ProfitControl_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	System::Void BEBS::ProfitControl::BackLastPage_Click(System::Object^ sender, System::EventArgs^ e) {
		this->~ProfitControl();
		lastForm->Show();
	}