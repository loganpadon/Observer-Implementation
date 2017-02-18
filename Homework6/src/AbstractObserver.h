/*
 * AbstractObserver.h
 *
 *  Created on: Dec 7, 2015
 *      Author: Logan
 */

#ifndef ABSTRACTOBSERVER_H_
#define ABSTRACTOBSERVER_H_

#include <string>

namespace std {

class AbstractObserver {
public:
	virtual ~AbstractObserver();
	virtual void subjectChanged(string) = 0;
};

} /* namespace std */

#endif /* ABSTRACTOBSERVER_H_ */
