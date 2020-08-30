#include <iostream>

using namespace std;

void spliceString (string wholeString, string stringArr[], int& spaceCount) {
    int position1;
    int position2;
    bool findSpace = true;
    int i = 1;
    while (findSpace) {
        if (i>1 && (wholeString.find(" ",(position2+3)) == (string ::npos))){
            findSpace = false;
        }
        if (i == 1) {
            position1 = 0;
            position2 = (wholeString.find(" ",i) -1);
        } else if(i == 2) {
            position1 = (wholeString.find(" ")) +1;
            position2 = (wholeString.find(" ", position1)-1);
        } else  {
            position1 = position2+2;
            position2 = wholeString.find(" ", position1)-1;
        }
        stringArr[i-1] = wholeString.substr(position1,(position2-position1+1));
        spaceCount++;
        i++;
    }
}



void wordAnalysis (string enteredString) {
    bool value = true;
    while (value){
        for( int i=0; i<(enteredString.length()); i++) {
            char letter = enteredString[i];
            int val = (int) letter;
            if ((val>=48) && (val <=57)) {
            } else if ((val<48) || (val >57)){
                value = false;
                break;
            }
            if ( (i == (enteredString.length())) && (value == true)) {
                break;
            }


        }
        break;
    }


    if (value == false) {
        cout<< enteredString << " ";
    } else {
        int length = enteredString.length();
        enteredString = "";
        for (int i = 0; i < (length); i++) {
            enteredString = enteredString + "x";
        }
        cout<< enteredString << " ";
    }

}


int main() {
    char enteredString[300];
    string stringArr[150];
    int spaceCount = 0;
    cout << "Please enter a line of text: " << endl;
    cin.getline(enteredString,2000);
    spliceString(enteredString, stringArr, spaceCount);

    for (int i = 0; i<=spaceCount; i++) {
        wordAnalysis(stringArr[i]);
    }

    return 0;
}

//https://www.geeksforgeeks.org/string-find-in-cpp/
