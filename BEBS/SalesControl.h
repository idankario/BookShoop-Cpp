#pragma once

namespace BEBS {


	public ref class SalesControl : public System::Windows::Forms::Form
	{
	public:
		SalesControl(void);
		SalesControl(Form^ lastForm);

	protected:
	
		~SalesControl();
	private: 
		String^ con = L"datasource=localhost; port=3306; username=root; password=bebs";
		System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
		Form^ lastForm;
		System::Windows::Forms::PictureBox^ HomePage;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
		System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
		System::Windows::Forms::Button^ Quarterly;
		System::Windows::Forms::Button^ weekly;
		System::Windows::Forms::Button^ Monthly;
		System::Windows::Forms::Button^ UpdateInventoryButton;
		System::Windows::Forms::Button^ DiscountButton;
		System::Windows::Forms::Button^ OrderButton;
		System::Windows::Forms::Button^ UsersButton;
		System::Windows::Forms::Button^ SalesButton;
		System::Windows::Forms::Button^ ProfitButton;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
	
		void InitializeComponent(void);
#pragma endregion
	private: 

		System::Void monthlyClick(System::Object^ sender, System::EventArgs^ e);
		System::Void weeklyClick(System::Object^ sender, System::EventArgs^ e);
		Void fillAll(void);	
		System::Void quarterlyClick(System::Object^ sender, System::EventArgs^ e);
		System::Void inventoryClick(System::Object^ sender, System::EventArgs^ e);
		System::Void discountClick(System::Object^ sender, System::EventArgs^ e);
		System::Void profitClick(System::Object^ sender, System::EventArgs^ e);
		System::Void ordersClick(System::Object^ sender, System::EventArgs^ e);
		System::Void homePageClick(System::Object^ sender, System::EventArgs^ e);
		System::Void usersClick(System::Object^ sender, System::EventArgs^ e);


	};
}