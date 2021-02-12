#pragma once

namespace BEBS {


	public ref class AdminMenu : public System::Windows::Forms::Form
	{
	public:
		AdminMenu(void);

	protected:
		~AdminMenu();

	private:

		Form^ lastForm;
		System::Windows::Forms::ListBox^ listBox;
		System::Windows::Forms::PictureBox^ img;
		System::Windows::Forms::Label^ book_id;
		System::Windows::Forms::Label^ title;
		System::Windows::Forms::Label^ Price;
		System::Windows::Forms::Label^ Section;
		System::Windows::Forms::Label^ Amount;
		System::Windows::Forms::Label^ Info;
		System::Windows::Forms::TextBox^ id_txt;
		System::Windows::Forms::TextBox^ price_txt;
		System::Windows::Forms::TextBox^ sec_txt;
		System::Windows::Forms::TextBox^ amount_txt;
		System::Windows::Forms::TextBox^ info_txt;
		System::Windows::Forms::TextBox^ title_txt;
		System::Windows::Forms::Button^ Profit;
		System::Windows::Forms::Button^ Sales;
		System::Windows::Forms::Button^ Users;
		System::Windows::Forms::Button^ Orders;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Button^ SAVE;
		System::Windows::Forms::Button^ Update;
		System::Windows::Forms::Button^ Discount;
		System::Windows::Forms::ComboBox^ comboBox1;
		System::Windows::Forms::TextBox^ pag_txt;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::TextBox^ author_txt;
		System::Windows::Forms::TextBox^ img_txt;
		System::Windows::Forms::TextBox^ date_txt;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Button^ Delete;
		System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ HomePage;


		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent();
		Void fillListBox(void);
		Void fillCom(void);


#pragma endregion
	private:
		System::Void label1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e);
		System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		//image text -> add / / image//books//
		System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e);
		System::Void listBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void label2_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void label4_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void author_txt_TextChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void Update_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Sales_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Profit_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Orders_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Discount_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void AdminMenu_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void HomePage_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
