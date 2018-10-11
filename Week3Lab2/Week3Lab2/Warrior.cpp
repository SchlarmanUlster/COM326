/*
* Warrior.cpp
*
* Version Information
* Author: Joe Schlarman
* Date: 11/10/2018
* Description: Implementation for Warrior class
* Copyright Notice
*/

#include "Warrior.h"

//Default constructor
Warrior::Warrior() {
	std::cout << "A Warrior was just born! via the Default constructor" << std::endl;
}

//Custom constructor
Warrior::Warrior(std::string name, std::string race, int health, int level) 
				:Name_{ name }, Race_{ race }, Health_{ health }, Level_{ level } {
	std::cout << "A Warrior was just born!" << std::endl;
}


//Getters
std::string Warrior::GetName() const {
	return Name_;
}
std::string Warrior::GetRace() const {
	return Race_;
}
int Warrior::GetHealth() const {
	return Health_;
}
int Warrior::GetLevel() const {
	return Level_;
}
Weapon Warrior::GetArms() const{
	return Arms_;
}


//Setters
void Warrior::SetName(std::string name) {
	Name_ = name;
}
void Warrior::SetRace(std::string race) {
	Race_ = race;
}
void Warrior::SetHealth(int health) {
	Health_ = health;
}
void Warrior::SetLevel(int level) {
	Level_ = level;
}
void Warrior::EquipWeapon(Weapon arms){
	Arms_ = arms;
}

std::string Warrior::PrintStatus() const {
	
	std::stringstream toString;
	toString << "I am " << Name_ << " the " << Race_ << ". " << "Level: " << Level_ << "\n"
		<< "Current Health: " << Health_ << "\n" << "I have a(n) " << Arms_.ToString();
	return toString.str();

}