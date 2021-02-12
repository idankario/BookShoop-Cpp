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
		System::Windows::Forms::TextBox^ provider_txt;
		System::Windows::Forms::ComboBox^ comboBox1;
		System::Windows::Forms::Label^ order_id;
		System::Windows::Forms::Button^ Update;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::TextBox^ book_txt;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::TextBox^ status_txt;
		System::Windows::Forms::TextBox^ id_txt;
		System::Windows::Forms::TextBox^ date_txt;
		System::Windows::Forms::TextBox^ amount_txt;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::PictureBox^ HomePage;
		System::Windows::Forms::Button^ UpdateInventoryButton;
		System::Windows::Forms::Button^ DiscountButton;
		System::Windows::Forms::Button^ OrderButton;
		System::Windows::Forms::Button^ UsersButton;
		System::Windows::Forms::Button^ SalesButton;
		System::Windows::Forms::Button^ ProfitButton;
		System::ComponentModel::Container^ components;
		String^ con = L"datasource=localhost; port=3306; username=root; password=bebs";
#pragma region Windows Form Designer generated code
	
		void InitializeComponent(void);
#pragma endregion
	private: 
		System::Void label4_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		Void fillCom(void);
		System::Void Update_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void weekly_Click(System::Object^ sender, System::EventArgs^ e);


		System::Void InventoryClick(System::Object^ sender, System::EventArgs^ e);
		System::Void DiscountClick(System::Object^ sender, System::EventArgs^ e);
		System::Void UsersClick(System::Object^ sender, System::EventArgs^ e);
		System::Void SalesClick(System::Object^ sender, System::EventArgs^ e);
		System::Void ProfitClick(System::Object^ sender, System::EventArgs^ e);
		System::Void HomePageClick(System::Object^ sender, System::EventArgs^ e);



	};
}


