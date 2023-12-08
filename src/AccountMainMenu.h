/*
 * AccountMainMenu.h
 *
 *  Created on: Dec 25, 2020
 *      Author: azharali
 */

#ifndef ACCOUNTMAINMENU_H_
#define ACCOUNTMAINMENU_H_


class AccountMainMenu
{
private:
	int id;
	int password;
	double balance;
public:
	AccountMainMenu();
	void setData(int, int);
	double getBalance();
	void Depositebalance(double);
	void withdrawbalance(double);
	int getpass();
	void setBalance(double);
	void display();
	void inputGet();
	int getId() { return id; }
	// Some necessary operators
	AccountMainMenu operator =(AccountMainMenu pass);
	bool operator ==(AccountMainMenu pass);
};

#endif /* ACCOUNTMAINMENU_H_ */
