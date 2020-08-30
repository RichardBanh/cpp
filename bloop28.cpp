#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void random (int arr[]) {
    srand(time(0));
    for (int i=0; i<10; i++){
        int x1 = ((rand() % 10));
        arr[i] = x1;
    }
}


bool correct(int arr2[], int enterPin[], int correctPin[]) {
    bool correct = true;
    while (correct) {
        for (int i =0; i< 10; i++) {
            int actual[10];
            for (int g =0; g<10; g++) {
                if ( enterPin[i] == arr2[g] ) {
                    actual[i] = i;
                }
            }
            for (int c =0; c<10; c++) {
                for (int g = 0; g <6; g++) {
                    if ( actual[c] == correctPin[g] ) {
                        c=10;
                    } else if (g==5 && actual[c] != correctPin[g]) {
                        correct = false;
                    }
                }
            }
            actual[10] = {};
        }
        break;
    }
    return correct;
}

void conversionNumtoArray ( int num, int emptyArray[]) {
    int i = 0;
    while(num >0) {
        int push;
        push = num % 10;
        num = (num - push)/10;
        emptyArray[i] = push;
    }
}

int main() {
    int randomArray[10];
    random(randomArray);
    int enteredPin;
    int pinArray[10];


    //CORRECT PIN IS HERETH!
    int correctPin[10]= {3,2,2,3,1};
    for (int i =0; i<10; i++) {
        cout<< i<< " ";
    }
    cout << endl;
    for (int i =0; i<10; i++) {
        cout<< randomArray[i]<< " ";
    }
    cout << endl;
    cout << "Please enter pin: ";
    cin >> enteredPin;

    if (enteredPin>99999) {
        cout<< "PIN IS wrong";
        return 0;
    }

    conversionNumtoArray(enteredPin, pinArray);

    bool auth = correct(randomArray,pinArray, correctPin);

    if (auth) {
        cout << "PIN IS CORRECT!!";
    } else {
        cout << "PIN IS wrong";
    }
    
    return 0;
}
