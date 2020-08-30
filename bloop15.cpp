#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Please enter n lines: "<< endl;
    cin >> n;

    for (int i = n; i >=1; i-=1){
        int stars = (2*i)-1;

        for( int space = 0; space < n - i; space += 1) {
            cout << " ";
        }
        for (int starcount = i; starcount <= stars; starcount+=1) {
            cout<< "*";
        }
        for (int starcount = 0; starcount < i -1;starcount+=1){
            cout << "*";
        }

        cout<< endl;
    }

    for (int i = 1; i <= n; i+=1){
        int stars = 2*(i-1) + 1;
        for( int space = 0; space < n - i; space += 1) {
            cout << " ";
        }
        for (int starcount = 1; starcount <= stars; starcount+=1){
            cout<< "*";
        }
        cout << endl;
    }

    return 0;
}


///Reference https://www.programiz.com/cpp-programming/examples/pyramid-pattern