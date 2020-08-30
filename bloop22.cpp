#include <iostream>
using namespace std;

void printDivisors (int n) {
    for(int i =1; i<=n; i++) {
        int mod = n % i;
        if (mod == 0) {
            cout<< i << "  ";
        }
    }
    cout<<endl;
}
int main() {
    int n;
    cout<< "Please enter a positive integer >=2: ";
    cin>>n;
    printDivisors(n);
    return 0;
}
