#include <iostream>
using namespace std;

int main() {
    int days;
    int hours;
    int minutes;
    int seconds;
    int days1;
    int hours1;
    int minutes1;
    cout << "Please enter the number of days John has worked: ";
    cin >> days;
    cout << "Please enter the number of hours John has worked: ";
    cin >> hours;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> minutes;
    cout << "Please enter the number of days Bill has worked: ";
    cin >> days1;
    cout << "Please enter the number of hours Bill has worked: ";
    cin >> hours1;
    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> minutes1;
    days = (days + days1) * 24 * 60 * 60;
    hours = (hours + hours1) * 60 * 60;
    minutes = ( minutes + minutes1) * 60;
    seconds = days + hours + minutes;
    days = seconds / (24 * 60 * 60);
    seconds = seconds - (days*24 * 60 * 60);
    hours = seconds / (60*60);
    seconds = seconds - (hours *60*60);
    minutes = seconds / (60);
    cout << "The total amount of time both of them worked is "<< days << " days "<< hours << " hours " << minutes << " minutes.";



    return 0;
}
