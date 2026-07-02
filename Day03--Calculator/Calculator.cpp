// Calculator.cpp : A CLI calculator project that can compute two numbers
//

#include <iostream>
using namespace std;
//Addition_function
double add_function(double num1, double num2) {
	return num1 + num2;
}
double subtract_function(double num1, double num2) {
	return num1 - num2;
}
double product_function(double num1, double num2) {
	return num1 * num2;
}
double quotient_function(double num1, double num2) {
	return num1 / num2;
}
double getnum1() {
	cout << "Enter the first number ";
	double num1;
	cin >> num1;

	return num1;
}
double getnum2() {
	cout << "Enter the second number ";
	double num2;
	cin >> num2;

	return num2;
}

int main()
{

	cout << "WELCOME TO MY CALCULATOR!" << endl;
	string user_input{};

	while (user_input !="q") {
		cout << "Enter 1.Add\n2.Subtract\n3.Multiply\n4.Divide "<<endl;
		cin >> user_input;
		
		if (user_input == "q") {
			break;
		}

		if (user_input == "1" || user_input == "2" || user_input == "3" || user_input == "4") {
			double num1{ getnum1() };
			double num2{ getnum2() };

			if (user_input == "1") {
				cout << "The sum of the two numbers is " << add_function(num1, num2) << endl;
			}
			else if (user_input == "2") {
				cout << "The difference between the two numbers is " << subtract_function(num1, num2) << endl;

			}
			else if (user_input == "3") {
				cout << "The product of the two numbers is " << product_function(num1, num2) << endl;
			}
			else if (user_input == "4") {
				cout << "The quotient of the two numbers is " << quotient_function(num1, num2) << endl;
			}

		}

		else {
			cout << "You have entered an invalid input"<<endl;
		}
		

		
		


	}
}

