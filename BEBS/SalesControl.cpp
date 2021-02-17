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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Quarterly = (gcnew System::Windows::Forms::Button());
			this->weekly = (gcnew System::Windows::Forms::Button());
			this->Monthly = (gcnew System::Windows::Forms::Button());
			this->UpdateInventoryButton = (gcnew System::Windows::Forms::Button());
			this->DiscountButton = (gcnew System::Windows::Forms::Button());
			this->OrderButton = (gcnew System::Windows::Forms::Button());
			this->UsersButton = (gcnew System::Windows::Forms::Button());
			this->SalesButton = (gcnew System::Windows::Forms::Button());
			this->ProfitButton = (gcnew System::Windows::Forms::Button());
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
			this->chart1->Location = System::Drawing::Point(53, 206);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::MidnightBlue;
			series1->Legend = L"Legend1";
			series1->Name = L"Books";
			series1->YValuesPerPoint = 2;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(458, 342);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// HomePage
			// 
			this->HomePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomePage.BackgroundImage")));
			this->HomePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->HomePage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HomePage->Location = System::Drawing::Point(1000, 10);
			this->HomePage->Name = L"HomePage";
			this->HomePage->Size = System::Drawing::Size(40, 40);
			this->HomePage->TabIndex = 11;
			this->HomePage->TabStop = false;
			this->HomePage->Click += gcnew System::EventHandler(this, &SalesControl::homePageClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(525, 320);
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
			this->chart2->Location = System::Drawing::Point(531, 137);
			this->chart2->Name = L"chart2";
			series2->BorderWidth = 5;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::MidnightBlue;
			series2->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series2->LabelForeColor = System::Drawing::Color::MidnightBlue;
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
			this->chart3->Location = System::Drawing::Point(531, 347);
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
			// Quarterly
			// 
			this->Quarterly->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Quarterly->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Quarterly->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Quarterly->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Quarterly->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quarterly->ForeColor = System::Drawing::Color::White;
			this->Quarterly->Location = System::Drawing::Point(370, 137);
			this->Quarterly->Name = L"Quarterly";
			this->Quarterly->Size = System::Drawing::Size(141, 50);
			this->Quarterly->TabIndex = 31;
			this->Quarterly->Text = L"Quarterly";
			this->Quarterly->UseVisualStyleBackColor = false;
			this->Quarterly->Click += gcnew System::EventHandler(this, &SalesControl::quarterlyClick);
			// 
			// weekly
			// 
			this->weekly->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->weekly->Cursor = System::Windows::Forms::Cursors::Hand;
			this->weekly->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->weekly->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->weekly->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->weekly->ForeColor = System::Drawing::Color::White;
			this->weekly->Location = System::Drawing::Point(53, 137);
			this->weekly->Name = L"weekly";
			this->weekly->Size = System::Drawing::Size(141, 50);
			this->weekly->TabIndex = 32;
			this->weekly->Text = L"Weekly";
			this->weekly->UseVisualStyleBackColor = false;
			this->weekly->Click += gcnew System::EventHandler(this, &SalesControl::weeklyClick);
			// 
			// Monthly
			// 
			this->Monthly->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Monthly->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Monthly->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Monthly->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Monthly->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Monthly->ForeColor = System::Drawing::Color::White;
			this->Monthly->Location = System::Drawing::Point(212, 137);
			this->Monthly->Name = L"Monthly";
			this->Monthly->Size = System::Drawing::Size(141, 50);
			this->Monthly->TabIndex = 33;
			this->Monthly->Text = L"Monthly";
			this->Monthly->UseVisualStyleBackColor = false;
			this->Monthly->Click += gcnew System::EventHandler(this, &SalesControl::monthlyClick);
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
			this->UpdateInventoryButton->TabIndex = 46;
			this->UpdateInventoryButton->Text = L"Update Inventory";
			this->UpdateInventoryButton->UseVisualStyleBackColor = false;
			this->UpdateInventoryButton->Click += gcnew System::EventHandler(this, &SalesControl::inventoryClick);
			// 
			// DiscountButton
			// 
			this->DiscountButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->DiscountButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DiscountButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DiscountButton->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->DiscountButton->Location = System::Drawing::Point(256, 12);
			this->DiscountButton->Name = L"DiscountButton";
			this->DiscountButton->Size = System::Drawing::Size(118, 50);
			this->DiscountButton->TabIndex = 45;
			this->DiscountButton->Text = L"Discount";
			this->DiscountButton->UseVisualStyleBackColor = false;
			this->DiscountButton->Click += gcnew System::EventHandler(this, &SalesControl::discountClick);
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
			this->OrderButton->TabIndex = 44;
			this->OrderButton->Text = L"Orders";
			this->OrderButton->UseVisualStyleBackColor = false;
			this->OrderButton->Click += gcnew System::EventHandler(this, &SalesControl::ordersClick);
			// 
			// UsersButton
			// 
			this->UsersButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->UsersButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->UsersButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UsersButton->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->UsersButton->Location = System::Drawing::Point(496, 12);
			this->UsersButton->Name = L"UsersButton";
			this->UsersButton->Size = System::Drawing::Size(93, 50);
			this->UsersButton->TabIndex = 43;
			this->UsersButton->Text = L"Users";
			this->UsersButton->UseVisualStyleBackColor = false;
			this->UsersButton->Click += gcnew System::EventHandler(this, &SalesControl::usersClick);
			// 
			// SalesButton
			// 
			this->SalesButton->BackColor = System::Drawing::Color::Gray;
			this->SalesButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->SalesButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SalesButton->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->SalesButton->Location = System::Drawing::Point(595, 12);
			this->SalesButton->Name = L"SalesButton";
			this->SalesButton->Size = System::Drawing::Size(106, 50);
			this->SalesButton->TabIndex = 42;
			this->SalesButton->Text = L"Sales";
			this->SalesButton->UseVisualStyleBackColor = false;
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
			this->ProfitButton->TabIndex = 41;
			this->ProfitButton->Text = L"Profit";
			this->ProfitButton->UseVisualStyleBackColor = false;
			this->ProfitButton->Click += gcnew System::EventHandler(this, &SalesControl::profitClick);
			// 
			// SalesControl
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
			this->Controls->Add(this->Monthly);
			this->Controls->Add(this->weekly);
			this->Controls->Add(this->Quarterly);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->HomePage);
			this->Controls->Add(this->chart1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"SalesControl";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SalesControl";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}



System::Void BEBS::SalesControl::monthlyClick(System::Object^ sender, System::EventArgs^ e) {
		
		MySqlConnection^ conData = gcnew MySqlConnection(con);

		//select count(bl.book_id), bl.book_id, b.title from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and MONTH(order_date) = 11 and Year(order_date) = 2020 group by b.book_id;

		MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(bl.book_id), bl.book_id, b.title from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and MONTH(order_date) = 11 and Year(order_date) = 2020 group by b.book_id;", conData);
		MySqlDataReader^ myRender;

		this->chart1->Series["Books"]->Points->Clear();
		this->chart2->Series["Books"]->Points->Clear();
		this->chart3->Series["Books"]->Points->Clear();

		try {
			conData->Open();
			myRender = cmdDB->ExecuteReader();
			while (myRender->Read()) {
				String^ vtitle = myRender->GetString("title");
				String^ vprice = myRender->GetInt32("count(bl.book_id)").ToString();

				this->chart1->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
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
System::Void BEBS::SalesControl::weeklyClick(System::Object^ sender, System::EventArgs^ e) {
		MySqlConnection^ conData = gcnew MySqlConnection(con);
		//select count(bl.book_id), bl.book_id, b.title, order_date from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-11-01' and order_date <= '2020-11-20') group by b.book_id;
		MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(bl.book_id), bl.book_id, b.title, order_date from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-11-01' and order_date <= '2020-11-20') group by b.book_id;", conData);
		MySqlDataReader^ myRender;

		this->chart1->Series["Books"]->Points->Clear();
		this->chart2->Series["Books"]->Points->Clear();
		this->chart3->Series["Books"]->Points->Clear();

		try {
			conData->Open();
			myRender = cmdDB->ExecuteReader();
			while (myRender->Read()) {
				String^ vtitle = myRender->GetString("title");
				String^ vprice = myRender->GetInt32("count(bl.book_id)").ToString();

				this->chart1->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
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
		MySqlConnection^ conData = gcnew MySqlConnection(con);
		MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(bl.book_id), bl.book_id, b.title, order_date from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-11-01' and order_date <= '2020-11-20') group by b.book_id;", conData);
		MySqlDataReader^ myRender;

		try {
			conData->Open();
			myRender = cmdDB->ExecuteReader();
			while (myRender->Read()) {
				String^ vtitle = myRender->GetString("title");
				String^ vprice = myRender->GetInt32("count(bl.book_id)").ToString();

				this->chart1->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
				this->chart2->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
				this->chart3->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}

System::Void BEBS::SalesControl::quarterlyClick(System::Object^ sender, System::EventArgs^ e) {
		MySqlConnection^ conData = gcnew MySqlConnection(con);

		MySqlCommand^ cmdDB = gcnew MySqlCommand("select count(bl.book_id), bl.book_id, b.title from book_store.book_list bl inner join book_store.shoping_carts s on bl.shoping_cart_id = s.shoping_cart_id inner join book_store.books b on bl.book_id = b.book_id WHERE  done = 'yes' and (order_date >= '2020-06-01' and order_date <= '2021-01-01') group by b.book_id;", conData);
		MySqlDataReader^ myRender;

		this->chart1->Series["Books"]->Points->Clear();
		this->chart2->Series["Books"]->Points->Clear();
		this->chart3->Series["Books"]->Points->Clear();

		try {
			conData->Open();
			myRender = cmdDB->ExecuteReader();
			while (myRender->Read()) {
				String^ vtitle = myRender->GetString("title");
				String^ vprice = myRender->GetInt32("count(bl.book_id)").ToString();

				this->chart1->Series["Books"]->Points->AddXY(vtitle, myRender->GetInt32("count(bl.book_id)"));
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



System::Void BEBS::SalesControl::inventoryClick(System::Object^ sender, System::EventArgs^ e) {
	this->~SalesControl();
	BEBS::AdminMenu admin;
	admin.ShowDialog();
}
System::Void BEBS::SalesControl::discountClick(System::Object^ sender, System::EventArgs^ e) {
	this->~SalesControl();
	BEBS::DiscountControl nextPag;
	nextPag.ShowDialog();
}
System::Void BEBS::SalesControl::usersClick(System::Object^ sender, System::EventArgs^ e) {
	this->~SalesControl();
	BEBS::UsersControl users;
	users.ShowDialog();
}

System::Void BEBS::SalesControl::profitClick(System::Object^ sender, System::EventArgs^ e) {
	this->~SalesControl();
	BEBS::ProfitControl profit;
	profit.ShowDialog();
}
System::Void BEBS::SalesControl::homePageClick(System::Object^ sender, System::EventArgs^ e) {
	this->~SalesControl();
	BEBS::HomePage HomePage;
	HomePage.ShowDialog();
}

System::Void BEBS::SalesControl::ordersClick(System::Object^ sender, System::EventArgs^ e) {
	this->~SalesControl();
	BEBS::OrdersControl order;
	order.ShowDialog();
}