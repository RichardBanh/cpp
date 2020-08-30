#include <iostream>
using namespace std;

double eEquation (int accuracy) {
 double estore = 1;
 double culmuEstore[accuracy];
 double sum;

 if (accuracy==1) {
     return (estore+1);
 }

 for (int i= 1;i<= accuracy; i++ ){
     estore = estore*i;
     culmuEstore[i-1] = (1/estore);
 }

 for (int i = 0; i<=(accuracy); i++) {
     sum= sum+culmuEstore[i];
 }

 return (sum + 1);
}

int main() {
    cout.precision(30);
    for (int n=1; n<=15; n++){
        cout << "n = "<<n<< "\t"<<eEquation(n)<<endl;
    }

    return 0;
}
