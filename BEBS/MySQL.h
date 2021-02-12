
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

		void updateBook(strP title, strP page, strP section, strP price, strP amount, strP info,
			strP img, strP author, strP id);
		Boolean  addNewUser(strP email, strP password, strP name);
		BindingSource^ GetBookTable();
		BindingSource^ GetUserTable();
		Book^ getListOfBook();
		Book^ getSearchListBook(strP s);
		//SELECT trackid, name FROM tracks WHERE name LIKE 'Wild%'
	protected:
		~MySQL();



};


