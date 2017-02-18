/*
 * BankObserver.h
 *
 *  Created on: Dec 7, 2015
 *      Author: Logan
 */

#ifndef BANKOBSERVER_H_
#define BANKOBSERVER_H_

#include "AbstractObserver.h"
#include <string>
#include <iostream>

namespace std {

class BankObserver: public AbstractObserver {
public:
	BankObserver();
	virtual ~BankObserver();
	void subjectChanged(string);
};

} /* namespace std */

#endif /* BANKOBSERVER_H_ */
