#include "pch.h"
#include "pch.h"

BEBS::OrdersControl::OrdersControl(void)
{
	InitializeComponent();
	fillBooks();
	fillProviders();
	fillBookChart();
}
BEBS::OrdersControl::OrdersControl(Form^ lastForm)
{
	this->lastForm = lastForm;
	InitializeComponent();
	fillBooks();
	fillProviders();
	fillBookChart();

}




BEBS::OrdersControl::~OrdersControl()
{
	if (components)
	{
		delete components;
	}
}



void BEBS::OrdersControl::InitializeComponent(void)
{
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OrdersControl::typeid));
	System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
	System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
	System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
	this->weekly = (gcnew System::Windows::Forms::Button());
	this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
	this->order_id = (gcnew System::Windows::Forms::Label());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->amount_txt = (gcnew System::Windows::Forms::TextBox());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->HomePage = (gcnew System::Windows::Forms::PictureBox());
	this->UpdateInventoryButton = (gcnew System::Windows::Forms::Button());
	this->DiscountButton = (gcnew System::Windows::Forms::Button());
	this->OrderButton = (gcnew System::Windows::Forms::Button());
	this->UsersButton = (gcnew System::Windows::Forms::Button());
	this->ProfitButton = (gcnew System::Windows::Forms::Button());
	this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
	this->OrderList = (gcnew System::Windows::Forms::DataGridView());
	this->OrderListLabel = (gcnew System::Windows::Forms::Label());
	this->labelBookAmount = (gcnew System::Windows::Forms::Label());
	this->chartBookAmount = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OrderList))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartBookAmount))->BeginInit();
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
	this->weekly->Location = System::Drawing::Point(110, 450);
	this->weekly->Name = L"weekly";
	this->weekly->Size = System::Drawing::Size(173, 50);
	this->weekly->TabIndex = 34;
	this->weekly->Text = L"Add new order";
	this->weekly->UseVisualStyleBackColor = false;
	// 
	// comboBox1
	// 
	this->comboBox1->BackColor = System::Drawing::Color::Black;
	this->comboBox1->ForeColor = System::Drawing::Color::White;
	this->comboBox1->FormattingEnabled = true;
	this->comboBox1->Location = System::Drawing::Point(104, 232);
	this->comboBox1->Name = L"comboBox1";
	this->comboBox1->Size = System::Drawing::Size(280, 24);
	this->comboBox1->TabIndex = 36;
	// 
	// order_id
	// 
	this->order_id->AutoSize = true;
	this->order_id->BackColor = System::Drawing::Color::Transparent;
	this->order_id->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->order_id->ForeColor = System::Drawing::Color::White;
	this->order_id->Location = System::Drawing::Point(101, 200);
	this->order_id->Name = L"order_id";
	this->order_id->Size = System::Drawing::Size(80, 22);
	this->order_id->TabIndex = 37;
	this->order_id->Text = L"Book Title";
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->BackColor = System::Drawing::Color::Transparent;
	this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label1->ForeColor = System::Drawing::Color::White;
	this->label1->Location = System::Drawing::Point(101, 111);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(69, 22);
	this->label1->TabIndex = 41;
	this->label1->Text = L"Provider";
	// 
	// amount_txt
	// 
	this->amount_txt->BackColor = System::Drawing::Color::Black;
	this->amount_txt->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->amount_txt->ForeColor = System::Drawing::Color::White;
	this->amount_txt->Location = System::Drawing::Point(110, 325);
	this->amount_txt->Name = L"amount_txt";
	this->amount_txt->Size = System::Drawing::Size(280, 34);
	this->amount_txt->TabIndex = 45;
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->BackColor = System::Drawing::Color::Transparent;
	this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label6->ForeColor = System::Drawing::Color::White;
	this->label6->Location = System::Drawing::Point(106, 284);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(64, 22);
	this->label6->TabIndex = 49;
	this->label6->Text = L"Amount";
	// 
	// HomePage
	// 
	this->HomePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomePage.BackgroundImage")));
	this->HomePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->HomePage->Cursor = System::Windows::Forms::Cursors::Hand;
	this->HomePage->Location = System::Drawing::Point(1005, 23);
	this->HomePage->Name = L"HomePage";
	this->HomePage->Size = System::Drawing::Size(40, 40);
	this->HomePage->TabIndex = 51;
	this->HomePage->TabStop = false;
	this->HomePage->Click += gcnew System::EventHandler(this, &OrdersControl::HomePageClick);
	// 
	// UpdateInventoryButton
	// 
	this->UpdateInventoryButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
	this->UpdateInventoryButton->Cursor = System::Windows::Forms::Cursors::Hand;
	this->UpdateInventoryButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->UpdateInventoryButton->ForeColor = System::Drawing::SystemColors::HighlightText;
	this->UpdateInventoryButton->Location = System::Drawing::Point(705, 12);
	this->UpdateInventoryButton->Name = L"UpdateInventoryButton";
	this->UpdateInventoryButton->Size = System::Drawing::Size(104, 50);
	this->UpdateInventoryButton->TabIndex = 58;
	this->UpdateInventoryButton->Text = L"Update Inventory";
	this->UpdateInventoryButton->UseVisualStyleBackColor = false;
	this->UpdateInventoryButton->Click += gcnew System::EventHandler(this, &OrdersControl::InventoryClick);
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
	this->DiscountButton->TabIndex = 57;
	this->DiscountButton->Text = L"Discount";
	this->DiscountButton->UseVisualStyleBackColor = false;
	this->DiscountButton->Click += gcnew System::EventHandler(this, &OrdersControl::DiscountClick);
	// 
	// OrderButton
	// 
	this->OrderButton->BackColor = System::Drawing::Color::Gray;
	this->OrderButton->Cursor = System::Windows::Forms::Cursors::Default;
	this->OrderButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->OrderButton->ForeColor = System::Drawing::SystemColors::HighlightText;
	this->OrderButton->Location = System::Drawing::Point(381, 12);
	this->OrderButton->Name = L"OrderButton";
	this->OrderButton->Size = System::Drawing::Size(109, 50);
	this->OrderButton->TabIndex = 56;
	this->OrderButton->Text = L"Orders";
	this->OrderButton->UseVisualStyleBackColor = false;
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
	this->UsersButton->TabIndex = 55;
	this->UsersButton->Text = L"Users";
	this->UsersButton->UseVisualStyleBackColor = false;
	this->UsersButton->Click += gcnew System::EventHandler(this, &OrdersControl::UsersClick);
	// 
	// ProfitButton
	// 
	this->ProfitButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
	this->ProfitButton->Cursor = System::Windows::Forms::Cursors::Hand;
	this->ProfitButton->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->ProfitButton->ForeColor = System::Drawing::SystemColors::HighlightText;
	this->ProfitButton->Location = System::Drawing::Point(595, 12);
	this->ProfitButton->Name = L"ProfitButton";
	this->ProfitButton->Size = System::Drawing::Size(104, 50);
	this->ProfitButton->TabIndex = 53;
	this->ProfitButton->Text = L"Profit";
	this->ProfitButton->UseVisualStyleBackColor = false;
	this->ProfitButton->Click += gcnew System::EventHandler(this, &OrdersControl::ProfitClick);
	// 
	// comboBox2
	// 
	this->comboBox2->BackColor = System::Drawing::Color::Black;
	this->comboBox2->ForeColor = System::Drawing::Color::White;
	this->comboBox2->FormattingEnabled = true;
	this->comboBox2->Location = System::Drawing::Point(104, 147);
	this->comboBox2->Name = L"comboBox2";
	this->comboBox2->Size = System::Drawing::Size(280, 24);
	this->comboBox2->TabIndex = 59;
	// 
	// OrderList
	// 
	this->OrderList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
		| System::Windows::Forms::AnchorStyles::Left)
		| System::Windows::Forms::AnchorStyles::Right));
	this->OrderList->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
	this->OrderList->BackgroundColor = System::Drawing::Color::White;
	this->OrderList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->OrderList->Location = System::Drawing::Point(462, 120);
	this->OrderList->Name = L"OrderList";
	this->OrderList->ReadOnly = true;
	this->OrderList->RowHeadersWidth = 100;
	this->OrderList->RowTemplate->Height = 24;
	this->OrderList->Size = System::Drawing::Size(502, 161);
	this->OrderList->TabIndex = 67;
	// 
	// OrderListLabel
	// 
	this->OrderListLabel->AutoSize = true;
	this->OrderListLabel->BackColor = System::Drawing::Color::Transparent;
	this->OrderListLabel->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->OrderListLabel->ForeColor = System::Drawing::Color::White;
	this->OrderListLabel->Location = System::Drawing::Point(458, 95);
	this->OrderListLabel->Name = L"OrderListLabel";
	this->OrderListLabel->Size = System::Drawing::Size(80, 22);
	this->OrderListLabel->TabIndex = 68;
	this->OrderListLabel->Text = L"Order List";
	// 
	// labelBookAmount
	// 
	this->labelBookAmount->AutoSize = true;
	this->labelBookAmount->BackColor = System::Drawing::Color::Transparent;
	this->labelBookAmount->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->labelBookAmount->ForeColor = System::Drawing::Color::White;
	this->labelBookAmount->Location = System::Drawing::Point(458, 284);
	this->labelBookAmount->Name = L"labelBookAmount";
	this->labelBookAmount->Size = System::Drawing::Size(190, 22);
	this->labelBookAmount->TabIndex = 69;
	this->labelBookAmount->Text = L"Current Book In The Shop";
	// 
	// chartBookAmount
	// 
	chartArea1->AxisX->Interval = 1;
	chartArea1->AxisX->IsLabelAutoFit = false;
	chartArea1->AxisX->LabelStyle->Angle = -90;
	chartArea1->Name = L"ChartArea1";
	this->chartBookAmount->ChartAreas->Add(chartArea1);
	legend1->Name = L"Legend1";
	this->chartBookAmount->Legends->Add(legend1);
	this->chartBookAmount->Location = System::Drawing::Point(462, 309);
	this->chartBookAmount->Name = L"chartBookAmount";
	series1->ChartArea = L"ChartArea1";
	series1->Color = System::Drawing::Color::MidnightBlue;
	series1->Legend = L"Legend1";
	series1->Name = L"B";
	series1->YValuesPerPoint = 2;
	this->chartBookAmount->Series->Add(series1);
	this->chartBookAmount->Size = System::Drawing::Size(502, 236);
	this->chartBookAmount->TabIndex = 70;
	this->chartBookAmount->Text = L"chart2";
	// 
	// OrdersControl
	// 
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
	this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
	this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->ClientSize = System::Drawing::Size(1115, 582);
	this->Controls->Add(this->chartBookAmount);
	this->Controls->Add(this->labelBookAmount);
	this->Controls->Add(this->OrderListLabel);
	this->Controls->Add(this->OrderList);
	this->Controls->Add(this->comboBox2);
	this->Controls->Add(this->UpdateInventoryButton);
	this->Controls->Add(this->DiscountButton);
	this->Controls->Add(this->OrderButton);
	this->Controls->Add(this->UsersButton);
	this->Controls->Add(this->ProfitButton);
	this->Controls->Add(this->HomePage);
	this->Controls->Add(this->label6);
	this->Controls->Add(this->amount_txt);
	this->Controls->Add(this->label1);
	this->Controls->Add(this->order_id);
	this->Controls->Add(this->comboBox1);
	this->Controls->Add(this->weekly);
	this->Name = L"OrdersControl";
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
	this->Text = L"OrdersControl";
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePage))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OrderList))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartBookAmount))->EndInit();
	this->ResumeLayout(false);
	this->PerformLayout();

}

System::Void BEBS::OrdersControl::InventoryClick(System::Object^ sender, System::EventArgs^ e) {
	this->~OrdersControl();
	BEBS::AdminMenu admin;
	admin.ShowDialog();
}
System::Void BEBS::OrdersControl::DiscountClick(System::Object^ sender, System::EventArgs^ e) {
	this->~OrdersControl();
	BEBS::DiscountControl nextPag;
	nextPag.ShowDialog();
}
System::Void BEBS::OrdersControl::UsersClick(System::Object^ sender, System::EventArgs^ e) {
	this->~OrdersControl();
	BEBS::UsersControl users;
	users.ShowDialog();
}

System::Void BEBS::OrdersControl::ProfitClick(System::Object^ sender, System::EventArgs^ e) {
	this->~OrdersControl();
	BEBS::ProfitControl profit;
	profit.ShowDialog();
}
System::Void BEBS::OrdersControl::HomePageClick(System::Object^ sender, System::EventArgs^ e) {
	this->~OrdersControl();
	BEBS::HomePage HomePage;
	HomePage.ShowDialog();
}
void BEBS::OrdersControl::fillBooks(void) {
	MySQL db;
	db.booksCom(this->comboBox1);
	db.providerData(OrderList); 
}

void BEBS::OrdersControl::fillProviders(void) {
	MySQL db;
	db.providerCom(this->comboBox2);
}
Void BEBS::OrdersControl::fillBookChart(void) {
	MySQL db;
	db.booksByAmount(this->chartBookAmount);
}

