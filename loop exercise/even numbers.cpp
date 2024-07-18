#include <iostream>

using namespace std;

int main() {
    cout << "Even numbers between 12 and 50:" << endl;

    // Loop to iterate through even numbers from 12 to 50
    for (int i = 12; i <= 50; i++) {
        if (i % 2 == 0) { // Check if the number is even
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
