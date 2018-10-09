//Week 3 Lab 1
//Author: Joe Schlarman
//Student class implementation

#include <iostream>
#include <string>

#include "Student.h"

//Default constructor
Student::Student() {
	std::cout << "Default Student Created" << std::endl;
}


//Custom constructor
Student::Student(std::string name, std::string registrationID, std::string course, int yearOfStudy, int ModuleOneMark, int ModuleTwoMark, int ModuleThreeMark) 
	:name_{ name }, registrationID_{ registrationID }, course_{ course }, yearOfStudy_{ yearOfStudy }, moduleOneMark_{ ModuleOneMark }, moduleTwoMark_{ ModuleTwoMark }, moduleThreeMark_{ ModuleThreeMark } {
	std::cout << "Custom Student Created" << std::endl;
}


//Getters
std::string Student::getName() const {
	return name_;
}

std::string Student::getregistrationID() const {
	return registrationID_;
}

std::string Student::getCourse() const {
	return course_;
}

int Student::getYearOfStudy() const {
	return yearOfStudy_;
}

int Student::getModuleOneMark() const {
	return moduleOneMark_;
}

int Student::getModuleTwoMark() const {
	return moduleTwoMark_;
}

int Student::getModuleThreeMark() const {
	return moduleThreeMark_;
}



//Setters
void Student::setName(std::string name) {
	name_ = name;
}

void Student::setregistrationID(std::string registrationID) {
	registrationID_ = registrationID;
}

void Student::setCourse(std::string course) {
	course_ = course;
}

void Student::setYearOfStudy(int yearOfStudy) {
	if (yearOfStudy >= 1 && yearOfStudy <= 5) {
		yearOfStudy_ = yearOfStudy;
	}
	else {
		std::cout << "Year of Study invalid, must be between 1 and 5" << std::endl;
	}
}

void Student::setModuleOneMark(int ModuleOneMark) {
	if (ModuleOneMark >= 0 && ModuleOneMark <= 100) {
		moduleOneMark_ = ModuleOneMark;
	}
	else {
		std::cout << "Mark invalid, must be between 0 and 100" << std::endl;
	}
}

void Student::setModuleTwoMark(int ModuleTwoMark) {
	if (ModuleTwoMark >= 0 && ModuleTwoMark <= 100) {
		moduleTwoMark_ = ModuleTwoMark;
	}
	else {
		std::cout << "Mark invalid, must be between 0 and 100" << std::endl;
	}
}

void Student::setModuleThreeMark(int ModuleThreeMark) {
	if (ModuleThreeMark >= 0 && ModuleThreeMark <= 100) {
		moduleThreeMark_ = ModuleThreeMark;
	}
	else {
		std::cout << "Mark invalid, must be between 0 and 100" << std::endl;
	}
}

//Print all data member of Student
void Student::ToString() {
	std::cout << "Name: " << name_ << "\n" << "RegistrationID: " << registrationID_ << "\n" << "Course: " << course_ << "\n" << "Year of Study: " << yearOfStudy_ << "\n"
		<< "Module One Mark: " << moduleOneMark_ << "\n" << "Module Two Mark: " << moduleTwoMark_ << "\n" << "Module Three Mark: " << moduleThreeMark_ << std::endl;
}

//return classification based on input mark
std::string Student::calculateClassification(int mark) {
	if (mark < 40) {
		return "Fail";
	}
	else if (mark < 50) {
		return "3rd Class";
	}
	else if (mark < 60) {
		return "2nd Class";
	}
	else if (mark < 70) {
		return "2-1";
	}
	else {
		return "First";
	}
}
