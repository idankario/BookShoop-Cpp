#pragma once

namespace BEBS {


	public ref class DiscountControl : public System::Windows::Forms::Form
	{
	public:
		DiscountControl(void);
		DiscountControl(Form^ lastForm);

	protected:
		~DiscountControl();
	
	private:  
		Form^ lastForm;

		System::Windows::Forms::TextBox^ discount;
		System::Windows::Forms::TextBox^ start;
		System::Windows::Forms::TextBox^ end;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Button^ Delete;
		System::Windows::Forms::Button^ edit;
		System::Windows::Forms::Button^ save;
		System::Windows::Forms::PictureBox^ HomePage;
		System::Windows::Forms::TextBox^ id_tet;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::ListBox^ listBox1;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::ListBox^ listBox2;
		System::Windows::Forms::ComboBox^ comboBox1;
		System::ComponentModel::Container^ components;
		System::Windows::Forms::Button^ UpdateInventoryButton;
		System::Windows::Forms::Button^ DiscountButton;
		System::Windows::Forms::Button^ OrderButton;
		System::Windows::Forms::Button^ UsersButton;
		System::Windows::Forms::Button^ ProfitButton;
		String^ con = L"datasource=localhost; port=3306; username=root; password=bebs";
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);
#pragma endregion
	private: 
		System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		Void fillListBox(void);
		Void fillListBox2(void);
		Void fillCurrent(void);
		System::Void SAVE_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void updateClick(System::Object^ sender, System::EventArgs^ e);
		System::Void block_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void InventoryClick(System::Object^ sender, System::EventArgs^ e);
		System::Void OrdersClick(System::Object^ sender, System::EventArgs^ e);
		System::Void UsersClick(System::Object^ sender, System::EventArgs^ e);
		System::Void ProfitClick(System::Object^ sender, System::EventArgs^ e);
		System::Void HomePageClick(System::Object^ sender, System::EventArgs^ e);

	};
}
