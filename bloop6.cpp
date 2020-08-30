#include <iostream>

using namespace std;

int main() {
    string name, status;
    int grad, current, differ;

    cout << "Please enter your name: " ;
    cin >> name;
    cout << "Please enter your graduation year: " ;
    cin >> grad;
    cout << "Please enter current year: " ;
    cin >> current;

    differ = grad - current;

    if ( current > grad ) {
        cout << "Current year is greater than your grad year.. Did you enter something wrong?";
        return 0;
    } else if ( differ > 4) {
        status = "Not in College yet";
    } else if (differ == 4) {
        status = "Freshman";
    } else if (differ == 3) {
        status = "Sophomore";
    } else if (differ == 2) {
        status = "Junior";
    } else if (differ == 1) {
        status = "Senior";
    } else if (current == grad) {
        status = "Graduated";
    }

    cout << name << ", you are a " << status;

    return 0;
}
