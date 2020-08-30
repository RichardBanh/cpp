#include <iostream>

using namespace std;

int floo (float x) {
    int xInt = (int) x;
    //figures out if there is a decimal and decides rounding from there
    float xDec = xInt - x;
    if (xDec < 0 ) {
        xDec = xDec * (-1);
    }
    if (xDec == 0) {
        return x;
    } else if (xDec > 0) {
        if (x < 0) {
            xInt = xInt + -1;
            return xInt;
        }
        return xInt;
    }
}

int cei (float x) {
    int xInt = (int) x;
    float xDec = xInt - x;
    if (xDec < 0 ) {
        xDec = xDec * (-1);
    }
    if (xDec == 0) {
        return x;
    } else if (xDec > 0) {
        if (x > 0) {
            xInt = xInt + 1;
            return xInt;
        }
        if (x < 0) {
            return xInt;
        }
    }
}

int main() {
    float num, dif1, dif2;
    int type, floor1, ceil1, round;
    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;

    cout << "Please enter a real number:" << endl;

    cin >> num;

    cout << "Choose your rounding method:" << endl << "1. Floor round" << endl;
    cout << "2. Ceiling round" << endl <<"3. Round to the nearest whole number" << endl;

    cin >> type;

    switch (type) {
        case FLOOR_ROUND:
            floor1 = floo(num);
            cout << floor1 ;
            break;

        case CEILING_ROUND:
            ceil1 = cei(num);
            cout << ceil1;
            break;

        case ROUND:
            ceil1 = cei(num);
            floor1 = floo(num);
            dif1 = ceil1 - num;
            dif2 = num - floor1;
            if (dif1 > dif2) {
                round = floor1;
            } else if (dif1 == dif2) {
                round = ceil1;
            } else {
                round = ceil1;
            }
            cout << round;
            break;
    }
    return 0;
}
