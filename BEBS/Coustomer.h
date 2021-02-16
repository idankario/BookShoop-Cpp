#pragma once
typedef cliext::map<String^, int> Mymap;
public ref class Coustomer: User
{
public:
    Coustomer(strP userRole, strP userId, strP email, strP name, strP lastActivity);
    
    Coustomer(){}

    void addItemToCart(strP itemId, strP name, strP price, System::Windows::Forms::ListBox^ listBox, System::Windows::Forms::TextBox^ totalPay);

    String^ getValue(String^ s)
    {
        return cartShoping[s].ToString();
    }
    
protected:
    ~Coustomer() {
    
    }
private:
    int totalCart;
    Mymap cartShoping;
    Mymap lineItems;
};

