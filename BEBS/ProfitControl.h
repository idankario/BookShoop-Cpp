#pragma once

namespace BEBS {


	public ref class ProfitControl : public System::Windows::Forms::Form
	{
	public:
		ProfitControl(void);
		ProfitControl(Form^ lastForm);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProfitControl();
	private: 
		System::Windows::Forms::Label^ label5;
		Form^ lastForm;
		System::Windows::Forms::Button^ weekly;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Button^ Quarterly;
		System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
		System::Windows::Forms::PictureBox^ BackLastPage;
		System::Windows::Forms::DataGridView^ dataGridView1;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
	


		void InitializeComponent(void);
		Void fillAll(void);
#pragma endregion
	private: 
		Void weekly_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Quarterly_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void ProfitControl_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void BackLastPage_Click(System::Object^ sender, System::EventArgs^ e);
	};
}