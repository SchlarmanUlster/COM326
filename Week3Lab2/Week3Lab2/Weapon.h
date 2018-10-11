/*
* Weapon.h
*
* Version Information
* Author: Joe Schlarman
* Date: 11/10/2018
* Description: Blueprint for Weapon class
* Copyright Notice
*/

#pragma once

#include <string>
#include <sstream>
#include <iostream>


class Weapon {
private:
	std::string Type_;
	int Damage_;
	int Level_;
	//Weapon Arms_;

public:
	Weapon();

	Weapon(std::string type, int damage, int level);

	std::string GetType() const;
	int GetDamage() const;
	int GetLevel() const;
	void SetType(std::string type);
	void SetDamage(int damage);
	void SetLevel(int level);

	std::string ToString() const;
};
