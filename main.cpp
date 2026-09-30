#include <iostream>

// Homework 5 - Andy Munoz
// CIS 5 Week 05 - Rule Engine Lite

int main() {
	int score = 0;
	int attendance = 0;
	std::cout << "Score? ";
	std::cin >> score;
	std::cout << "Attendance? ";
	std::cin >> attendance;

	bool pass = score >= 60;
	bool attended = attendance >= 50;
	
	// >= Used for these because equal to 50 or greater is acceptable
	// If > was used, 50 would not be an acceptable score

	// Edge Values (Score, Attendence):
	// Just below = (59, 49)
	// Exactly on = (60, 50)
	// Just above = (61, 51)

	if (score < 0 || score > 100) {
		std::cout << "Error.\n";

		// < used here instead of <= because only values below 0 are invalid, 0 itself is valid
		// Invalid condition comes first in order to eliminate errors as soon as possible, protecting the rest of the code

	}
	else if (pass && attended) {
		std::cout << "Pass.\n";

		// && used because strictly both are required for pass, not just at least one	

	}
	else if (!pass && attended) {
		std::cout << "Warn, score too low.\n";
	}
	else if (pass && !attended) {
		std::cout << "Warn, attendance too low.\n";
	}
	else {
		std::cout << "Fail.\n";
	}
	
	return 0;
}
