#include <iostream>

// Lab 5 - Andy Munoz
// CIS Week 5 - Eligibility Check

int main() {
	int age = 0;
	double gpa = 0.0;
	std::cout << "Age? ";
	std::cin >> age;
	std::cout << "GPA? ";
	std::cin >> gpa;

	bool adult = age >= 18;
	bool honors = gpa >= 3.5;

	if (adult && honors) {
		std::cout << "You are eligible for the honors program!\n";
	}
	else if (adult || honors) {
		std::cout << "Halfway there. One requirement met.\n";
	}
	else {
		std::cout << "Not eligible.\n";
	}
	//test agees 17 / 18 with 3.8 and 3.4 / 3.5 with age 20
	return 0;
}
