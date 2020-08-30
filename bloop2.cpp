#include <iostream>

using namespace std;

int main() {
    int dollars;
    int cents;
    int totalCents;
    int quart;
    int dimes;
    int nickles;
    int pennies;
    cout << "Please enter number of dollars followed by a space then cents:";
    cin >> dollars >> cents;
    dollars = dollars * 100;
    totalCents = dollars + cents;
    quart = totalCents / 25;
    totalCents = totalCents - (quart * 25);
    dimes = totalCents / 10;
    totalCents = totalCents - (dimes * 10);
    nickles = totalCents / 5;
    totalCents = totalCents - (nickles * 5);
    pennies = totalCents;
    cout << "Number of quarters: " << quart ;
    cout << "\nNumber of dimes: " << dimes;
    cout << "\nNumber of nickles: " << nickles;
    cout << "\nNumber of pennies: " << pennies;
    return 0;
}
