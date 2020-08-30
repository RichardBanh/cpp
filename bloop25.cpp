#include <iostream>
using namespace std;

int minInArray (int arr[], int arrSize) {
    int low = arr[0];
    for (int i=0; i<=(arrSize-1); i++) {
        if (low <= arr[i]) {

        } else {
            low = arr[i];
        }
    }
    return low;
}

int where (int arr[], int num, int arrSize) {
    for ( int i =0 ; i<=(arrSize-1); i++) {
        if (num == arr[i]) {
            cout << i << " ";
        }
    }
    cout <<endl;
}
int main() {
    int arr[19];
    cout << "Please enter 20 integers separated by a space: " << endl;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >>
    arr[5] >> arr[6] >> arr[7]>> arr[8] >> arr[9] >> arr[10] >>
    arr[11] >> arr[12] >> arr[13] >> arr[14] >> arr[15] >>
    arr[16] >> arr[17] >> arr[18] >> arr[19];
    int num = minInArray(arr,20);
    cout << "The minimum value is " << num << " and it is located in the following indices: ";
    where(arr,num,19);
    return 0;
}
