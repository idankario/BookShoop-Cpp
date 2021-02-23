#pragma once
public ref class User
{
public:
    User();
   
    User(strP userRole, strP userId, strP email, strP name, strP lastActivity);
   
public:
   
    strP getUserRole();
    strP getName();
protected:
	~User();
protected:
    strP userRole, userId, email, name,  lastActivity;

};

