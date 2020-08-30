#include <iostream>

using namespace std;

void findBinaryCon (float x) {
    string binary = "";
    int xInt = (int) x;
    float xi = x;
    while (xInt> 0) {
        xi = xi/2;
        xInt = (int) xi;
        float descrim = xi - xInt;
        if (descrim==0) {
            binary = "0" + binary;
        } else {
            binary = "1" + binary;
        }
        xi = xInt;
    }
    cout << binary;
}

int main() {
    int decnum;
    string number;
    cout << "Enter decimal number: ";
    cin >> decnum;
    cout << "The binary representation of "<< decnum << " is ";
    findBinaryCon(decnum);
    return 0;
}
