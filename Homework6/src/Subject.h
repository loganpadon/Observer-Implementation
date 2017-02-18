/*
 * Subject.h
 *
 *  Created on: Dec 7, 2015
 *      Author: Logan
 */

#ifndef SUBJECT_H_
#define SUBJECT_H_

#include <string>
#include <list>
#include <iostream>
#include "AbstractObserver.h"

namespace std {

class Subject {
private:
	string address;
	list<AbstractObserver*> observers;
	void notify();
public:
	virtual ~Subject();
	Subject();
	Subject(string);
	void addObserver(AbstractObserver&);
	void removeObserver(AbstractObserver&);
	string getAddress();
	void setAddress(string);
};

} /* namespace std */

#endif /* SUBJECT_H_ */
