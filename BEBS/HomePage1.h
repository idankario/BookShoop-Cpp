#pragma once

namespace BEBS {

	public ref class HomePage : public System::Windows::Forms::Form
	{
	public:
		HomePage(void);
	protected:

		~HomePage();
	private: 
		System::Windows::Forms::Label^ labelSign;
		System::Windows::Forms::Button^ Register;
		System::Windows::Forms::Button^ LogIn;
		System::Windows::Forms::Button^ buttonShopping;
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
		System::Void HomePage_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void labelSign_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void buttonShopping_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Register_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
