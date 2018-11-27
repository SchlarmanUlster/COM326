/*
* Lecturer.cpp
*
* Version information v0.1
* Author: Joe Schlarman
* Date: 27/11/2018
* Description: Class definition .cpp file for the Lecturer Class
* Copyright notice
*/

#include "Lecturer.h"

Lecturer::Lecturer() {

}

Lecturer::Lecturer(std::string id, std::string subject, std::string name, std::string email) {
	StaffID_ = id;
	subjectArea_ = subject;
	SetName(name);
	SetEmail(email);
}

std::string Lecturer::GetStaffID() {
	return StaffID_;
}

void Lecturer::SetStaffID(std::string id) {
	StaffID_ = id;
}

std::string Lecturer::GetSubjectArea() {
	return subjectArea_;
}

void Lecturer::SetSubjectArea(std::string sub) {
	subjectArea_ = sub;
}

void Lecturer::AddModule(Module m) {
	modulesTaught_.push_back(m);
}

void Lecturer::AddModule(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark) {
	Module m(moduleTitle, moduleCode, moduleCreditPoints, moduleMark);
	modulesTaught_.push_back(m);

}

void Lecturer::DeleteModule(std::string moduleCode) {
	//Loop through the module marks and remove a module that 
	for (int index = 0; index < modulesTaught_.size(); index++) {
		if (modulesTaught_.at(index).getModuleCode() == moduleCode) {
			modulesTaught_.erase(modulesTaught_.begin() + index);
		}
	}

}
void Lecturer::UpdateModule(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark) {
	//Loop through the module marks and remove a module that 
	for (int index = 0; index < modulesTaught_.size(); index++) {
		if (modulesTaught_.at(index).getModuleCode() == moduleCode) {
			modulesTaught_.at(index).setModuleCreditPoints(moduleCreditPoints);
			modulesTaught_.at(index).setModuleTitle(moduleTitle);
			modulesTaught_.at(index).setModuleMark(moduleMark);
		}
	}
}

int Lecturer::GetNumberModules() {
	return this->modulesTaught_.size();

}

std::string Lecturer::ToString() {
	std::string output = "Name: " + GetName() + " Email: " + GetEmail()
		+ " Subject: " + subjectArea_;
	for (size_t i = 0; i < modulesTaught_.size(); i++) {
		output += "\n" + modulesTaught_.at(0).setModuleTitle;
	}
	return output;
}