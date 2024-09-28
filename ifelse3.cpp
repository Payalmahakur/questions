#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num == 0) {
        cout << "The number is Zero." << endl;
    } else {
        if (num > 0) {
            cout << "The number is Positive." << endl;
        } else {
            cout << "The number is Negative." << endl;
        }

        if (num % 2 == 0) {
            cout << "The number is Even." << endl;
        } else {
            cout << "The number is Odd." << endl;
        }
    }

    return 0;
}
