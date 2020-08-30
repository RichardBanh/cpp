#include <iostream>
#include <string>

using namespace std;

bool isPalindrome (string str) {
    int middle;
    int length = str.size();
    bool odd = false;
    bool palin = false;

    if (length%2 > 0) {
       middle = length/2;
       middle = middle + 1;
       odd = true;
    }
    else {
        middle= length/2;
    }
    if (odd) {
        for (int i = 0, countR=(length-1); i<(middle-1); i++, countR--) {
            if (str[i] == str[countR]) {
                palin = true;
            } else {
                return false;
            }
        }
    } else {
        for (int i = 0, countR=(length-1); i<=(middle-1); i++, countR--) {
            if (str[i] == str[countR]) {
                palin = true;
            } else {
                return false;
            }
        }
    }
    return palin;
}


int main() {
    string str;
    bool response;
    cout<< "Please enter a word: ";
    cin >> str;
    response =  isPalindrome(str);
    if (response) {
        cout<< str << " is a palindrome";
    } else {
        cout << str << " is not a palindrome";
    }




    return 0;
}
