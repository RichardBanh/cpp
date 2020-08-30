#include <iostream>
using namespace std;

void reverseArray (int arr[], int arrSize) {
    int tempSingle;
    int runCount = arrSize/2;
    int lengthinit = arrSize;

    for (int i = 0, contR=(lengthinit-1); i<(runCount); i++, contR--) {
        tempSingle = arr[i];
        arr[i] = arr[contR];
        arr[contR] = tempSingle;
    }

}

void removeOdd (int arr[], int& arrSize) {
    int i;
    for ( i = 0; i< arrSize; i++) {
        if (((arr[i])%2) == 0) {
        } else {
            for( int g = i; g<=(arrSize - i); g++){
                arr[g] = arr[g+1];
            }
            arrSize--;
        }
    }
}

void splitParity (int arr[], int arrSize) {
    int i = 0;
    int j = arrSize - 1;

    while (i < j) {
        if ((arr[i] %2) != 0) {
            i++;
        }
        if ((arr[j] % 2) == 0) {
            j--;
        }
        if(((arr[i] %2) == 0) && ((arr[j] % 2) != 0)){
            int store1 = arr[i];
            int store2 = arr[j];
            arr[j] = store1;
            arr[i] = store2;
            i++;
            j--;
        }
    }


}

    void printArray(int arr[], int arrSize) {
        int i;

        for (i = 0; i < arrSize; i++) {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }

    int main() {
        int arr1[10] = {9, 2, 14, 12, -3};
        int arr1Size = 7;

        int arr2[10] = {21, 12, 6, 7, 14};
        int arr2Size = 5;

        int arr3[10] = {3, 6, 4, 1, 12};
        int arr3Size = 5;

        reverseArray(arr1, arr1Size);
        printArray(arr1, arr1Size);

        removeOdd(arr2, arr2Size);
        printArray(arr2, arr2Size);

        splitParity(arr3, arr3Size);
        printArray(arr3, arr3Size);

        return 0;
    }

//ref https://www.ibm.com/support/knowledgecenter/en/SS2LWA_12.1.0/com.ibm.xlcpp121.bg.doc/language_ref/cplr233.html
//ref https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
//ref https://stackoverflow.com/questions/879603/remove-an-array-element-and-shift-the-remaining-ones
//ref https://stackoverflow.com/questions/39546376/shift-array-elements
//ref https://www.youtube.com/watch?v=UV_NtBamWMc
