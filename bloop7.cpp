#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, result1, result2, discriminate;
    cout << "Please enter value of a: ";
    cin >> a;
    cout << "Please enter value of b: ";
    cin >> b;
    cout << "Please enter value of c: ";
    cin >> c;
    result1 = ((-b) + sqrt( (b*b)-(4*a*c))) / (2*a);
    result2 = ((-b) - sqrt( (b*b)-(4*a*c))) / (2*a);
    discriminate = (b*b) - (4*a*c);

    if (discriminate > 0){
        cout << "This equation has two solutions x=" << result1 << " x=" << result2;
        return 0;
    }
    else if (discriminate == 0) {
        if ( (a == 0) && (b == 0) && (c != 0)) {
            cout << "No Solution";
            return 0;
        } else if ( (a == 0) && (b == 0) && (c == 0)) {
            cout << "Infinite number of solutions";
            return 0;
        }
        cout << "This equation has a single real solution x=" << result1;
        return 0;
    }
    else if (discriminate < 0) {
        cout << "Has no real solution";
        return 0;
    }

}


// reference material https://math.stackexchange.com/questions/3285538/roots-of-quadratic-equation-ax2bxc-at-infinity
// reference material https://www.mathsisfun.com/quadratic-equation-solver.html