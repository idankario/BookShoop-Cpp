
#pragma once

	public ref class MySQL
	{
		/**
		 *--------------------------------------------------------------------
		 *       Class:  MySQL
		 *      Method:  MySQL :: MySQL()
		 * Description:  Constructor to conect database conectivity
		 *--------------------------------------------------------------------
		 */
	public:
		String^ constr;
		MySqlConnection^ conData;

		MySQL();
		
		User^ getInstaseUser(strP user, strP password);
		void deleteBook(strP s);
		void updateBook(strP title, strP page, strP section, strP price, strP amount, strP info,strP img, strP author, strP id);
		void createNewBook(strP title, strP page, strP section, strP price, strP amount, strP info,strP img, strP author);
		Boolean  addNewUser(strP email, strP password, strP name);
		BindingSource^ GetBookTable();
		BindingSource^ GetUserTable();
		Book^ getListOfBook();
		Book^ searchBooks(strP s);
		void setValueChart(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1, MySqlCommand^ cmdDB);
		void quarterlyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1);
		void monthlyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1);
		void weeklyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1);
		strP getPassqord(strP user);
		int insertPurchase(strP cartId,strP userId, strP pamentM, strP totalBill);
		int getDiscount(strP id);
		void insertBookList(int idP,int itemId,int amount, strP price);
		void disactiveDiscount(strP id);
		Boolean executeCmd(MySqlCommand^ cmdDB);
		void updateDiscount(strP id,strP percent,strP dateStart,strP dateEnd);
		
		//SELECT trackid, name FROM tracks WHERE name LIKE 'Wild%'
	protected:
		~MySQL();



};


