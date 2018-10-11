/*
* Weapon.cpp
*
* Version Information
* Author: Joe Schlarman
* Date: 11/10/2018
* Description: Implementation for Weapon class
* Copyright Notice
*/

#include "Weapon.h"

Weapon::Weapon() {
	
}

Weapon::Weapon(std::string type, int damage, int level) 
	:Type_{ type }, Damage_{ damage }, Level_{ level } {
	std::cout << "An awesome weapon has once more been crafted by master blacksmith Shane" << std::endl;
}



std::string Weapon::GetType() const {
	return Type_;
}
int Weapon::GetDamage() const {
	return Damage_;
}
int Weapon::GetLevel() const {
	return Level_;
}



void Weapon::SetType(std::string type) {
	Type_ = type;
}
void Weapon::SetDamage(int damage) {
	Damage_ = damage;
}
void Weapon::SetLevel(int level) {
	Level_ = level;
}

std::string Weapon::ToString() const {
	std::stringstream toString;
	toString << "Level " << Level_ << " " << Type_ << ". It does " << Damage_ << " damage.\n";
	return toString.str();
}