//Week 2 Lab 1
//Author: Joe Schlarman

#include <algorithm>
#include <iostream>
#include <string>
#include <regex>

int main() {
	//Challenge 1



	/* Task 1
	Ask the user to input two words, s1 and s2. If the strings are the same print “This pleases Chuck Norris!”, otherwise print “I pity the fool”
	*/

	/* Task 2
	String comparison is case sensitive. Enter two strings that are the same apart for the first string is all in UPPERCASE.
	Your code will reject them as being different. Modify your code so that it both s1 and s2 are transformed to lowercase before you compare them
	*/

	std::string s1{ "" };
	std::string s2{ "" };

	std::cout << "Enter the first string: " << std::endl;
	getline(std::cin, s1);

	std::string s1Lower{ "" };

	for (unsigned i = 0; i < s1.length(); i++){
		char lowerLetter{ (char) tolower(s1.at(i))};
		s1Lower.append(1, lowerLetter);

	}

	s1 = s1Lower;

	//transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 

	std::cout << "Enter the second string: " << std::endl;
	getline(std::cin, s2);

	std::string s2Lower{ "" };

	for (unsigned i = 0; i < s2.length(); i++) {
		char lowerLetter{ (char) tolower( s2.at(i)) };
		s2Lower.append(1, lowerLetter);

	}

	s2 = s2Lower;

	//transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

	if (s1.compare(s2) == 0) {
		std::cout << "This pleases Chuck Norris! " << std::endl;
	}
	else {
		std::cout << "I pity the fool " << std::endl;
	}



	/* Task 3
	Examine both strings for a hidden message. If the words “Holiday” or “Belize” appear in the message as the user if they are a secret agent. If they answer ‘yes’ shoot them. 
	*/

	if ((s1.find("holiday") != std::string::npos) || (s1.find("belize") != std::string::npos) 
		|| (s2.find("holiday") != std::string::npos) || (s2.find("belize") != std::string::npos)) { //such a beootiful boolean
		std::cout << "You one of them secret agents? ('yes'/'no')" << std::endl;
		std::string response;
		std::cin >> response;
		if (response.compare("yes") == 0) {
			std::cout << "*Bang Bang*, gotcha noob" <<std::endl;
		}
	}


	//Challenge 2

	/* Task 1
	Given s, print the number of words in s on a new line. 
	*/
/*
	std::string s1{ "" };

	std::cout << "Enter the camelCase string: " << std::endl;
	getline(std::cin, s1);
	int wordCount{ 1 };

	for (int i = 0; i < s1.length(); i++) {
		if (s1.at(i) > 64 && s1.at(i) < 91) {
			wordCount++;
		}
	}

	std::cout << wordCount;
*/


	////Challenge 3

	///* Task 1
	//Ask the user to input a valid email address. If the email is valid thank them. Otherwise keep asking them for a valid email address.

	//Notes: To accomplish this challenge you must ensure that the string that is inputted is a correctly formatted email address. A valid email address must contain:

	//1. A ‘@’ symbol 2. A ‘.’ Period

	//In addition

	//3. the ‘.’ must appear after the @  4. There must be some characters after the ‘.’
	//*/

	//bool validEmail{ false };
	//std::string email{};

	//std::regex emailOutline{ R"(\w+@\w+\.\w+)" };

	//while (!validEmail) {
	//	std::cout << "Enter an email address: ";
	//	getline(std::cin, email);

	//	if (regex_match(email, emailOutline)) {
	//		std::cout << "Thank you!" << std::endl;
	//		validEmail = true;
	//	}
	//}

	system("pause");

	return 0;
}