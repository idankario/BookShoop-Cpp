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
		typedef cliext::map<String^, int> mapSI;
		String^ constr;
		MySqlConnection^ conData;
		MySQL();
		//Fill grid table
		void setValueChartAndGrid(strP s, System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1, MySqlCommand^ cmdDB);

		Boolean executeCmd(MySqlCommand^ cmdDB);
		User^ getInstaseUser(strP user, strP password);
		void deleteBook(strP s);
		void updateBook(strP title, strP page, strP section, strP price, strP amount, strP info,strP img, strP author, strP id);
		void createNewBook(strP title, strP page, strP section, strP price, strP amount, strP info,strP img, strP author);
		Boolean  addNewUser(strP email, strP password, strP name, strP phone);
		Book^ getListOfBook();
		Book^ searchBooks(strP s, Book^ headB,int size);
		void fillListDiscount(System::Windows::Forms::ListBox^ listD, mapSI^ line);
		void quarterlyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1);
		void monthlyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1);
		void weeklyProfit(System::Windows::Forms::DataVisualization::Charting::Chart^ chart1, System::Windows::Forms::DataGridView^ dataGridView1);
		strP getPassqord(strP user);
		int insertPurchase(strP cartId,strP userId, strP pamentM, strP totalBill);
		int getDiscount(strP id);
		void insertBookList(int idP,int itemId,int amount, strP price);
		void disactiveDiscount(int id);
		void fillListDiscountExpired(System::Windows::Forms::ListBox^ listD);
		void setUsersTabel(int id, System::Windows::Forms::Label^ name, System::Windows::Forms::Label^ email, System::Windows::Forms::Label^ JoinDate, System::Windows::Forms::Label^ Status, System::Windows::Forms::DataGridView^ userPurchesTable);
		void updateDiscount(strP id,strP percent,strP dateStart,strP dateEnd);

		void saveDiscount(System::Windows::Forms::TextBox^ discount, strP start, strP end);
		void setValueDiscountFiled(int idD, System::Windows::Forms::TextBox^ discount, System::Windows::Forms::DateTimePicker^ start, System::Windows::Forms::DateTimePicker^ end);
		
		void setProviderCom(MySqlCommand^ cmdDB, System::Windows::Forms::ComboBox^ comboBox2);
		void providerCom(System::Windows::Forms::ComboBox^ comboBox2);
		void booksCom(System::Windows::Forms::ComboBox^ comboBox1, mapSI^ line);
		void setBooksCom(MySqlCommand^ cmdDB, System::Windows::Forms::ComboBox^ comboBox1, mapSI^ line);
		void booksByAmount(System::Windows::Forms::DataVisualization::Charting::Chart^ chartBookAmount);
		
	
		Boolean editUser(System::Windows::Forms::TextBox^ textBoxlName, System::Windows::Forms::TextBox^ textBoxEmail, System::Windows::Forms::TextBox^ textBoxSTA);


		void monthlySales(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2);
		void quarterlySales(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2);
		void weeklySales(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2);
		void setValueChart2(System::Windows::Forms::DataVisualization::Charting::Chart^ chart2, MySqlCommand^ cmdDB);
		Boolean^ setBlockUser(MySqlCommand^ cmdDB);
		Boolean^ blockUser(System::Windows::Forms::TextBox^ textBoxEmail);
		void UsersList(System::Windows::Forms::ListBox^ listBoxTable, mapSI^ line);
		void providerData(System::Windows::Forms::DataGridView ^ OrderList);
		void setValueGrid(System::Windows::Forms::DataGridView^ dataGridView1, MySqlCommand^ cmdDB);
		void addNewOrder(int idB, strP nameP, strP amount);
		//SELECT trackid, name FROM tracks WHERE name LIKE 'Wild%'
	protected:
		~MySQL();
};


