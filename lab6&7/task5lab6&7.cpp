#include <iostream>
using namespace std;
int main()
 {
    int age;
    double income;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your annual income: ";
    cin >> income;
    if (age < 18) {
        cout << "You are not eligible for a loan because you are under 18 years of age." << endl;
    }
    else if (income < 30000) 
	{
        cout << "You meet the age requirement but are not eligible for a loan because your income is below $30,000." << endl;
    }
    else {
        cout << "Congratulations! You are eligible for a loan." << endl;
    }

}