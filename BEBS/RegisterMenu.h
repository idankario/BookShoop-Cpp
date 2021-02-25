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
		
		System::Windows::Forms::CheckBox^ checkConditation;
		System::Windows::Forms::Button^ CreateAcount;
	
		System::Windows::Forms::Label^ ConditionText;
		System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel;
	private: System::Windows::Forms::TextBox^ textCondition;




	private: System::Windows::Forms::Label^ labelTerm;
	private: System::Windows::Forms::Button^ closeCondition;




		System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code
		void InitializeComponent(void);
#pragma endregion
	private: 
		System::Void ConditionText_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void BackLastGui_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Next_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void closeConditionClick(System::Object^ sender, System::EventArgs^ e);

	};
}
