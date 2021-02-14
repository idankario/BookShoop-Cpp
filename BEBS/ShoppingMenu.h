#pragma once

namespace BEBS {
	/// <summary>
	/// Summary for MyForm
	/// </summary>

	public ref class ShoppingMenu : public System::Windows::Forms::Form
	{

	public:
		ShoppingMenu(void);
		ShoppingMenu(Coustomer^ user);
	protected:
		~ShoppingMenu();

	private: 
		Inventory store;
		System::Windows::Forms::TextBox^ TextSearch;
		System::Windows::Forms::PictureBox^ CartIcon;
		System::Windows::Forms::PictureBox^ SearchIcon;
		System::Windows::Forms::PictureBox^ profile;
		System::Windows::Forms::Label^ UserName;
		System::Windows::Forms::PictureBox^ HomePage;
		System::Windows::Forms::Label^ labelBackLastPage;
		System::Windows::Forms::PictureBox^ picItems;
		System::Windows::Forms::Label^ titleItem1;
		System::Windows::Forms::Label^ titleItem2;
		System::Windows::Forms::Label^ titleItem3;
		System::Windows::Forms::Label^ titleItem4;
		System::Windows::Forms::PictureBox^ item1;
		System::Windows::Forms::PictureBox^ item2;
		System::Windows::Forms::PictureBox^ item3;
		System::Windows::Forms::PictureBox^ item4;
		System::Windows::Forms::Label^ PriceItem1;
		System::Windows::Forms::Label^ PriceItem2;
		System::Windows::Forms::Label^ PriceItem3;
		System::Windows::Forms::Label^ PriceItem4;
		System::Windows::Forms::PictureBox^ ArrowL;
		System::Windows::Forms::PictureBox^ ArrowR;
		System::ComponentModel::Container^ components;
		System::Windows::Forms::Label^ addItem2;
		System::Windows::Forms::Label^ addItem1;
		System::Windows::Forms::Label^ addItem3;
		System::Windows::Forms::Label^ addItem4;
		Coustomer^ user;
#pragma region Windows Form Designer generated code

		void getItemL(void);
		void getItemR(void);
		void InitializeComponent(void);
		
#pragma endregion
	private: 
		System::Void ShoppingMenu_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void HomePage_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void profile_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void TextSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {	
		}
		
		System::Void ArrowL_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void ArrowR_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void addItem_Click1(System::Object^ sender, System::EventArgs^ e) {
			user->addItemToCart(this->item1->Name);

		}
		System::Void addItem_Click2(System::Object^ sender, System::EventArgs^ e) {
			user->addItemToCart(this->item2->Name);

		}

		System::Void addItem_Click3(System::Object^ sender, System::EventArgs^ e) {
			user->addItemToCart(this->item3->Name);
		}
		System::Void addItem_Click4(System::Object^ sender, System::EventArgs^ e) {
			user->addItemToCart(this->item4->Name);
		}

		System::Void SearchIcon_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
