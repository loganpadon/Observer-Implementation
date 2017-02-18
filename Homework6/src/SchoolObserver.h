/*
 * SchoolObserver.h
 *
 *  Created on: Dec 7, 2015
 *      Author: Logan
 */

#ifndef SCHOOLOBSERVER_H_
#define SCHOOLOBSERVER_H_

#include "AbstractObserver.h"
#include <string>
#include <iostream>

namespace std {

class SchoolObserver: public AbstractObserver {
public:
	SchoolObserver();
	virtual ~SchoolObserver();
	void subjectChanged(string);
};

} /* namespace std */

#endif /* SCHOOLOBSERVER_H_ */
