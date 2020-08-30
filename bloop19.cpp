#include <iostream>
#include <cmath>

using namespace std;

int floo (float x) {
    int xInt = (int) x;
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

int fib(int n){
    float dif1, dif2;
    int floor1, ceil1, round;
    const float goldrat = (1 + sqrt(5))/2;
    const float goldratin = (-1/goldrat);
    float calc;

    calc = (pow(goldrat, n) - pow(goldratin, n)) / sqrt(5);
    ceil1 = cei(calc);
    floor1 = floo(calc);
    dif1 = ceil1 - calc;
    dif2 = calc - floor1;
    if (dif1 > dif2) {
        round = floor1;
    } else if (dif1 == dif2) {
        round = ceil1;
    } else {
        round = ceil1;
    }
    calc = round;
    return calc;
}

int main() {
    int n;
    cout<< "Please enter a positive integer: " << endl;
    cin >> n;
    cout << fib(n);
    return 0;
}

// ref https://www.youtube.com/watch?v=CR-nmp97Ayo
// ref https://math.hmc.edu/funfacts/fibonacci-number-formula/#:~:text=It%20is%3A,%5D%20%2F%20Sqrt%5B5%5D.&text=phi%20%3D%20(1%20%E2%80%93%20Sqrt%5B,known%20by%20Euler%20before%20him.