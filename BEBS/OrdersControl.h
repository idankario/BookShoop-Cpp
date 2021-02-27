#pragma once

namespace BEBS {

	public ref class OrdersControl : public System::Windows::Forms::Form
	{
	public:
		OrdersControl(void);
		OrdersControl(Form^ lastForm);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OrdersControl();
	private:  
		Form^ lastForm;
		System::Windows::Forms::Button^ weekly;
		System::Windows::Forms::ComboBox^ comboBox1;
		System::Windows::Forms::Label^ order_id;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::TextBox^ amount_txt;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::PictureBox^ HomePage;
		System::Windows::Forms::Button^ UpdateInventoryButton;
		System::Windows::Forms::Button^ DiscountButton;
		System::Windows::Forms::Button^ OrderButton;
		System::Windows::Forms::Button^ UsersButton;
		System::Windows::Forms::Button^ ProfitButton;
		System::ComponentModel::Container^ components;
		System::Windows::Forms::DataVisualization::Charting::Chart^ chartBookAmount;
	private: System::Windows::Forms::DataGridView^ OrderList;

		System::Windows::Forms::Label^ OrderListLabel;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::ComboBox^ comboBox2;
		
#pragma region Windows Form Designer generated code
	
		void InitializeComponent(void);
#pragma endregion
	private: 
		System::Void InventoryClick(System::Object^ sender, System::EventArgs^ e);
		System::Void DiscountClick(System::Object^ sender, System::EventArgs^ e);
		System::Void UsersClick(System::Object^ sender, System::EventArgs^ e);
		System::Void ProfitClick(System::Object^ sender, System::EventArgs^ e);
		System::Void HomePageClick(System::Object^ sender, System::EventArgs^ e);
		void fillBooks(void);
		void fillProviders(void);
		void fillBookChart(void);
	};
}


