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
		
		System::Windows::Forms::Label^ label5;

		System::Windows::Forms::Button^ block;
		System::ComponentModel::Container^ components;
		int countList2 = 0;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);
		
#pragma endregion
	private: 
		System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
		Void fillCom(void);
		System::Void label5_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) ;
		//System::Void label8_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
		Void fillListBox(void) ;
		System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
		System::Void block_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void edit_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void HomePage_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void UsersControl_Load(System::Object^ sender, System::EventArgs^ e) ;
	};
}