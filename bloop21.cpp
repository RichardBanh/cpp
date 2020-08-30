#include <iostream>
using namespace std;

int printMonthCalender( int numOfDays, int startingDay) {
    int pushSpaces = (startingDay-1)*7, pushCount=0;
    int spaces, spaceCount=0, characterCount=0;


    cout<< "Mon    Tue    Wed    Thr    Fri    Sat    Sun"<< endl;
    if ( characterCount == 0) {
        while(pushCount < pushSpaces) {
            cout<< " ";
            pushCount++;
            characterCount++;
        }
    }
    for (int i=1; i<=numOfDays; i++) {
        cout<<i;
        if (i>9) {
            characterCount = characterCount+2;
        } else {
            characterCount++;
        }
        spaceCount=0;
        if (i>9) {
            spaces = 5;
        } else {
            spaces = 6;
        }
        while (spaceCount < spaces && characterCount<45) {
            cout << " ";
            spaceCount++;
            characterCount++;
        }
        if (i == numOfDays){
            startingDay = 45 - characterCount;
        }
        if(characterCount==45){
            cout << endl;
            characterCount = 0;
        }
    }
    if (startingDay == 3) {
        startingDay = 7;
        return startingDay;
    } else if (startingDay == 0) {
        startingDay = 1;
        return  startingDay;
    } else if (startingDay == 10 ) {
        startingDay = 6;
        return startingDay;
    } else if (startingDay == 17) {
        startingDay = 5;
        return startingDay;
    } else if (startingDay == 24){
        startingDay = 4;
        return startingDay;
    } else if (startingDay == 31) {
        startingDay = 3;
        return startingDay;
    } else if (startingDay == 38) {
        startingDay = 2;
        return startingDay;
    }

}
bool checkLeap (int year) {
    float div4 = year % 4;
    float div100 = year % 100;
    float div400 = year % 400;


    if (div400 == 0 && div100 == 0){
        return true;
    } else if (div4 == 0){
        return true;
    } else {
        return false;
    }
}
void printYearCalendar (int year, int startDay) {
    bool leap = checkLeap(year);
    char *month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    for (int i = 1; i<=12; i++ ) {
        cout<< month[i-1] << " " << year << endl;

        if (i == 1 ||  i == 3|| i == 5|| i == 7 || i == 8|| i == 10 || i == 12) {
            startDay = printMonthCalender(31,startDay);
            cout<< endl;
        } else if (leap && i == 2) {
            startDay = printMonthCalender(29, startDay);
            cout<< endl;
        } else {
            startDay = printMonthCalender(30,startDay);
            cout << endl;
        }
    }
}


int main() {
    int year, startingDay;
    cout<< "Please enter year: "<< endl;
    cin >> year;
    cout << "Please enter starting day: "<< endl;
    cin >> startingDay;
    printYearCalendar(year,startingDay);
    return 0;
}
