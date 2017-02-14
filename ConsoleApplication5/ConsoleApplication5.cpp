// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std; 

int main()
{
	double begbal;
	double deposit;
	double withdrawl;
	double checks;
	double endbal;
	string transaction; 

	cout << "Please enter an account balance"; 
	cin >> begbal;

	do ( 
		


	cout << "Current Balance:" << begbal << endl; 

	cout << "Enter Transactions:" << endl;

	cout << "(W)ithdrawl, (D)eposit, (C)heck, (Q)uit"; 
	cin >> transaction; 

	)while(transaction != 'q')




    return 0;
}

