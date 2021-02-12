#include "pch.h"

BEBS::SalesControl::SalesControl(void)
{
	InitializeComponent();
	fillAll();

}
BEBS::SalesControl::SalesControl(Form^ lastForm)
{
	this->lastForm = lastForm;
	InitializeComponent();
	fillAll();
}


BEBS::SalesControl::~SalesControl()
		{
			if (components)
			{
				delete components;
			}
		}


		void BEBS::SalesControl::InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SalesControl::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->HomePage = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Quarterly = (gcnew System::Windows::Forms::Button());
			this->weekly = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(53, 182);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::MidnightBlue;
			series1->Legend = L"Legend1";
			series1->Name = L"Books_Amount";
			series1->YValuesPerPoint = 2;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(458, 342);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &SalesControl::chart1_Click);
			// 
			// HomePage
			// 
			this->HomePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomePage.BackgroundImage")));
			this->HomePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->HomePage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HomePage->Location = System::Drawing::Point(994, 27);
			this->HomePage->Name = L"HomePage";
			this->HomePage->Size = System::Drawing::Size(40, 40);
			this->HomePage->TabIndex = 11;
			this->HomePage->TabStop = false;
			this->HomePage->Click += gcnew System::EventHandler(this, &SalesControl::HomePage_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(47, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 24);
			this->label5->TabIndex = 26;
			this->label5->Text = L"BEBS Sales ";
			this->label5->Click += gcnew System::EventHandler(this, &SalesControl::label5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(525, 287);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 24);
			this->label1->TabIndex = 27;
			this->label1->Text = L"BEBS Amounts";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(531, 112);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::CornflowerBlue;
			series2->Legend = L"Legend1";
			series2->Name = L"Books";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(465, 168);
			this->chart2->TabIndex = 28;
			this->chart2->Text = L"chart2";
			// 
			// chart3
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(531, 323);
			this->chart3->Name = L"chart3";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series3->Color = System::Drawing::Color::Blue;
			series3->Legend = L"Legend1";
			series3->Name = L"Books";
			this->chart3->Series->Add(series3);
			this->chart3->Size = System::Drawing::Size(465, 201);
			this->chart3->TabIndex = 29;
			this->chart3->Text = L"chart3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(541, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 24);
			this->label2->TabIndex = 30;
			this->label2->Text = L"BEBS Sales ";
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
			this->Quarterly->Location = System::Drawing::Point(370, 99);
			this->Quarterly->Name = L"Quarterly";
			this->Quarterly->Size = System::Drawing::Size(141, 50);
			this->Quarterly->TabIndex = 31;
			this->Quarterly->Text = L"Quarterly";
			this->Quarterly->UseVisualStyleBackColor = false;
			this->Quarterly->Click += gcnew System::EventHandler(this, &SalesControl::Quarterly_Click);
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
			this->weekly->Location = System::Drawing::Point(53, 99);
			this->weekly->Name = L"weekly";
			this->weekly->Size = System::Drawing::Size(141, 50);
			this->weekly->TabIndex = 32;
			this->weekly->Text = L"Weekly";
			this->weekly->UseVisualStyleBackColor = false;
			this->weekly->Click += gcnew System::EventHandler(this, &SalesControl::weekly_Click);
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
			this->button2->Location = System::Drawing::Point(212, 99);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 50);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Monthly";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SalesControl::button2_Click);
			// 
			// SalesControl
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1076, 536);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->weekly);
			this->Controls->Add(this->Quarterly);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->HomePage);
			this->Controls->Add(this->chart1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"SalesControl";
			this->Text = L"SalesControl";
			this->Load += gcnew System::EventHandler(this, &SalesControl::SalesControl_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	System::Void BEBS::SalesControl::button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->chart1->Series["Books"]->Points->AddXY("max",25);
		//this->chart1->Series["Books"]->Points->AddXY("max2", 45);
		//this->chart1->Series["Books"]->Points->AddXY("max3", 15);

		String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
		MySqlConnection^ conData = gcnew MySqlConnection(con);
		MySqlCommand^ cmdDB = gcnew MySqlCommand("select * from book_store.books;", conData);
		MySqlDataReader^ myRender;

		try {
			conData->Open();
			myRender = cmdDB->ExecuteReader();
			while (myRender->Read()) {
				String^ vtitle = myRender->GetString("title");
				String^ vprice = myRender->GetInt32("price").ToString();

				this->chart1->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("price"));
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
System::Void BEBS::SalesControl::label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
System::Void BEBS::SalesControl::button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
		MySqlConnection^ conData = gcnew MySqlConnection(con);

		//select count(bl.book_id), bl.book_id, b.title from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and MONTH(order_date) = 11 and Year(order_date) = 2020 group by b.book_id;

		MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(bl.book_id), bl.book_id, b.title from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and MONTH(order_date) = 11 and Year(order_date) = 2020 group by b.book_id;", conData);
		MySqlDataReader^ myRender;

		this->chart1->Series["Books_Amount"]->Points->Clear();
		this->chart2->Series["Books"]->Points->Clear();
		this->chart3->Series["Books"]->Points->Clear();

		try {
			conData->Open();
			myRender = cmdDB->ExecuteReader();
			while (myRender->Read()) {
				String^ vtitle = myRender->GetString("title");
				String^ vprice = myRender->GetInt32("count(bl.book_id)").ToString();

				this->chart1->Series["Books_Amount"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
				this->chart2->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
				this->chart3->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
			}

			/*
			conData->Close();
			//peice:
			MySqlCommand^ cmdDB2 = gcnew MySqlCommand("select sum(b.price), bl.book_id, b.title from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and MONTH(order_date) = 11 and Year(order_date) = 2020 group by b.price;", conData);
			MySqlDataReader^ myRender2;
			try {
				conData->Open();
				myRender2 = cmdDB2->ExecuteReader();
				while (myRender2->Read()) {
					String^ vtitle = myRender2->GetString("title");
					String^ vprice = myRender2->GetInt32("sum(b.price)").ToString();
					this->chart3->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("sum(b.price)"));
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			*/

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
System::Void BEBS::SalesControl::weekly_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
		MySqlConnection^ conData = gcnew MySqlConnection(con);
		//select count(bl.book_id), bl.book_id, b.title, order_date from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-11-01' and order_date <= '2020-11-20') group by b.book_id;
		MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(bl.book_id), bl.book_id, b.title, order_date from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-11-01' and order_date <= '2020-11-20') group by b.book_id;", conData);
		MySqlDataReader^ myRender;

		this->chart1->Series["Books_Amount"]->Points->Clear();
		this->chart2->Series["Books"]->Points->Clear();
		this->chart3->Series["Books"]->Points->Clear();

		try {
			conData->Open();
			myRender = cmdDB->ExecuteReader();
			while (myRender->Read()) {
				String^ vtitle = myRender->GetString("title");
				String^ vprice = myRender->GetInt32("count(bl.book_id)").ToString();

				this->chart1->Series["Books_Amount"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
				this->chart2->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
				this->chart3->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));


				/*
				conData->Close();
				conData->Open();
				//peice:
				MySqlCommand^ cmdDB2 = gcnew MySqlCommand("select sum(b.price), bl.book_id, b.title from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-11-01' and order_date <= '2020-11-20') group by b.price;", conData);
				MySqlDataReader^ myRender2;
				try {
					myRender2 = cmdDB2->ExecuteReader();
					while (myRender2->Read()) {
						String^ vtitle = myRender2->GetString("title");
						String^ vprice = myRender2->GetInt32("sum(b.price)").ToString();
						this->chart3->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("sum(b.price)"));
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

Void BEBS::SalesControl::fillAll(void) {
		String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
		MySqlConnection^ conData = gcnew MySqlConnection(con);
		MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(bl.book_id), bl.book_id, b.title, order_date from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-11-01' and order_date <= '2020-11-20') group by b.book_id;", conData);
		MySqlDataReader^ myRender;

		this->chart1->Series["Books_Amount"]->Points->Clear();
		this->chart2->Series["Books"]->Points->Clear();
		this->chart3->Series["Books"]->Points->Clear();

		try {
			conData->Open();
			myRender = cmdDB->ExecuteReader();
			while (myRender->Read()) {
				String^ vtitle = myRender->GetString("title");
				String^ vprice = myRender->GetInt32("count(bl.book_id)").ToString();

				this->chart1->Series["Books_Amount"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
				this->chart2->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
				this->chart3->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
System::Void BEBS::SalesControl::chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
System::Void BEBS::SalesControl::Quarterly_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ con = L"datasource=localhost; port=3306; username=root; password=shanilevi24";
		MySqlConnection^ conData = gcnew MySqlConnection(con);

		MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(bl.book_id), bl.book_id, b.title from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-06-01' and order_date <= '2021-01-01') group by b.book_id;", conData);
		MySqlDataReader^ myRender;

		this->chart1->Series["Books_Amount"]->Points->Clear();
		this->chart2->Series["Books"]->Points->Clear();
		this->chart3->Series["Books"]->Points->Clear();

		try {
			conData->Open();
			myRender = cmdDB->ExecuteReader();
			while (myRender->Read()) {
				String^ vtitle = myRender->GetString("title");
				String^ vprice = myRender->GetInt32("count(bl.book_id)").ToString();

				this->chart1->Series["Books_Amount"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
				this->chart2->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
				this->chart3->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
			}

			/*
			conData->Close();
			//peice:
			MySqlCommand^ cmdDB2 = gcnew MySqlCommand("select sum(b.price), bl.book_id, b.title from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and MONTH(order_date) = 11 and Year(order_date) = 2020 group by b.price;", conData);
			MySqlDataReader^ myRender2;
			try {
				conData->Open();
				myRender2 = cmdDB2->ExecuteReader();
				while (myRender2->Read()) {
					String^ vtitle = myRender2->GetString("title");
					String^ vprice = myRender2->GetInt32("sum(b.price)").ToString();
					this->chart3->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("sum(b.price)"));
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			*/

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
System::Void BEBS::SalesControl::SalesControl_Load(System::Object^ sender, System::EventArgs^ e) {
	}
System::Void BEBS::SalesControl::HomePage_Click(System::Object^ sender, System::EventArgs^ e) {
		this->~SalesControl();
		lastForm->Show();
	}