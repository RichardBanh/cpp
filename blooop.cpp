#include <bits/stdc++.h>
#include <string>
using namespace std;


long repeatedString(string s, long n) {
    long int length =  s.length();
    long int multiple = (n/length);
    int mod = length % n;
    int count = 0;
    long int retNum = 0;
    for (int i=0; i<length; i++){
        if (int(s[i]) == 97 || int(s[i]) == 65){
            count ++;
        }
    }
    retNum = count * multiple;
    for(int i=0; i<=mod;i++) {
        if (int(s[i]) == 97 || int(s[i]) == 65){
            retNum = retNum +1;
        }
    }
    return retNum-1;
}

//find max and min and compare
int main()
{
    string s ="a";
    long n=1000000000000;
    long result = repeatedString(s,n);
    cout << result;
    return 0;
}

