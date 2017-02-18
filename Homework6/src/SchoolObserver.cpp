/*
 * SchoolObserver.cpp
 *
 *  Created on: Dec 7, 2015
 *      Author: Logan
 */

#include "SchoolObserver.h"

namespace std {

SchoolObserver::SchoolObserver() {
	// TODO Auto-generated constructor stub

}

SchoolObserver::~SchoolObserver() {
	// TODO Auto-generated destructor stub
}

void SchoolObserver::subjectChanged(string address){
	cout << "School Observer received an address change to " << address << endl;
}
} /* namespace std */
