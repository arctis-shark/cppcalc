#include <iostream>
#include <math.h>
//#include <Windows.h>

/*
 - some functions and lines were commented out because I am working on this on a macbook; it doesn't process windows' commands.
 - I cleaned up the main() to make it cleaner and more concise. I recommend retrying this project using Object Orientation. Makes the main.cpp cleaner and
	it is easier to add/remove functions.
 - I didn't save the results because I made it so that the calculator can be reused until the user decides to quit.
 
 */

/* cppcalc v1.0 - Made by karak21 with the help of erik-argueta */

using std::cout;
using std::cin;
using namespace std;

// global variables so its easier to use in the functions I created. Although, I would not recommend using global variables.
double num1, num2, numspc, result; /*num1 and num2 are used for simple and advanced operations whereas numspc is used for advanced operations that only require one number.*/
char answer, oprt;
float rtsel;

void clearcp() { /*Clears the console*/
	cout << "\x1B[2J\x1B[H";
}

void welcome() {
	cout << "cppcalc v1.0 x64 - Made by karak21\n\n";
	cout << "Welcome to cppcalc. If you want to do advanced math functions, enter y.\nTo do simple math functions, enter n.\nTo quit, enter q.\n\n>> ";
}

void sqrtOperation() {
	cout << "You selected: Square root. Please enter a number:\n>> ";
	cin >> numspc;
	cout << sqrt(numspc);
}

void roundOperation() {
	cout << "You selected: Round. Please select what type of rounding you would like to do:\n\n";
	cout << " 1. Round up\n 2. Round down\n 3. Round normally\n>> ";
	cin >> rtsel;
	cout << "Please enter a number:\n>> ";
	cin >> numspc;
	if (rtsel == 1) {
		cout << ceil(numspc);
	}
	else if (rtsel == 2) {
		cout << floor(numspc);
	}
	else if (rtsel == 3) {
		cout << round(numspc);
	}
	else { cout << 0; }
}

void exponentOperation() {
	cout << "You selected: Exponent. Please enter a number:\n>> ";
	cout << numspc;
	cout << exp(numspc);
}

void squareOperation() {
	cout << "You selected: Square. Please enter a number:\n>> ";
	cin >> numspc;
	
	cout << numspc *numspc;
}

void cubeOperation() {
	cout << "You selected: Cube. Please enter a number:\n>> ";
	cin >> numspc;
	cout << numspc * numspc * numspc;
	
}

void tanOperation() {
	cout << "You selected: Tangent. Please enter a number:\n>> ";
	cin >> numspc;
	cout << tan(numspc);
}

void logOperation() {
	cout << "You selected: Logmarithm. Please enter a number:\n>> ";
	cin >> numspc;
	cout << log(numspc);
}

void powerOperation() {
	cout << "You selected: Power. Please enter the base number:\n>> ";
	cin >> num1;
	cout << "Please enter the power:";
	cin >> num2;
	cout << pow(num1, num2);
}

void sinOperation() {
	cout << "You selected: Sine. Please enter a number:\n>> ";
	cin >> numspc;
	cout << sin(numspc);
}

void cosOperation() {
	cout << "You selected: Cosine. Please enter a number:\n>> ";
	cin >> numspc;
	cout << cos(numspc);
}

void truncOperation() {
	cout << "You selected: Truncation. Please enter a number:\n>> ";
	cin >> numspc;
	cout << trunc(numspc);
}

void selectOption() {
	
	char userChoice{NULL};
	int aopselected{NULL};
	bool done = false;
	while (userChoice != 'q' || userChoice != 'Q') {
		cin >> userChoice;
		
		// enters advance math functions
		if (userChoice == 'y' || userChoice == 'Y') {
			cout << "You selected: Advanced operations.\n";
			cout << "Select the operation that you want to do:\n\n 1. Square Root\n 2. Round\n 3. Exponent\n 4. Square\n 5. Cube\n 6. Tangent\n 7. Logmarithm\n 8. Power\n 9. Sine\n 10. Cosine\n 11. Truncation\n\n>> ";
			
			while (!done) {
				cin >> aopselected;
				switch (aopselected) {
					case 1:
						sqrtOperation();
						done = true;
						break;
						
					case 2:
						roundOperation();
						done = true;
						break;
						
					case 3:
						exponentOperation();
						done = true;
						break;
					case 4:
						squareOperation();
						done = true;
						break;
					case 5:
						cubeOperation();
						done = true;
						break;
					case 6:
						tanOperation();
						done = true;
						break;
					case 7:
						logOperation();
						done = true;
						break;
					case 8:
						powerOperation();
						done = true;
						break;
					case 9:
						sinOperation();
						done = true;
						break;
					case 10:
						cosOperation();
						done = true;
						break;
					case 11:
						truncOperation();
						done = true;
						break;
						
					default:
						cout << aopselected << " is not a valid option. Please try again.\n>> ";
						break;
				}
			}
			cout << "\n\n\n\n\nIf you want to do advanced math functions, enter y.\nTo do simple math functions, enter n.\nTo quit, enter q.\n\n>> ";
		}
		
		// enters simple math functions
		else if (userChoice == 'n' || userChoice == 'N') {
			cout << "You selected: Simple operations. Please enter your first number:\n>> ";
			cin >> num1;
			cout << "Now, enter your second number:\n>> ";
			cin >> num2;
			cout << "Now, enter your operator. Valid operators: + - * / \n>> ";
			
			switch (oprt) {
				case '+':
					cout << num1 + num2;
					break;
				case '-':
					cout << num1 - num2;
					break;
				case '*':
					cout << num1 * num2;
					break;
				case '/':
					cout << num1 / num2;
				default:
					cout << oprt << " is not a valid operation. Please try again.\n\n";
			}
			
			cout << "\n\n\n\n\nIf you want to do advanced math functions, enter y.\nTo do simple math functions, enter n.\nTo quit, enter q.\n\n>> ";
		}
		
		// Confirming that the user wants to quit.
		else if (userChoice == 'q' || userChoice == 'Q') {
			char finalAnswer;
			cout << "Are you sure you want to quit? [y/n]\n>> ";
			cin >> finalAnswer;
			if (finalAnswer == 'y' || finalAnswer == 'Y') { cout << "Thank you, and goodbye! (:"; break; }
			if (finalAnswer == 'n' || finalAnswer == 'N') {
				userChoice = NULL;
				cout << "\n\n\n\n\nIf you want to do advanced math functions, enter y.\nTo do simple math functions, enter n.\nTo quit, enter q.\n\n>> ";
			}
		}
		
		else { cout << userChoice << " is not a valid choice. Please try again.\n\n"; }
		
	}
}


int main()
{
	welcome();
	selectOption();
	
	return 0;
}
