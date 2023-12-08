#include<iostream>
using namespace std;
#include "file.h"
#include "AccountMainMenu.h"
#include "BalanceInquiry.h"
#include "DepositCash.h"
#include "WithdrawCash.h"
#include "WelcomeScreen.h"
int main()
{
	//Variable definitions
	BalanceInquiry bi;
	WithdrawCash wc;
	AccountMainMenu  amm;
	AccountMainMenu B;
	DepositCash dc;
	WelcomeScreen ws;
	File database("Store");//Inserting File Name

	int withdrawlOpt;
	int choice;
	int amount;
	int accNumber;
	int PIN;
	int choice2;

	double cash[5];
	double depamount;

	bool flag=true;
	bool flag2=true;
	bool flag3;

	char ch;

do
{

	//Welcome Screen
	cout<<"Welcome!"<<endl;
	cout<<"Enter 1 for account creation."<<endl;
	cout<<"Enter 2 for account verification and further processes!"<<endl;
	cin>>choice2;

	if(choice2==1)
	{

		for (int i = 0; i < 1000; i++)
		{
			amm.inputGet();
			database.storeData(amm);// store the database new creation
			cout << "file out Put" << endl;
			database.displayFile();// showing whole data base
			cout<<"Do you want to create more account? y/n"<<endl;
			cin>>ch;
			if(ch=='n' or ch=='N')
			{
				break;
			}
			else
				continue;
		}
		cout << "File : " << endl;
		database.displayFile();
	}
	else
	{

	do
	{
	//account verification
		cout << "Please enter your account number: ";
		cin>>accNumber;
		cout << "Enter your PIN: ";
		cin >>PIN;
		B=database.getAt(accNumber);
		flag3=ws.verification(B,PIN);

		//if account gets verified then it grants access to accounts databbase info
		if(flag3==true)
		{

			//a menu for the choice of balance, withdrawal, deposit or exit.
			do
			{
				do
				{
					cout<<"Main menu:"<<endl;
					cout<<"		1 - view my balance"<<endl;
					cout<<"		2 - withdraw cash"<<endl;
					cout<<"		3 - Deposit funds"<<endl;
					cout<<"		4 - Exit"<<endl;
					cout<<"Enter a choice:"<<endl;
					cin>>choice;

					if(choice<0 or choice>4)
					{
						cout<<"Invalid choice!"<<endl;
					}

				}while(choice<0 or choice>4);

				//implementation for balance inquiry
				if(choice==1)
				{

					cout<<"Your account balance is: ";
					cout<<bi.getBalance(amm)<<endl;
				}
				//implementation for cash withdrawal
				else if(choice==2)
				{
					//do while loop, if amount is greater than current amount and return to withdrawal options
					do
					{
						//a menu of withdrawal options for the user
						cout<<"Withdrawal options:  "<<endl;
						cout<<"		1 - $20		4 - $100"<<endl;
						cout<<"		2 - $40		5 - $200"<<endl;
						cout<<"		3 - $60		6 - cancel transaction"<<endl;
						cout<<"Choose a withdrawal option (1-6): "<<endl;
						cin>>withdrawlOpt;

						//assigning values to the cash array
						cash[0]=20, cash[1]=40, cash[2]=60, cash[3]=100, cash[4]=200;

						//to verify if the amount is greater than current balance
							if(withdrawlOpt>1 and withdrawlOpt<5)
							{
								if(cash[withdrawlOpt-1]>wc.getBalance())
								{
									cout<<"withdrawal amount chosen is greater than the user’s account balance!"<<endl;
								}
								else
								{
									wc.setwithdrawAmt(cash[withdrawlOpt-1]);
									wc.withdraw(amm, database);
								}

							}
							else if(withdrawlOpt==6)
							{
								break;
							}

					}while(cash[withdrawlOpt-1]>wc.getBalance());
				}
				//implementation for cash deposit
				else if(choice==3)
				{
					cout<<"Enter an amount in cents or Enter 0 to cancel! "<<endl;
					cin>>amount;

					if(amount!=0)
					{
						depamount=(double)amount/(double)100;
						dc.setdepamount(depamount);
						dc.depositCash(amm, database);
					}
				}
				//choice to exit
				else if(choice==4)
				{
					cout<<"Thank you!"<<endl;
					flag=false;
				}

			}while(flag==true);

				}
				//if account fails to get verified then access will not be granted.
				else
				{
					cout << "Account access failed!" << endl;
					flag2=false;
				}
			}while(flag2==false);
		}

	}while(true);

	return 0;
}
