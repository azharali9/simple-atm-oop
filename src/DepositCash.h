/*
 * DepositCash.h
 *
 *  Created on: Dec 25, 2020
 *      Author: azharali
 */

#ifndef DEPOSITCASH_H_
#define DEPOSITCASH_H_
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include "file.h"
#include "AccountMainMenu.h"
using namespace std;

class DepositCash : public AccountMainMenu
{
private:
	 double depamount;
public:
	 void setdepamount(double);
	 int depositCash(AccountMainMenu, File);

};

#endif /* DEPOSITCASH_H_ */
