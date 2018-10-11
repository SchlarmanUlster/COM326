/*
* Week 3 Lab 2 Extra Challenge 2 (RPG Classes)
*
* Version Information
* Author: Joe Schlarman
* Date: 11/10/2018
* Description: Main for RPG coding challenge
* Copyright Notice
*/

#include <string>
#include <iostream>
#include "Warrior.h"
#include "Weapon.h"

int main(){

	Warrior Zemekis{ "Zemekis", "Dwarf", 10, 1 };

	Weapon Halberd{ "Polearm", 10, 1 };

	Zemekis.EquipWeapon(Halberd);

	std::cout << Zemekis.PrintStatus();
	

	system("pause");
	return 0;
}