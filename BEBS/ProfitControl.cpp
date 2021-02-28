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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->weekly = (gcnew System::Windows::Forms::Button());
			this->Monthly = (gcnew System::Windows::Forms::Button());
			this->Quarterly = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->HomePage = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->UpdateInventoryButton = (gcnew System::Windows::Forms::Button());
			this->DiscountButton = (gcnew System::Windows::Forms::Button());
			this->OrderButton = (gcnew System::Windows::Forms::Button());
			this->UsersButton = (gcnew System::Windows::Forms::Button());
			this->ProfitButton = (gcnew System::Windows::Forms::Button());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->profitTable = (gcnew System::Windows::Forms::Label());
			this->ProfitSlice = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
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
			this->weekly->Location = System::Drawing::Point(69, 135);
			this->weekly->Name = L"weekly";
			this->weekly->Size = System::Drawing::Size(141, 50);
			this->weekly->TabIndex = 33;
			this->weekly->Text = L"Weekly";
			this->weekly->UseVisualStyleBackColor = false;
			this->weekly->Click += gcnew System::EventHandler(this, &ProfitControl::weeklyClick);
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
			this->Monthly->Location = System::Drawing::Point(234, 135);
			this->Monthly->Name = L"Monthly";
			this->Monthly->Size = System::Drawing::Size(141, 50);
			this->Monthly->TabIndex = 34;
			this->Monthly->Text = L"Monthly";
			this->Monthly->UseVisualStyleBackColor = false;
			this->Monthly->Click += gcnew System::EventHandler(this, &ProfitControl::monthlyClick);
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
			this->Quarterly->Location = System::Drawing::Point(393, 135);
			this->Quarterly->Name = L"Quarterly";
			this->Quarterly->Size = System::Drawing::Size(141, 50);
			this->Quarterly->TabIndex = 35;
			this->Quarterly->Text = L"Quarterly";
			this->Quarterly->UseVisualStyleBackColor = false;
			this->Quarterly->Click += gcnew System::EventHandler(this, &ProfitControl::quarterlyClick);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(438, 222);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Color = System::Drawing::Color::Blue;
			series1->Legend = L"Legend1";
			series1->Name = L"Books";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(317, 313);
			this->chart1->TabIndex = 36;
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
			this->HomePage->TabIndex = 37;
			this->HomePage->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(67, 222);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 72;
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->ShowCellErrors = false;
			this->dataGridView1->ShowCellToolTips = false;
			this->dataGridView1->ShowEditingIcon = false;
			this->dataGridView1->ShowRowErrors = false;
			this->dataGridView1->Size = System::Drawing::Size(356, 313);
			this->dataGridView1->TabIndex = 38;
			// 
			// UpdateInventoryButton
			// 
			this->UpdateInventoryButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->UpdateInventoryButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->UpdateInventoryButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdateInventoryButton->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->UpdateInventoryButton->Location = System::Drawing::Point(707, 12);
			this->UpdateInventoryButton->Name = L"UpdateInventoryButton";
			this->UpdateInventoryButton->Size = System::Drawing::Size(104, 50);
			this->UpdateInventoryButton->TabIndex = 64;
			this->UpdateInventoryButton->Text = L"Update Inventory";
			this->UpdateInventoryButton->UseVisualStyleBackColor = false;
			this->UpdateInventoryButton->Click += gcnew System::EventHandler(this, &ProfitControl::InventoryClick);
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
			this->DiscountButton->TabIndex = 63;
			this->DiscountButton->Text = L"Discount";
			this->DiscountButton->UseVisualStyleBackColor = false;
			this->DiscountButton->Click += gcnew System::EventHandler(this, &ProfitControl::DiscountClick);
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
			this->OrderButton->TabIndex = 62;
			this->OrderButton->Text = L"Orders";
			this->OrderButton->UseVisualStyleBackColor = false;
			this->OrderButton->Click += gcnew System::EventHandler(this, &ProfitControl::OrdersClick);
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
			this->UsersButton->TabIndex = 61;
			this->UsersButton->Text = L"Users";
			this->UsersButton->UseVisualStyleBackColor = false;
			this->UsersButton->Click += gcnew System::EventHandler(this, &ProfitControl::UsersClick);
			// 
			// ProfitButton
			// 
			this->ProfitButton->BackColor = System::Drawing::Color::Gray;
			this->ProfitButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->ProfitButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProfitButton->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->ProfitButton->Location = System::Drawing::Point(597, 12);
			this->ProfitButton->Name = L"ProfitButton";
			this->ProfitButton->Size = System::Drawing::Size(104, 50);
			this->ProfitButton->TabIndex = 59;
			this->ProfitButton->Text = L"Profit";
			this->ProfitButton->UseVisualStyleBackColor = false;
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(774, 222);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->Color = System::Drawing::Color::MidnightBlue;
			series2->Legend = L"Legend1";
			series2->Name = L"Books";
			series2->YValuesPerPoint = 2;
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(329, 313);
			this->chart2->TabIndex = 65;
			this->chart2->Text = L"chart2";
			// 
			// profitTable
			// 
			this->profitTable->AutoSize = true;
			this->profitTable->BackColor = System::Drawing::Color::Transparent;
			this->profitTable->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profitTable->ForeColor = System::Drawing::Color::White;
			this->profitTable->Location = System::Drawing::Point(65, 197);
			this->profitTable->Name = L"profitTable";
			this->profitTable->Size = System::Drawing::Size(152, 22);
			this->profitTable->TabIndex = 69;
			this->profitTable->Text = L"Profit By Book Table";
			// 
			// ProfitSlice
			// 
			this->ProfitSlice->AutoSize = true;
			this->ProfitSlice->BackColor = System::Drawing::Color::Transparent;
			this->ProfitSlice->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProfitSlice->ForeColor = System::Drawing::Color::White;
			this->ProfitSlice->Location = System::Drawing::Point(437, 197);
			this->ProfitSlice->Name = L"ProfitSlice";
			this->ProfitSlice->Size = System::Drawing::Size(147, 22);
			this->ProfitSlice->TabIndex = 70;
			this->ProfitSlice->Text = L"Profit By Book Slice";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(770, 197);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 22);
			this->label1->TabIndex = 71;
			this->label1->Text = L"Amount Of Book Sell In Shop";
			// 
			// ProfitControl
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1115, 582);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ProfitSlice);
			this->Controls->Add(this->profitTable);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->UpdateInventoryButton);
			this->Controls->Add(this->DiscountButton);
			this->Controls->Add(this->OrderButton);
			this->Controls->Add(this->UsersButton);
			this->Controls->Add(this->ProfitButton);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->HomePage);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->Quarterly);
			this->Controls->Add(this->Monthly);
			this->Controls->Add(this->weekly);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"ProfitControl";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ProfitControl";
			this->Load += gcnew System::EventHandler(this, &ProfitControl::ProfitControl_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	System::Void BEBS::ProfitControl::weeklyClick(System::Object^ sender, System::EventArgs^ e) {
		MySQL db;
		db.weeklyProfit(this->chart1, this->dataGridView1);
		db.weeklySales(this->chart2);
	
	}
	Void BEBS::ProfitControl::fillAll(void) {
		MySQL db;
		db.quarterlyProfit(this->chart1, this->dataGridView1);
		db.quarterlySales(this->chart2);
	}

	System::Void BEBS::ProfitControl::monthlyClick(System::Object^ sender, System::EventArgs^ e) {
		MySQL db;
		db.monthlyProfit(this->chart1, this->dataGridView1);
		db.monthlySales(this->chart2);
	}
	System::Void BEBS::ProfitControl::quarterlyClick(System::Object^ sender, System::EventArgs^ e) {
		MySQL db;
		db.quarterlyProfit(this->chart1, this->dataGridView1);
		db.quarterlySales(this->chart2);
	}


	System::Void BEBS::ProfitControl::InventoryClick(System::Object^ sender, System::EventArgs^ e) {
		this->~ProfitControl();
		BEBS::AdminMenu admin;
		admin.ShowDialog();
	}
	System::Void BEBS::ProfitControl::DiscountClick(System::Object^ sender, System::EventArgs^ e) {
		this->~ProfitControl();
		BEBS::DiscountControl nextPag;
		nextPag.ShowDialog();
	}
	System::Void BEBS::ProfitControl::UsersClick(System::Object^ sender, System::EventArgs^ e) {
		this->~ProfitControl();
		BEBS::UsersControl users;
		users.ShowDialog();
	}
	System::Void BEBS::ProfitControl::OrdersClick(System::Object^ sender, System::EventArgs^ e) {
		this->~ProfitControl();
		BEBS::OrdersControl order;
		order.ShowDialog();
	}
	System::Void BEBS::ProfitControl::HomePageClick(System::Object^ sender, System::EventArgs^ e) {
		this->~ProfitControl();
		BEBS::HomePage HomePage;
		HomePage.ShowDialog();
	}
