//============================================================================
// Name        : Homework6.cpp
// Author      : Logan Padon
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Subject.h"
#include "BankObserver.h"
#include "CreditObserver.h"
#include "SchoolObserver.h"

#include <iostream>
#include <string>
using namespace std;

int main() {
	Subject subject; //Creates the subject

	BankObserver bankObserver;
	CreditObserver creditObserver;
	SchoolObserver schoolObserver; //Creates observers

	string FIRST_ADDRESS = "123 First Address Street"; //Should appear first, three times
	string SECOND_ADDRESS = "456 Second Address Street"; //Should appear second, twice

	subject.addObserver(bankObserver);
	subject.addObserver(creditObserver);
	subject.addObserver(schoolObserver); //Adds 3 observers to the subject

	subject.setAddress(FIRST_ADDRESS); //Changes address, notifies observers

	subject.removeObserver(schoolObserver); //Removes the last observer

	subject.setAddress(SECOND_ADDRESS); //Changes address, notifies observers

	return 0;
}
