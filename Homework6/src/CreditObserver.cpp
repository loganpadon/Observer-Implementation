/*
 * CreditObserver.cpp
 *
 *  Created on: Dec 7, 2015
 *      Author: Logan
 */

#include "CreditObserver.h"

namespace std {

CreditObserver::CreditObserver() {
	// TODO Auto-generated constructor stub

}

CreditObserver::~CreditObserver() {
	// TODO Auto-generated destructor stub
}

void CreditObserver::subjectChanged(string address){
	cout << "Credit Observer received an address change to " << address << endl;
}
} /* namespace std */
