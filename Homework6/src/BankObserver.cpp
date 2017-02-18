/*
 * BankObserver.cpp
 *
 *  Created on: Dec 7, 2015
 *      Author: Logan
 */

#include "BankObserver.h"

namespace std {

BankObserver::BankObserver() {
	// TODO Auto-generated constructor stub

}

BankObserver::~BankObserver() {
	// TODO Auto-generated destructor stub
}

void BankObserver::subjectChanged(string address){
	cout << "Bank Observer received an address change to " << address << endl;
}
} /* namespace std */
