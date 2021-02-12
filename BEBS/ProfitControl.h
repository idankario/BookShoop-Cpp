#pragma once

namespace BEBS {


	public ref class ProfitControl : public System::Windows::Forms::Form
	{
	public:
		ProfitControl(void);
		ProfitControl(Form^ lastForm);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProfitControl();
	private: 

		Form^ lastForm;
		System::Windows::Forms::Button^ weekly;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Button^ Quarterly;
		System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::PictureBox^ HomePage;

		System::Windows::Forms::DataGridView^ dataGridView1;
		System::Windows::Forms::Button^ UpdateInventoryButton;
		System::Windows::Forms::Button^ DiscountButton;
		System::Windows::Forms::Button^ OrderButton;
		System::Windows::Forms::Button^ UsersButton;
		System::Windows::Forms::Button^ SalesButton;
		System::Windows::Forms::Button^ ProfitButton;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
	


		void InitializeComponent(void);
		Void fillAll(void);
#pragma endregion
	private: 
		String^ con = L"datasource=localhost; port=3306; username=root; password=bebs";
		Void weekly_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Quarterly_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void InventoryClick(System::Object^ sender, System::EventArgs^ e);
		System::Void DiscountClick(System::Object^ sender, System::EventArgs^ e);
		System::Void UsersClick(System::Object^ sender, System::EventArgs^ e);
		System::Void SalesClick(System::Object^ sender, System::EventArgs^ e);
		System::Void OrdersClick(System::Object^ sender, System::EventArgs^ e);
		System::Void HomePageClick(System::Object^ sender, System::EventArgs^ e);

	};
}