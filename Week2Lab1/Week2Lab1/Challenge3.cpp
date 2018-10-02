//Week 2 Lab 1 Challenge 1
//Author: Joe Schlarman

#include <regex>
#include <iostream>
#include <string>

int main() {

	/* Task 1
	Ask the user to input a valid email address. If the email is valid thank them. Otherwise keep asking them for a valid email address. 
 
Notes: To accomplish this challenge you must ensure that the string that is inputted is a correctly formatted email address. A valid email address must contain: 
 
1. A ‘@’ symbol 2. A ‘.’ Period 
 
In addition  
 
3. the ‘.’ must appear after the @  4. There must be some characters after the ‘.’ 
	*/

	bool validEmail{ false };
	std::string email{};

	std::regex emailOutline{ R"(\\w+@\\w+\\.\\w+)" };

	while (!validEmail) {
		std::cout << "Enter an email address: ";
		getline(std::cin, email);

		if (regex_match(email, emailOutline)) {
			std::cout << "Thank you!";
			validEmail = true;
		}
	}

	system("pause");

	return 0;
}