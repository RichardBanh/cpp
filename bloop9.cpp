#include <iostream>

using namespace std;

int main() {
    float pounds, inches, range;
    string status;
    cout << "Please enter weight (in pounds): ";
    cin >> pounds;
    cout << "Please enter height (in inches): ";
    cin >> inches;
    pounds = pounds * .453592 ;
    inches = inches * .0254 ;
    range = pounds / (inches * inches);

    if ( range < 18.5) {
        status = "Underweight";
    } else if ( range < 25 && 18.5 <= range) {
        status = "Normal";
    } else if ( range < 30 && 25 <= range) {
        status = "Overweight";
    } else if ( range >= 30) {
        status = "Obese";
    }




    cout << "The weight status is: " << status;
    return 0;
}
