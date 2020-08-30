#include <iostream>
#include <cmath>

using namespace std;

float roun(float number)
{
    return floor(number * 10 + .5) / 10;
}

int main() {
    int num1;
    int num2;
    int sum;
    int sub;
    int prod;
    float divf;
    int div;
    int mod;
    cout << "Please enter two positive intergers with a space between:\n";
    cin >> num1 >> num2;
    sum = num1 + num2;
    sub = num1 - num2;
    prod = num2 * num1;
    divf = float(num1) / float(num2);
    div = num1 / num2;
    mod = num1 % num2;
    cout << num1 << " + " << num2 <<" = "<< sum << "\n";
    cout << num1 << " - " << num2 <<" = "<< sub << "\n";
    cout << num1 << " x " << num2 <<" = "<< prod << "\n";
    cout << num1 << " / " << num2 <<" = "<< roun(divf) << "\n";
    cout << num1 << " div " << num2 <<" = "<< div << "\n";
    cout << num1 << " mod " << num2 <<" = "<< mod << "\n";
    return 0;
}
