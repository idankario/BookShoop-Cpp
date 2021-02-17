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
			this->SalesButton = (gcnew System::Windows::Forms::Button());
			this->ProfitButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->chart1->Location = System::Drawing::Point(557, 135);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Color = System::Drawing::Color::Blue;
			series1->Legend = L"Legend1";
			series1->Name = L"Books";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(435, 400);
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
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(67, 222);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 72;
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(465, 313);
			this->dataGridView1->TabIndex = 38;
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
			this->SalesButton->TabIndex = 60;
			this->SalesButton->Text = L"Sales";
			this->SalesButton->UseVisualStyleBackColor = false;
			this->SalesButton->Click += gcnew System::EventHandler(this, &ProfitControl::SalesClick);
			// 
			// ProfitButton
			// 
			this->ProfitButton->BackColor = System::Drawing::Color::Gray;
			this->ProfitButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->ProfitButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProfitButton->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->ProfitButton->Location = System::Drawing::Point(707, 12);
			this->ProfitButton->Name = L"ProfitButton";
			this->ProfitButton->Size = System::Drawing::Size(104, 50);
			this->ProfitButton->TabIndex = 59;
			this->ProfitButton->Text = L"Profit";
			this->ProfitButton->UseVisualStyleBackColor = false;
			// 
			// ProfitControl
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}

	System::Void BEBS::ProfitControl::weeklyClick(System::Object^ sender, System::EventArgs^ e) {
		MySQL db;
		db.weeklyProfit(this->chart1, this->dataGridView1);
	
	}
	Void BEBS::ProfitControl::fillAll(void) {
		MySQL db;
		db.weeklyProfit(this->chart1, this->dataGridView1);
	}

	System::Void BEBS::ProfitControl::monthlyClick(System::Object^ sender, System::EventArgs^ e) {
		MySQL db;
		db.monthlyProfit(this->chart1, this->dataGridView1);
	}
	System::Void BEBS::ProfitControl::quarterlyClick(System::Object^ sender, System::EventArgs^ e) {
		MySQL db;
		db.quarterlyProfit(this->chart1, this->dataGridView1);
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
	System::Void BEBS::ProfitControl::SalesClick(System::Object^ sender, System::EventArgs^ e) {
		this->~ProfitControl();
		BEBS::SalesControl sales;
		sales.ShowDialog();
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
