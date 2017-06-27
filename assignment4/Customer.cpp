/*
 * Customer.cpp
 *
 *  Created on: Mar 5, 2010
 *      Author: mori
 */

#include "Customer.h"

Customer::Customer(string x, char y, int z) {
}

char Customer::getInitial(){
  return initial;
}
string Customer::getLastName(){
  return lastName;
}
int Customer::getAccountBalance(){
  return accountBalance;
}

ostream& operator<<(ostream & os,  Customer & c) {
  os<<c.getLastName()<<", "<<c.getInitial()<<". "<<"("<<c.getAccountBalance()<<")";
  return os;
}
