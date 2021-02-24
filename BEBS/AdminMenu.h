#pragma once

namespace BEBS {
	public ref class AdminMenu : public System::Windows::Forms::Form
	{
	public:
		AdminMenu(void);
	protected:
		~AdminMenu();
	private:
		Inventory store;
		String^ itemPath = ("Image\\books\\");
		System::Windows::Forms::ListBox^ listBox;
		System::Windows::Forms::PictureBox^ img;
		System::Windows::Forms::Label^ title;
		System::Windows::Forms::Label^ Price;
		System::Windows::Forms::Label^ Section;
		System::Windows::Forms::Label^ Amount;
		System::Windows::Forms::Label^ Info;
		System::Windows::Forms::TextBox^ price_txt;
		System::Windows::Forms::TextBox^ sec_txt;
		System::Windows::Forms::TextBox^ amount_txt;
		System::Windows::Forms::TextBox^ info_txt;
		System::Windows::Forms::TextBox^ title_txt;
		System::Windows::Forms::Button^ ProfitButton;
		System::Windows::Forms::Button^ SalesButton;
		System::Windows::Forms::Button^ UsersButton;
		System::Windows::Forms::Button^ OrderButton;
		System::Windows::Forms::Button^ SAVE;
		System::Windows::Forms::Button^ Update;
		System::Windows::Forms::Button^ DiscountButton;
		System::Windows::Forms::TextBox^ pag_txt;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::TextBox^ author_txt;
		System::Windows::Forms::TextBox^ date_txt;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Button^ Delete;
		System::Windows::Forms::PictureBox^ HomePage;
		System::Windows::Forms::Button^ UpdateInventoryButton;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/* Initialize Component */
		void InitializeComponent();
		/* fill List Box in table */
		Void fillListBox(void);
		
#pragma endregion
	private:
		System::Void listBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void saveClick(System::Object^ sender, System::EventArgs^ e);
		System::Void Update_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void DiscountClick(System::Object^ sender, System::EventArgs^ e);
		System::Void OrdersClick(System::Object^ sender, System::EventArgs^ e);
		System::Void UsersClick(System::Object^ sender, System::EventArgs^ e);
		System::Void SalesClick(System::Object^ sender, System::EventArgs^ e);
		System::Void ProfitClick(System::Object^ sender, System::EventArgs^ e);
		System::Void HomePageClick(System::Object^ sender, System::EventArgs^ e);
		System::Void itemImageClick(System::Object^ sender, System::EventArgs^ e);
	};
}
