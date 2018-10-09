//Week 3 Lab 1
//Author: Joe Schlarman

#include <iostream>
#include <string>
#include "Student.h"

using namespace std;



int main() {
	//use default constructor
	Student test{};

	//use custom constructor
	Student me{ "Billy Bragg", "B00578985", "Music theory", 3, 87, 92, 47 };

	me.ToString();

	//print module grade classifications
	cout << me.calculateClassification(me.getModuleOneMark()) << endl;
	cout << me.calculateClassification(me.getModuleTwoMark()) << endl;
	cout << me.calculateClassification(me.getModuleThreeMark()) << endl;

	system("pause");
	return 0;
}