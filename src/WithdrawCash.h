/*
 * WithdrawCash.h
 *
 *  Created on: Dec 25, 2020
 *      Author: azharali
 */

#ifndef WITHDRAWCASH_H_
#define WITHDRAWCASH_H_
#include "file.h"
#include "AccountMainMenu.h"

class WithdrawCash : public AccountMainMenu
{
private:
	double withdrawAmt;
	AccountMainMenu amm;
public:
	void setwithdrawAmt(double);
	void withdraw(AccountMainMenu, File);
};

#endif /* WITHDRAWCASH_H_ */
