#include <iostream>
#include <string>
using namespace std;
int main() 
{
    // Predefined credentials
    string correctUsername = "admin";
    string correctPassword = "12345";
 // User input
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
 // Checking conditions
    if (username == correctUsername && password == correctPassword)
    {
        cout << "Access Granted";
    }
    else if (username == correctUsername && password != correctPassword)
    {
        cout << "Wrong Password";
    }
    else
    {
        cout << "User Not Found";
    }

}