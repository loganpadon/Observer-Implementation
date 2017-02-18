/*
 * Subject.cpp
 *
 *  Created on: Dec 7, 2015
 *      Author: Logan
 */

#include "Subject.h"

namespace std {

Subject::~Subject() {
	cout << "\tDEBUG: Subject going out of scope" << endl;
	list<AbstractObserver *>::iterator it; //Creates the iterator
	for (it = observers.begin(); it != observers.end(); it++) { //Loop iterates down the list
		observers.erase(it);
	}
}

Subject::Subject() {
	setAddress("UNDEFINED");
}

Subject::Subject(string address) {
	setAddress(address);
}

void Subject::setAddress(string address) {
	this->address = address;
	notify();
}

string Subject::getAddress() {
	return address;
}

void Subject::addObserver(AbstractObserver& observer) { //Adds an observer to the list
	AbstractObserver * observer1;
	observer1 = &observer;
	observers.push_back(observer1);
	cout << "\tDEBUG: Observer registered" << endl; //Alerts that function has been called
}

void Subject::removeObserver(AbstractObserver& observer) { //Removes an observer from the list
	AbstractObserver * observer1;
	observer1 = &observer;
	observers.remove(observer1);
	cout << "\tDEBUG: Observer deregistered" << endl; //Alerts that function has been called
}

void Subject::notify() { //Notifies observers of address change
	list<AbstractObserver *>::iterator it; //Creates the iterator
	for (it = observers.begin(); it != observers.end(); it++) { //Loop iterates down the list
		(*it)->subjectChanged(this->address); //Changes the address using the subject changed method
	}
}

} /* namespace std */
