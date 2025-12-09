#include <iostream>
#include <ctime>


bool winner(int nump, int numc,bool& result);

int main() {
    int nump;
	int numc;
	int choice;
	bool result = true;
	int attempt = 0;
	int num = 0;
	srand(time(NULL));
	numc = rand() % 100 + 1;
	std::cout << "Welcome to the Number Guessing Game!" << '\n';
	std::cout << "I'm thinking of a number between 1 and 100." << '\n';
	std::cout << "Please select the difficulty level:" << '\n';
	std::cout << "1.Easy (10 chances)" << '\n';
	std::cout << "2.Medium (5 chances)" << '\n';
	std::cout << "3.Hard (3 chances)" << '\n';
	std::cin >> choice;
	if (choice == 1) {
		std::cout << "Great you have selected the easy difficulty level." << '\n';
			while (true) {
				std::cout << "Pls enter your guesse:";
				while (!(std::cin >> nump)) {
					std::cin.clear();
					std::cin.ignore(100, '\n');
					std::cout << "Invalid Guess" << '\n';
					std::cout << "Pls enter your guesse:";
				}
				winner(nump, numc, result);
				while (!(std::cin >> nump)) {
					std::cin.clear();
					std::cin.ignore(100,'\n');
					std::cout << "Invalid Guess" << '\n';
					std::cout << "Pls enter your guesse:";
				}
				while (nump > 100 || nump < 0) {
					std::cout << "please enter a number from 1 to 100:";
					std::cin >> nump;
				}
				attempt += 1;
				if (result == false) {
					std::cout << "Congratulations! You guessed the correct number in" << attempt << "attempts.";
					return 0;
				}
				if (attempt == 10) {
					std::cout << "Thanks for playing";
					return 0;
				}
			}
		
	}

	else if (choice == 2) {
		std::cout << "Great you have selected the easy medium level." << '\n';
			while (true) {
				std::cout << "Pls enter your guesse:";
				while (!(std::cin >> nump)) {
					std::cin.clear();
					std::cin.ignore(100, '\n');
					std::cout << "Invalid Guess" << '\n';
					std::cout << "Pls enter your guesse:";
				}
				while (nump > 100 || nump < 0) {
					std::cout << "please enter a number from 1 to 100:";
					std::cin >> nump;
				}
				winner(nump,numc,result);
				 attempt += 1;
				 if (result == false) {
					 std::cout << "Congratulations! You guessed the correct number in" << attempt << "attempts.";
					 return 0;
				 }
				 if (attempt == 5) {
					 std::cout << "Thanks for playing";
					 return 0;
				 }
			}
		
	}
	else if (choice == 3) {
		std::cout << "Great you have selected the hard difficulty level." << '\n';
			while (true) {
				std::cout << "Pls enter your guesse:";
				while (!(std::cin >> nump)) {
					std::cin.clear();
					std::cin.ignore(100, '\n');
					std::cout << "Invalid Guess" << '\n';
					std::cout << "Pls enter your guesse:";
				}
				
				while (nump > 100 || nump < 0) {
					std::cout << "please enter a number from 1 to 100:";
					std::cin >> nump;

				}
				
				winner(nump, numc, result);
				attempt += 1;
				if (result == false) {
					std::cout << "Congratulations! You guessed the correct number in " << attempt << " attempts.";
					return 0;
				}
				if (attempt == 3){
					std::cout << "Thanks for playing";
					return 0;
				}
			}
		
	}
	
	return 0;
}

	bool winner(int nump, int numc, bool& result){
	if (nump == numc){
		result = false;
	}
	else if (nump > numc) {
		std::cout << "The number is less than " << nump << '\n';
	}
	else {
		std::cout << "The number is greater than " << nump << '\n';
	}
	return result;
}