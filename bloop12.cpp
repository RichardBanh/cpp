#include <iostream>

using namespace std;

int main() {
    const float i = 1 ;
    const float v = 5 ;
    const float x = 10 ;
    const float l = 50;
    const float c = 100;
    const float d = 500;
    const float m = 1000;
    float decNum;
    float deciCal;

    string roman ;
    string repeats;

    cout << "Enter decimal number: ";
    cin >> decNum;

    const int entered = decNum;

    deciCal = (int) (decNum/m);
    decNum = decNum - (deciCal * m);
    while (deciCal > 0) {
        roman += "M";
        deciCal = deciCal - 1;
    }

    deciCal = (int) (decNum/d);

    if (deciCal>0) {
        roman = roman+"D";
        decNum = decNum - (1 * d);
    }

    deciCal = (int) (decNum/c);
    while (deciCal>0) {
        deciCal=deciCal - 1;
        if (repeats.size()<=4){
            repeats += "C";
            decNum = decNum - (1 * c);
        } else {
            break;
        }

    }
    roman += repeats;

    deciCal = (int) (decNum/l);
    if (deciCal>0) {
        roman += "L";
        decNum = decNum - (1 * l);
    }

    repeats = "";
    deciCal = (int) (decNum/x);
    while (deciCal>0) {
        if (repeats.size()<=4){
            repeats += "X";
            deciCal = deciCal -1;
            decNum = decNum - (1 * x);
        } else {
            break;
        }
    }
    roman = roman + repeats;

    deciCal = (int)(decNum/v);
    if (deciCal>0) {
        roman +="V";
        decNum = decNum - (1 * v);
    }

    repeats = "";
    deciCal = (int) (decNum/i);
    while (deciCal>0) {
        if (repeats.size()<=4){
            repeats += "I";
            deciCal = deciCal -1;
            decNum = decNum - (1);
        } else {
            break;
        }
    }
    roman = roman + repeats;

    cout << entered << " is " << roman;


    return 0;
}
