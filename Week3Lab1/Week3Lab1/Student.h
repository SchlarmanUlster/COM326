//Week 3 Lab 1
//Author: Joe Schlarman
//Student class header

#include <iostream>
#include <string>

#pragma once

class Student {
	private:
		std::string name_;
		std::string registrationID_;
		std::string course_;
		int yearOfStudy_;
		int moduleOneMark_;
		int moduleTwoMark_;
		int moduleThreeMark_;

	public:
		Student();

		Student( std::string name, std::string registrationID, std::string course, int yearOfStudy, int ModuleOneMark, int ModuleTwoMark, int ModuleThreeMark );

		std::string getName() const;
		std::string getregistrationID() const;
		std::string getCourse() const;
		int getYearOfStudy() const;
		int getModuleOneMark() const;
		int getModuleTwoMark() const;
		int getModuleThreeMark() const;

		void setName(std::string name);
		void setregistrationID(std::string registrationID);
		void setCourse(std::string course);
		void setYearOfStudy(int yearOfStudy);
		void setModuleOneMark(int ModuleOneMark);
		void setModuleTwoMark(int ModuleTwoMark);
		void setModuleThreeMark(int ModuleThreeMark);

		void ToString();

		std::string calculateClassification(int mark);

};