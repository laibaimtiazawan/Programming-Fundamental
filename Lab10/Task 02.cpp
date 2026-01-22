#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    // Input from user
    cout << "Enter a number (N): ";
    cin >> N;

    // Calculate sum using for loop
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    // Output the result
    cout << "Sum of first " << N << " natural numbers is: " << sum << endl;

    return 0;
}


