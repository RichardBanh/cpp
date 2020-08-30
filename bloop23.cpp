#include <iostream>
using namespace std;


// do without pointers first
// do not need an array


int analyseDividors (int n) {

    int div[n];
    int sum;
    for ( int i = 1; i<n; i++) {
        if( (n%i) == 0) {
            div[i-1]= i;
        }
    }
    for ( int i = 0; i<=n; i++) {
        sum = sum + div[i];
    }
    return sum;
}

bool isPerfect(int num) {
    int compare = analyseDividors(num);
    if (compare == num) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int m;
    cout<< "Please enter a number >=2"<< endl;
    cin >> m;
    cout << "Perfect numbers are: ";
    for (int i=1; i <=m; i++) {
        int per = isPerfect(i);
        if (per) {
            cout << i << endl;
        }
    }

    if (m>200) {
        int divisorSum;
        bool perfect;
        for (int i=200; i<=m; i++) {
            divisorSum=analyseDividors(i);
            perfect = isPerfect(i);
            if (divisorSum < m && perfect == false) {
                if ( divisorSum==analyseDividors(divisorSum)) {
                    cout<< "Amicale numbers are: "<< endl;
                    cout << divisorSum << "  " << analyseDividors(divisorSum);
                }
            }
        }
    }

    return 0;
}

//https://www.youtube.com/watch?v=sxHng1iufQE