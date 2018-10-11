/*
* Warrior.h
*
* Version Information
* Author: Joe Schlarman
* Date: 11/10/2018
* Description: Blueprint for Warrior class
* Copyright Notice
*/

#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include "Weapon.h"

class Warrior {
	private:
		std::string Name_;
		std::string Race_;
		int Health_;
		int Level_;
		Weapon Arms_;

	public:
		Warrior();

		Warrior(std::string name, std::string race, int health, int level);

		std::string GetName() const;
		std::string GetRace() const;
		int GetHealth() const;
		int GetLevel() const;
		Weapon GetArms() const;
		void SetName(std::string name);
		void SetRace(std::string race);
		void SetHealth(int health);
		void SetLevel(int level);
		void EquipWeapon(Weapon arms);

		std::string PrintStatus() const;
};
