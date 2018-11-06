/*
* Week 7 Lab 1
*
* Version Information
* Author: Joe Schlarman
* Date: 23/10/2018
* Description: Main for Week 7 Lab 1
* Copyright Notice
*/

#include <iostream>
#include <array>
#include <string>

//using namespace std;

void PrintStackArrayAddresses(int arr[], int length);
void SetFloatValues(float* floatArray);
void PrintHeapArrayAddresses(float* arr);

int HowMany();
int* CreateInts(int num);
void ReadInts(int* array, int num);
void DisplayInts(int* array, int num);


int main() {

	//Challenge 2

	/*int ints[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a{ 1 };
	int b{ 2 };
	int c{ 3 };
	int d{ 4 };*/


	//PrintStackArrayAddresses(ints, sizeof(ints) / sizeof(ints[0]));

	//Challenge 3

	/*float* floatArr{ new float[10] };
	SetFloatValues(floatArr);
	PrintHeapArrayAddresses(floatArr);

	delete[] floatArr;*/

	//Challenge 4

	int num{ HowMany() };
	int* ptr{ CreateInts(num) };
	ReadInts(ptr, num);
	DisplayInts(ptr, num);

	delete[] ptr;
	return 0;
}

void PrintStackArrayAddresses(int arr[], int length) {
	//Stack addresses grow upwards
	for (int i = 0; i < length; i++){
		std::cout << "Index: " << i << std::endl;
		std::cout << "Element: " << arr[i] << std::endl;
		std::cout << "Hex Address: " << std::hex << (int) &arr[i] << std::endl;
		std::cout << "Decimal Address: " << std::dec << (int) &arr[i] << std::endl << std::endl;
	}
}

void SetFloatValues(float* floatArray) {
	float* floatTemp = floatArray;
	for (int i = 0; i < 10; i++){
		*floatTemp = i;
		*floatTemp++;
	}
}

void PrintHeapArrayAddresses(float* arr) {
	//Heap Addresses grop upwards
	float* temp = arr;
	for (int i = 0; i < 10; i++){
		std::cout << "Index: " << i << std::endl;
		std::cout << "Element: " << *temp << std::endl;
		std::cout << "Hex Address: " << std::hex << (int)temp << std::endl;
		std::cout << "Decimal Address: " << std::dec << (int)temp << std::endl << std::endl;
		temp++;
	}
}

int HowMany() {
	std::cout << "How many integers do you want?" << std::endl;
	int choice{ 0};
	std::cin >> choice;
	std::cout << std::endl;
	return choice;
}

int* CreateInts(int num) {
	int* intPtr{ new int[num] };
	return intPtr;
}

void ReadInts(int* array, int num) {
	int* intTemp = array;
	for (int i = 0; i < num; i++) {
		std::cout << "Enter int number " << i << ": ";
		std::cin >> *intTemp;
		*intTemp++;
	}
	std::cout << std::endl;
}

void DisplayInts(int* array, int num) {
	int* temp = array;
	for (int i = 0; i < num; i++){
		std::cout << *temp << std::endl;
		temp++;
	}
	std::cout << std::endl;
}