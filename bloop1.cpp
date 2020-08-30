#include <iostream>

using namespace std;

int main() {
    int quart;
    int dimes;
    int nickles;
    int pennies;
    int centTotal;
    int modal;
    cout << "Please enter number of coins. Number of quarters:";
    cin >> quart;
    cout << "Number of dimes:";
    cin >> dimes;
    cout << "Number of nickles:";
    cin >> nickles;
    cout << "Number of pennies:";
    cin >> pennies;
    quart = quart * 25;
    dimes = dimes * 10;
    nickles = nickles * 5;
    centTotal = quart + dimes + nickles + pennies;
    if (centTotal < 100) {
        modal = centTotal;
        centTotal = 0;
    }
    if (centTotal >= 100) {
        modal = centTotal % 100;
        centTotal = centTotal - modal;
        centTotal= centTotal/100;
    }
    cout << "The total is " << centTotal << " dollars and " << modal << " cents";
    return 0;

}