#include "pch.h"

	User::User()
	{}
	User::User(strP userRole, strP userId, strP email, strP name, strP lastActivity)
	
		:userRole(userRole),userId (userId),email(email),name (name),lastActivity (lastActivity)
	{
		
	}

	strP User::getUserRole()
	{
		return this->userRole;
	}
	strP User::getName()
	{
		return this->name;
	}

	User::~User() {

	}
