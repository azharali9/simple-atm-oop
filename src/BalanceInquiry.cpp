/*
 * BalanceInquiry.cpp
 *
 *  Created on: Dec 25, 2020
 *      Author: azharali
 */

#include "BalanceInquiry.h"

#include "AccountMainMenu.h"

double BalanceInquiry::getBalance(AccountMainMenu)
{
	AccountMainMenu amm;
	return amm.getBalance();
}
