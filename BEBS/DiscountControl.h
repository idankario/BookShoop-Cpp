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
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Button^ Delete;
		System::Windows::Forms::Button^ edit;
		System::Windows::Forms::Button^ save;
		System::Windows::Forms::PictureBox^ HomePage;
		System::Windows::Forms::ListBox^ listBox1;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::ListBox^ listBox2;
		System::ComponentModel::Container^ components;
		System::Windows::Forms::Button^ UpdateInventoryButton;
		System::Windows::Forms::Button^ DiscountButton;
		System::Windows::Forms::Button^ OrderButton;
		System::Windows::Forms::Button^ UsersButton;
		System::Windows::Forms::DateTimePicker^ dateTimeStart;
		System::Windows::Forms::DateTimePicker^ dateTimeEnd;
		System::Windows::Forms::Button^ ProfitButton;
		mapSI^ line = gcnew mapSI;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);
#pragma endregion
	private: 
		Void fillListBox(void);
		Void fillListBox2(void);
		System::Void SAVE_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void updateClick(System::Object^ sender, System::EventArgs^ e);
		System::Void deleteClick(System::Object^ sender, System::EventArgs^ e);
		System::Void InventoryClick(System::Object^ sender, System::EventArgs^ e);
		System::Void OrdersClick(System::Object^ sender, System::EventArgs^ e);
		System::Void UsersClick(System::Object^ sender, System::EventArgs^ e);
		System::Void ProfitClick(System::Object^ sender, System::EventArgs^ e);
		System::Void HomePageClick(System::Object^ sender, System::EventArgs^ e);
	};
}
