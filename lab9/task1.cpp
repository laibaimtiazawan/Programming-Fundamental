#include <iostream>
using namespace std;
int main()
{
     int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Numbers from 1 to " <<a<< ": ";
    int i = 1;
    while (i <= a) {
       cout<<i;
        ++i;
    }
   
}

