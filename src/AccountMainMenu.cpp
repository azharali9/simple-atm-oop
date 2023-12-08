/*
 * AccountMainMenu.cpp
 *
 *  Created on: Dec 25, 2020
 *      Author: azharali
 */

#include "AccountMainMenu.h"

#include <iostream>


using namespace std;

AccountMainMenu::AccountMainMenu()
{
	id = 0;
	password = 0;
	balance=500;
}
void AccountMainMenu::setData(int i, int p)
{
	id = i;
	password = p;
}
void AccountMainMenu::display()
{
	cout << id << "\t" << password << "\t\t" << balance << endl;
}

int AccountMainMenu::getpass()
{
	return password;
}

double AccountMainMenu::getBalance()
{
	return balance;
}

AccountMainMenu AccountMainMenu :: operator =(AccountMainMenu pass)
{
	this->id = pass.id;
	this->password = pass.password;
	this->balance=pass.balance;
	return *this;
}
bool AccountMainMenu :: operator == (AccountMainMenu pass)
{
	if (this->id == pass.id && this->password == pass.password && this->balance == pass.balance)
	{
		return true;
	}
	return false;
}
// Creation of New Account
void AccountMainMenu::inputGet()
{
	cout << "Enter Account No : "; cin >> id;
	cout << "Enter PIN : "; cin >> password;
}

void AccountMainMenu::Depositebalance(double amt)
{
	balance=balance+amt;
}

void AccountMainMenu::withdrawbalance(double amt)
{
	balance=balance-amt;
}

