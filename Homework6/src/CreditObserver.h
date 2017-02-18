/*
 * CreditObserver.h
 *
 *  Created on: Dec 7, 2015
 *      Author: Logan
 */

#ifndef CREDITOBSERVER_H_
#define CREDITOBSERVER_H_

#include "AbstractObserver.h"
#include <string>
#include <iostream>

namespace std {

class CreditObserver: public AbstractObserver {
public:
	CreditObserver();
	virtual ~CreditObserver();
	void subjectChanged(string);
};

} /* namespace std */

#endif /* CREDITOBSERVER_H_ */
