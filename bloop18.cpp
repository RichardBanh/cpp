#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int x1, min= 1, max=100;
    int guessChance = 5;
    int guessnum;
    string bigOrSmall;

    srand(time(0));
    x1 = (rand() % 100)+1;

    cout<< "I thought of a number between 1 and 100! Try to guess it."<<endl;
    while(guessnum != x1) {
        cout<< "Range: ["<< min <<", " <<  max<< "], number of guesses left:" << guessChance << endl;
        cout<< "Your guess: ";
        cin>> guessnum;

        if (guessnum > x1) {
            bigOrSmall = "smaller";
            max = guessnum - 1;
        } else if (guessnum < x1){
            bigOrSmall = "bigger";
            min = guessnum + 1;
        }
        if( guessnum == x1) {
            cout<< "Congrats! You guessed my number in " << guessChance << " guesses";
            return 0;
        }
        guessChance = guessChance -1;
        if (guessnum != x1 && guessChance == 0){
            cout<< "Out of guesses! My number is " << x1;
            return 0;
        } else if (guessChance > 0) {
            cout<< "Wrong! My number is " << bigOrSmall << endl;
        }
    }

    return 0;
}
