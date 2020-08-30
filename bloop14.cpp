#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int length;
    cout<< "Please enter the length of the sequence: ";
    cin >> length;
    int array[length];
    float product = 1;
    cout << "Please enter your sequence"<< endl;
    for ( int i = 0; i <= length-1; i++) {
        cin >> array[i];
    }
    for ( int i = 0; i <= length-1; i ++ ){
        product = product*(array[i]);
    }

    float root = 1/((float) length);
    cout << "The geometric mean is: " << pow(product, root) << endl;

    cout << "================Part 2==================="<< endl;
    int i = 0;
    int count = 0;
    product = 1;
    int negWatch = 1;
    int array2[]={};
    cout << "Please ent a non-empty sequence of positive integers, each one in a separate line."<< endl;
    cout<< "End your sequence by typing -1: "<< endl;
    while ( negWatch > 0) {
        cin >> array2[i];
        negWatch = negWatch*(array2[i]);
        i++;
        count++;
    }
    // minus 1 because it is counted in the while block for the negative one entry.. need to subtract one
    for ( int i = 0; i <= (count - 1 ) ; i ++ ){
        product = product*(array2[i]);
    }
    product = (-1) * (product);
    root = 1 /((float)(count - 1));
    float geo = pow(product, root);
    cout << "The geometric mean is: " << geo;


    return 0;
}


// need to refactor2020-08-05