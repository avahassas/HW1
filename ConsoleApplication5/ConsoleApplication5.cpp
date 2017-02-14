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
	char transaction; 

	cout << "Please enter an account balance"; 
	cin >> begbal;

	

	cout << "Current Balance:" << begbal << endl; 

	cout << "Enter Transactions:" << endl;

	cout << "(W)ithdrawl, (D)eposit, (C)heck, (Q)uit"; 
	cin >> transaction;

		switch (transaction)
		{
			case 'W':
				cout << "Please enter Withdrawl Amount" << endl;
				cin >> withdrawl;
				break;

			case 'D':
				cout << "Please enter Deposit Amount" << endl;
				cin >> deposit;
				break;

			case 'C':
				cout << "Please enter Check Amount" << endl;
				cin >> checks;
				break;

			case 'Q':
				cout << "Goodbye" << endl;
				break;
		}
	 

    return 0;
}

