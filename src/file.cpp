/*
 * file.cpp
 *
 *  Created on: Dec 26, 2020
 *      Author: azharali
 */
#include "file.h"

bool File::isFull()
{
	cout << "size : " << size << endl;
	if (size >= 100)
	{
		return true;
	}
	return false;
}
File::File(string fn)
{
	fileName = fn;
	fileName = fn + ".dat";
	size = 0;
	countSize();
}
// function to store data
int File::storeData(AccountMainMenu pass)
{
	AccountMainMenu d;
	if (pass==d)
	{
		cout << "===Account is Not Initilized===" << endl;
		return -1;
	}
	cout << "===Entering data===" << endl;
	ofstream file;
	file.open(fileName, ios::app | ios::binary);
	file.write((char*)&pass, sizeof(pass));
	size++;
	file.close();
	if (size == 1)
		return size - 1;
	else
		return size - 2;
}
// Function to show all data
void File::displayFile()
{
	ifstream file;
	AccountMainMenu temp;
	file.open(fileName, ios::in | ios::binary);
	if (!file)
	{
		cout << "File Not Found" << endl;
		return;
	}
	cout << "Complete Database Display"<< endl;
	cout << "Ac. No" << "\t" << "password" << "\t" << "balance" << endl;
	file.read((char*)&temp, sizeof(temp));
	while (!file.eof())
	{
		temp.display();
		file.read((char*)&temp, sizeof(temp));
	}
	file.close();
}
// For geting at line #
AccountMainMenu File::getAt(int pass)
{
	bool found = false;
	AccountMainMenu temp;
	ifstream file(fileName, ios::in | ios::binary);
	while (!file.eof())
	{
		if (temp.getId()==pass)
		{

			found = true;
			break;
		}
		file.read((char*)&temp, sizeof(temp));
	}
	file.close();
	if (found == true)
	{
		return temp;
	}
	else
	{
		cout << "This Id is Not Found " << endl;
		return AccountMainMenu();// empty details
	}
}
void File::countSize()
{
	ifstream file(fileName, ios::in | ios::binary);
	if (!file)
	{
		size = 0;
	}
	else
	{
		cout << "size : " << size << endl;
		AccountMainMenu temp;
		while (!file.eof())
		{
			file.read((char*)&temp, sizeof(temp));
			size++;
		}
		file.close();
	}
}


