#pragma once
namespace BEBS {


	public ref class RegisterMenu : public System::Windows::Forms::Form
	{

	public:
		RegisterMenu(void);
		RegisterMenu(Form^ lastForm);
		

	protected:
		~RegisterMenu();
	private: 
		Form^ lastForm;
		System::Windows::Forms::Label^ labelRegister;
		System::Windows::Forms::TextBox^ textUser;
		System::Windows::Forms::Label^ labelUser;
		System::Windows::Forms::TextBox^ textPass;
		System::Windows::Forms::Label^ labelPass;
		System::Windows::Forms::Label^ labelName;
		System::Windows::Forms::TextBox^ textName;
		System::Windows::Forms::TextBox^ textPhone;
		System::Windows::Forms::Label^ labelPhone;
		System::Windows::Forms::PictureBox^ backButtonImage;
		System::Windows::Forms::Label^ backButton;
		System::Windows::Forms::TextBox^ textCondition;
		System::Windows::Forms::CheckBox^ checkConditation;
		System::Windows::Forms::Button^ CreateAcount;
		System::Windows::Forms::Panel^ panel;
		System::Windows::Forms::Label^ ConditionText;
		System::Windows::Forms::PictureBox^ pictureBox1;
		System::Windows::Forms::Button^ buttonCondition;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void);
#pragma endregion
	private: 
	

		System::Void ConditionText_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void BackLastGui_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Next_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonCondition_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void RegisterMenu_Load(System::Object^ sender, System::EventArgs^ e);
};
}
