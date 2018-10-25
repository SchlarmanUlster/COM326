/*
* Week 5 Lab 1 and 2
*
* Version Information
* Author: Joe Schlarman
* Date: 23/10/2018
* Description: Main for Week 5 Lab 1 and 2
* Copyright Notice
*/


#include <iostream>

using namespace std;

class Person {
	string firstName_;
	string lastName_;
	string occupation_;
	int age_;

public:

	Person(string first, string last, string occupation, int age) {
		firstName_ = first;
		lastName_ = last;
		occupation_ = occupation;
		age_ = age;
	
	}

	//Challenge 4 (will not work when called with string literals)
	Person(string &first, string &last, string &occupation, int age) {
		firstName_ = first;
		lastName_ = last;
		occupation_ = occupation;
		age_ = age;
	}

	string GetFirstName() {
		return firstName_;
	}

	string GetLastName() {
		return lastName_;
	}

	string GetOccupation() {
		return occupation_;
	}

	int GetAge() {
		return age_;
	}

	void SetFirstName(string first) {
		firstName_ = first;
	}

	void SetLastName(string last) {
		lastName_ = last;
	}

	void SetOccupation(string occupation) {
		occupation_ = occupation;
	}

	void SetAge(int age) {
		age_ = age;
	}

};

void Print(float arr[]);

void Compare(Person &p1, Person &p2);

int main(){

	//Challenge 1 
	//float gravity{ 7.77f };
	//float speed{ 133.7f };
	//float* aptr{ nullptr };
	//float* bptr{ nullptr };
	//aptr = &gravity;
	//bptr = aptr; //remember the endian flip!

	//cout << gravity << endl;
	//cout << &gravity << endl;
	//cout << sizeof(gravity) << endl;
	//cout << endl;

	//cout << aptr << endl;
	//cout << &aptr << endl;
	//cout << *aptr << endl;
	//cout << sizeof(aptr) << endl;
	//cout << endl;

	//cout << bptr << endl;
	//cout << &bptr << endl;
	//cout << *bptr << endl;
	//cout << sizeof(bptr) << endl;

	
	//Challenge 2
	/*float arr1[5]{ 1.1f, 2.2f, 3.3f, 4.4f, 5.5f };

	Print(arr1);
	*/

	//Challenge 3
	Person Paul{ "Paul", "Doherty", "Ninja", 33 };
	Person Mary{ "Mary", "McGonigle", "CTO", 28 };
	Person Paul2{ "Paul", "Doherty", "Ninja", 33 };

	Compare(Paul, Paul2);

	getchar();
	return 0;
}

void Print(float arr[]) {

	for (float *ptr = &arr[4]; ptr >= &arr[0]; ptr--)
	{
		cout << *ptr << endl;
	}

	
}

void Compare(Person &p1, Person &p2) {
	Person* p1ptr{ nullptr };
	Person* p2ptr{ nullptr };

	p1ptr = &p1;
	p2ptr = &p2;

	if (p1ptr->GetAge() == p2ptr->GetAge() &&
		p1ptr->GetFirstName() == p2ptr->GetFirstName() &&
		p1ptr->GetLastName() == p2ptr->GetLastName() &&
		p1ptr->GetOccupation() == p2ptr->GetOccupation()) { 
		cout << "Same Person" << endl;
	}
	else {
		cout << "Different People" << endl;
	}
}