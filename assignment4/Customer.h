/*
 * Customer.h
 *
 *  Created on: Mar 5, 2010
 *      Author: mori
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>
#include <iostream>
using namespace std;

class Customer {
public:
	Customer(string lastName,char initial,int accountBalance);
	char getInitial();
	int getAccountBalance();
	string getLastName();

private:
	friend ostream& operator<<(ostream & os,  Customer & c);
	string lastName;
	char initial;
	int accountBalance;
};

#endif /* CUSTOMER_H_ */
