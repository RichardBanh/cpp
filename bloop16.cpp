#include <iostream>
#include <string>
using namespace std;
int main() {
    int posInt;
    cout << "Please enter a positive integer: " << endl;
    cin >> posInt;
    int storedVal = 0;
    string oddChar[5] = {"1", "3", "5", "7", "9"};
    string stringhold;


    while (storedVal < posInt) {
        storedVal = storedVal + 2;
        stringhold = to_string(storedVal);
        bool reject = false;
        for (int i = 0; i < 5; i++  ) {
            if (stringhold.find(oddChar[i]) == string::npos) {
            } else {
                reject = true;
            }
        }
        if (reject == false) {
            cout << stringhold<< endl;
        }

    }
    return 0;
}
