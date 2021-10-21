#include <iostream>
#include <math.h>

using namespace std;

int main()
{

	double num1, num2, numspc, result; /*num1 and num2 are used for simple and advanced operations whereas numspc is used for advanced operations that only require one number.*/
	char answer, oprt; /*the answer variable is to tell cppcalc if the user wants to do a simple or advanced operation*/

	cout << "cppcalc v1.0 x64 - Made by karak21\n\n";
	cout << "Welcome to cppcalc. If you want to do advanced math functions, enter y. To do simple math functions, enter n.\n\n>> ";
	cin >> answer;

	if (answer == 'y') {
		cout << "You selected: Advanced operations.\n";
		cout << "Select the operation that you want to do:\n\n 1. Square Root\n 2. Round\n 3. Exponent\n 4. Square\n 5. Cube\n 6. Tangent\n 7. Logmarithm\n 8. Power\n 9. Sine\n 10. Cosine\n 11. Truncation\n\n>> ";
		int aopselected; /*aopselected means "advanced operation selected". it accepts values from 1 to 6.*/
		cin >> aopselected;
		
		if (aopselected == 1) {
			cout << "You selected: Square root. Please enter a number:\n>> ";
			cin >> numspc;
			result = sqrt(numspc);
		}
		else if (aopselected == 2) {
			int rtsel; /*rtsel means round type selected*/
			cout << "You selected: Round. Please select what type of rounding you would like to do:\n\n";
			cout << " 1. Round up\n 2. Round down\n 3. Round normally\n>>";
			cin >> rtsel;
			cout << "Please enter a number:\n>>";
			cin >> numspc;
			if (rtsel == 1) {
				result = ceil(numspc);
			}
			else if (rtsel == 2) {
				result = floor(numspc);
			}
			else if (rtsel == 3) {
				result = round(numspc);
			}
		}
		else if (aopselected == 3) {
			cout << "You selected: Exponent. Please enter a number:\n>> ";
			cin >> numspc;
			result = exp(numspc);
		}
		else if (aopselected == 4) {
			cout << "You selected: Square. Please enter a number:\n>> ";
			cin >> numspc;
			result = numspc * numspc;
		}
		else if (aopselected == 5) {
			cout << "You selected: Cube. Please enter a number:\n>> ";
			cin >> numspc;
			result = numspc * numspc * numspc;
		}
		else if (aopselected == 6) {
			cout << "You selected: Tangent. Please enter a number:\n>> ";
			cin >> numspc;
			result = tan(numspc);
		}
		else if (aopselected == 7) {
			cout << "You selected: Logmarithm. Please enter a number:\n>> ";
			cin >> numspc;
			result = log(numspc);
		}
		else if (aopselected == 8) {
			cout << "You selected: Power. Please enter the base number:\n>> ";
			cin >> num1;
			cout << "Please enter the power:";
			cin >> num2;
			result = pow(num1, num2);
		}
		else if (aopselected == 9) {
			cout << "You selected: Sine. Please enter a number:\n>> ";
			cin >> numspc;
			result = sin(numspc);
		}
		else if (aopselected == 10) {
			cout << "You selected: Cosine. Please enter a number:\n>> ";
			cin >> numspc;
			result = cos(numspc);
		}
		else if (aopselected == 11) {
			cout << "You selected: Truncation. Please enter a number:\n>> ";
			cin >> numspc;
			result = trunc(numspc);
		}
		else {
			cout << aopselected << " is not a valid option.\n>> ";
			result = 0;
		}
	}
	else if (answer == 'n') {
		cout << "You selected: Simple operations. Please enter your first number:\n>> ";
		cin >> num1;
		cout << "Now, enter your second number:\n>> ";
		cin >> num2;
		cout << "Now, enter your operator. Valid operators: + - * / \n>> ";
		cin >> oprt;


		if (oprt == '+') {
			result = num1 + num2;
		}
		else if (oprt == '-') {
			result = num1 - num2;
		}
		else if (oprt == '*') {
			result = num1 * num2;
		}
		else if (oprt == '/') {
			result = num1 / num2;
		}
		else {
			cout << oprt << " is not a valid operator.\n";
			result = 0;
		}

	}
	else {
		cout << "This is not a valid answer.\n";
		result = 0;
	}


	/*Display the result*/

	cout << "Your result is: " << result << "\n";
	return 0;
}
