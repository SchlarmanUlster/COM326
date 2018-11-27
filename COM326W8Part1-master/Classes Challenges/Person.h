/*
* Person.h
*
* Version information
* Author: Joe Schlarman
* Date: 27/11/2018
* Description: Class declaration header file for the Person Class
* Copyright notice
*/

#pragma once

#include <iostream>
#include <string>
#include <vector>

class Person {

private:
	std::string Name_;
	std::string Email_;


public:

	Person();
	Person(std::string name, std::string email);

	std::string GetName();
	std::string GetEmail();

	void SetName(std::string name);
	void SetEmail(std::string email);

	virtual std::string ToString();


};