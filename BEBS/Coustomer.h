#pragma once
typedef cliext::map<String^, int> Mymap;
public ref class Coustomer: User
{
public:
    Coustomer(strP userRole, strP userId, strP email, strP name, strP lastActivity);
    
    Coustomer(){}

    void addItemToCart(String^ itemId);

    String^ getValue(String^ s)
    {
        return cartShoping[s].ToString();
    }
    
protected:
    ~Coustomer() {
    
    }
private:
    Mymap cartShoping;

};

