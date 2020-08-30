#include <iostream>

using namespace std;
int main() {
    string Last_Name, First_name, Middle_Initial;
    char stringArray[45];
    cout<< "Please enter name: ";
    cin>> First_name>>Middle_Initial>>Last_Name;
    Middle_Initial = Middle_Initial.substr(0,1) + ".";
    cout<< Last_Name << ", " << First_name<< " " << Middle_Initial;

    return 0;
}
