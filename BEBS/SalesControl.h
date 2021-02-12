#pragma once

namespace BEBS {


	public ref class SalesControl : public System::Windows::Forms::Form
	{
	public:
		SalesControl(void);
		SalesControl(Form^ lastForm);

	protected:
	
		~SalesControl();
	private: 
		System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
		Form^ lastForm;
		System::Windows::Forms::PictureBox^ HomePage;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
		System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Button^ Quarterly;
		System::Windows::Forms::Button^ weekly;
		System::Windows::Forms::Button^ button2;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
	
		void InitializeComponent(void);
#pragma endregion
	private: 
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void label5_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void weekly_Click(System::Object^ sender, System::EventArgs^ e);
		Void fillAll(void);	
		System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Quarterly_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void SalesControl_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void HomePage_Click(System::Object^ sender, System::EventArgs^ e);
	};
}