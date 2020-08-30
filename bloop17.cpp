#include <iostream>
using namespace std;



int main() {
    int posInt;
    cout << "Please enter a positive integer" << endl;
    cin >> posInt;

    for (int i=1; i<=posInt; i++){
        cout << i << "  " << i*2 <<"  " << i *3 << "  " <<i*4 <<"  " << i*5<<"  " << i*6<<"  " <<i*7<<"  " <<i*8<<"  " <<i*9<<"  " <<i*10<<endl;
    }

    //does not look like a square -_____-

    return 0;
}
