/*
 * BalanceInquiry.h
 *
 *  Created on: Dec 25, 2020
 *      Author: azharali
 */

#ifndef BALANCEINQUIRY_H_
#define BALANCEINQUIRY_H_
#include "AccountMainMenu.h"

class BalanceInquiry
{
private:
	AccountMainMenu amm;
public:
	double getBalance(AccountMainMenu);
};

#endif /* BALANCEINQUIRY_H_ */
