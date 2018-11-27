#pragma once

/*
* Lecturer.h
*
* Version information
* Author: Joe Schlarman
* Date: 27/11/2018
* Description: Class declaration header file for the Lecturer Class
* Copyright notice
*/

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Module.h"
#include "Person.h"

class Lecturer : Person {

private:
	std::string StaffID_;
	std::string subjectArea_;

	std::vector<Module> modulesTaught_{};


public:
	Lecturer();

	Lecturer(std::string id, std::string subject, std::string name, std::string email);

	std::string GetStaffID();
	void SetStaffID(std::string id);

	std::string GetSubjectArea();
	void SetSubjectArea(std::string id);

	void AddModule(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark);
	void AddModule(Module m);
	void DeleteModule(std::string moduleCode);
	void UpdateModule(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark);
	int GetNumberModules();

	std::string ToString() override;

};