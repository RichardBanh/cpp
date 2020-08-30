#include <iostream>

using namespace std;

int main() {
    int i = 0;
    int howManyInt;
    cout << "Please enter a positive integer: ";
    cin >> howManyInt;
    int bas2 = 0;

    while (i < howManyInt) {
        bas2 = bas2+2;
        cout << bas2 << endl;
        i++;
    }
// for loop section
    bas2 = 0;
    cout << "Please enter a positive integer: ";
    cin >> howManyInt;
    for (int i = 0; i < howManyInt; i++){
        bas2 = bas2+2;
        cout << bas2 << endl;
    }

    return 0;
}
