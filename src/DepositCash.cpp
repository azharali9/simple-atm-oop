/*
 * DepositCash.cpp
 *
 *  Created on: Dec 25, 2020
 *      Author: azharali
 */

#include "DepositCash.h"
#include "file.h"
#include "AccountMainMenu.h"

	 void DepositCash::setdepamount(double amt)
	 {
		 depamount=amt;
	 }
	 int DepositCash::depositCash(AccountMainMenu amm,File database)
	 {
		 int minutes = 0;
		 int seconds = 0;
		 char choice;

		 while(minutes<=1)
		 {
//		    if(seconds == 60)
//		    {
//		    	minutes++;
//		    	seconds = 0;
//		    }
//		    system("clear");
//		    cout<<"Add deposit slip within 2 minutes!"<<endl;
////		    cout << setfill(' ') << setw(2) << "         TIMER         "<<endl;
////		    cout << setfill(' ') << setw(2) << "--------------------------"<<endl;
////		    cout << setfill(' ') << setw(29);
////		    cout << setfill('0') << setw(2) << minutes << " min | ";
////		    cout << setfill('0') << setw(2) << seconds << " sec |" << endl;
////		    cout << setfill(' ') << setw(2) << "--------------------------"<<endl;
//		    // sleep system call to sleep
//		    // for 1 second
//		    sleep(1);
//		    // increment seconds
//		    seconds++;
//		    // if seconds reaches 60

		    cout<<"press y button to add deposit envelop."<<endl;
		    cin>>choice;
		    if(choice=='y' or choice=='Y')
		    {
		    	amm.Depositebalance(depamount);
		    	database.storeData(amm);// store the database new creation
		    	cout<<"Balance deposited successfully!"<<endl;
		    	return 1;
		    }
		  }

		 cout<<"The system has cancelled the transaction!"<<endl;
		return 0;
	 }
