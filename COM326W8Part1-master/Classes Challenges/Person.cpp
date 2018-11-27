/*
* Person.cpp
*
* Version information v0.1
* Author: Joe Schlarman
* Date: 27/11/2018
* Description: Class definition .cpp file for the Person Class
* Copyright notice
*/

#include "Person.h"

Person::Person() {
	std::cout << "Default Person Constructor Called" << std::endl;
}

Person::Person(std::string name, std::string email) {
	std::cout << "Custom Person Constructor Called" << std::endl;
	Name_ = name;
	Email_ = email;
}

std::string Person::GetName() {
	return Name_;
}

std::string Person::GetEmail() {
	return Email_;
}

void Person::SetName(std::string name) {
	Name_ = name;
}


void Person::SetEmail(std::string email) {
	Email_ = email;
}

std::string Person::ToString() {
	std::string info = "Name: " + Name_ + " Email: " + Email_;
	return info;
}