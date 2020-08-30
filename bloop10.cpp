#include <iostream>

using namespace std;

int main() {
    string dayof;
    int  hours, duration;
    float cost, minutes, timeofday;
    char c;

    cout << "Time of call in 24hr notation (HH:MM): ";
    cin >> hours >> c >> minutes;
    cout << "Day of call (ex. Th): ";
    cin >> dayof;
    cout << "Duration of call in minutes: ";
    cin >> duration;
    timeofday = hours + (minutes/60);

    if (dayof == "Sa" || dayof == "Su") {
        cost = .15 * duration;
    } else {
        if (timeofday > 8 && timeofday < 18) {
            cost = .40 * duration;
        } else if (timeofday <= 8){
            cost = .25 * duration;
        }
        else if (timeofday >= 18 && timeofday <= 24 ) {
            cost = .25 * duration;
        }
    }
    cout << "The cost of the call is: " << cost;


    return 0;
}

//ref for time input https://stackoverflow.com/questions/21870509/how-do-i-read-in-time-input-and-format-the-output