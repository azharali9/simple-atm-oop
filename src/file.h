#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include"AccountMainMenu.h"
using namespace std;
class File
{
private:
	string fileName;
	int size;
public:
	string getFileName() { return fileName; }
	File(string);
	bool isFull();
	void countSize();
	int storeData(AccountMainMenu pass);// it returs the line number
	void displayFile();
	AccountMainMenu getAt(int line);
};

