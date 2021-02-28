#pragma once

namespace BEBS {

	/// <summary>
	/// Summary for UsersControl
	/// </summary>
	public ref class UsersControl : public System::Windows::Forms::Form
	{
	public:
		UsersControl(void);
		UsersControl(Form^ lastForm);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UsersControl();

	private:  
		Form^ lastForm;
		mapSI^ line =gcnew mapSI;;
		System::Windows::Forms::ListBox^ listBoxTable;
		System::Windows::Forms::PictureBox^ HomePage;
		System::Windows::Forms::Button^ edit;
		System::Windows::Forms::Label^ cartLabl;
		System::Windows::Forms::TextBox^ textBoxlName;
		System::Windows::Forms::TextBox^ textBoxEmail;
		System::Windows::Forms::TextBox^ textBoxDate;
		System::Windows::Forms::Label^ textName;
		System::Windows::Forms::Label^ textEmail;
		System::Windows::Forms::Label^ textJoinDate;
		System::Windows::Forms::Label^ textStatus;
		System::Windows::Forms::Label^ textPurchases;
		System::Windows::Forms::DataGridView^ userPurchesTable;
		System::Windows::Forms::Button^ block;
		System::ComponentModel::Container^ components;
		System::Windows::Forms::Button^ UpdateInventoryButton;
		System::Windows::Forms::Button^ DiscountButton;
		System::Windows::Forms::Button^ OrderButton;
		System::Windows::Forms::Button^ UsersButton;
		System::Windows::Forms::Button^ ProfitButton;
		System::Windows::Forms::TextBox^ textBoxStatus;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);
		
#pragma endregion
	private: 
		System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		Void fillListBox(void) ;
		System::Void block_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void editClick(System::Object^ sender, System::EventArgs^ e);
		System::Void InventoryClick(System::Object^ sender, System::EventArgs^ e);
		System::Void DiscountClick(System::Object^ sender, System::EventArgs^ e);
		System::Void ProfitClick(System::Object^ sender, System::EventArgs^ e);
		System::Void OrdersClick(System::Object^ sender, System::EventArgs^ e);
		System::Void HomePageClick(System::Object^ sender, System::EventArgs^ e);
	};
}