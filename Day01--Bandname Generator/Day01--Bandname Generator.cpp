//This program creates a username for a user from their city's name and their pet's name

#include <iostream>

using namespace std;

int main()
{
	//Bandname generator
	string city_name{}, pet_name{}, band_name{};
	char choice{};
	//ASCII art
	string bandart = R"(   ___    _        __  ___       __  _              __     ___   __    __  __  __    _   _____  ___  __  
  / __\  /_\    /\ \ \/   \   /\ \ \/_\    /\/\    /__\   / _ \ /__\/\ \ \/__\/__\  /_\ /__   \/___\/__\ 
 /__\// //_\\  /  \/ / /\ /  /  \/ //_\\  /    \  /_\    / /_\//_\ /  \/ /_\ / \// //_\\  / /\//  // \// 
/ \/  \/  _  \/ /\  / /_//  / /\  /  _  \/ /\/\ \//__   / /_\\//__/ /\  //__/ _  \/  _  \/ / / \_// _  \ 
\_____/\_/ \_/\_\ \/___,'   \_\ \/\_/ \_/\/    \/\__/   \____/\__/\_\ \/\__/\/ \_/\_/ \_/\/  \___/\/ \_/ 
                                                                                                                                      )";

	cout << bandart << endl;
	cout << "Welcome to the band name generator" << endl;
	while (!(choice == 'q')) {
		cout << "Enter the name of your city ";
		cin >> city_name;
		cout << "Enter the name of your pet ";
		cin >> pet_name;
		band_name = city_name + pet_name;
		cout << "Your band name is " << band_name << endl;
		cout << "Enter 'q' to quit the program and 'y' to continue ";
		cin >> choice;
	}


}

