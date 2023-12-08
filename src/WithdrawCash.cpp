/*
 * WithdrawCash.cpp
 *
 *  Created on: Dec 25, 2020
 *      Author: azharali
 */

#include "WithdrawCash.h"
#include <iostream>
#include "file.h"
#include "AccountMainMenu.h"
using namespace std;


	void WithdrawCash::setwithdrawAmt(double wa)
	{

		withdrawAmt=wa;

	}

	void WithdrawCash::withdraw(AccountMainMenu amm, File database)
	{
    	amm.withdrawbalance(withdrawAmt);
    	database.storeData(amm);// store the database new creation
	}

