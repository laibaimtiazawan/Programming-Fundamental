#include <iostream>
using namespace std;
int main()
 {
    int temp;
	cout<<"Enter temperature in Celsius: ";
    cin>>temp;
	if(temp>=40)
	 {
        cout<< "It is extremely hot. Stay indoors as it could be dangerous to health.";
    }
    else if (temp >= 30 && temp <= 39)
	 {
        cout<< "It is hot. Drink plenty of water to stay hydrated.";
    }
    else if (temp >= 20 && temp <= 29)
	 {
        cout<< "The weather is pleasant and suitable for outdoor activities.";
    }
    else
	 {
        cout<< "It is cold. Wear warm clothes to stay comfortable.";
    }
}