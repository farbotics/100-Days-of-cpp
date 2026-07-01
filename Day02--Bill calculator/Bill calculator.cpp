// Bill calculator.cpp : A program that splits the bill evenly between multiple people
//

#include <iostream>
using namespace std;

int main()
{
    float total_bill{}, tip_percent{}, tip_amount{}, amount_per_person{};
    int total_people{};
    
    cout << "Welcome to the tip calculator!\n";
    cout << "How much is the total bill $";
    cin >> total_bill;

    cout << "How much tip would you like to leave ";
    cin >> tip_percent;

    tip_amount = (tip_percent / 100.0) * total_bill;
     
    cout << "How many people to split the bill ";
    cin >> total_people;

    amount_per_person = (total_bill + tip_amount) / total_people;

    cout << "Each person is to pay $" << amount_per_person;
}

