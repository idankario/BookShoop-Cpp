#pragma once

namespace BEBS {

	public ref class LogInMenu : public System::Windows::Forms::Form
	{
	public:
		LogInMenu(void);
		LogInMenu(Form^ form);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogInMenu();

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
			Form^ lastForm;
			System::Windows::Forms::Button^ LogIn;
			System::Windows::Forms::Label^ labelLogIn;
			System::Windows::Forms::TextBox^ TextUser;
			System::Windows::Forms::Label^ UserLabel;
			System::Windows::Forms::TextBox^ TextPassword;
			System::Windows::Forms::Label^ PasswordLabel;
			System::Windows::Forms::Button^ Register;
			System::Windows::Forms::Button^ Back;
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Label^ ForgotPass;
			System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify
			/// the contents of this method with the code editor.
			/// </summary>
			void InitializeComponent(void);
#pragma endregion
		private: 	
			System::Void LogIn_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void Register_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void Exit_Button_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void TextPassword_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void TextUser_Click(System::Object^ sender, System::EventArgs^ e);
			System::Void LogInMenu_Load(System::Object^ sender, System::EventArgs^ e);
			System::Void TextUser_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
	};
}
