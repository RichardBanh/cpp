#include <iostream>

using namespace std;

void printShiftedTriangle(int n, int m, char symbol){
    int lines = n;
    int shift = m;
    for (int i = 1; i<= lines; i+=1){
        int charactersRequired = 2*(i-1);
        for (int xSpace = 0; xSpace <= shift; xSpace++){
            cout << " ";
        }
        for (int space = 0; space < n-i; space +=1 ) {
            cout << " ";
        }
        for (int charactersCount = 0; charactersCount <= charactersRequired; charactersCount++) {
            cout << symbol;
        }
        cout << endl;
    }

}

void printPine (int triangles, char symbols) {
    int startLine = 2;
    int shift = 0;
    int triangleCount = 0;
    if (triangles>0) {
        shift = triangles - 1;
    }

    while (triangleCount < triangles) {
        for (int i = 1; i <= startLine; i+=1) {
            int charactersRequired = 2*(i-1);
            for (int xSpace = 0; xSpace <= shift; xSpace++) {
                cout << " ";
            }
            for (int space = 0; space < startLine-i; space++) {
                cout << " ";
            }
            for ( int charactersCount = 0; charactersCount <= charactersRequired; charactersCount++) {
                cout << symbols;
            }
            cout << endl;

        }
        shift = shift - 1;
        startLine = startLine + 1;
        triangleCount = triangleCount + 1;
    }
}

int main() {
    int n, m, triangles;
    char symbol, symbol2;
    cout << "Please enter number of lines: ";
    cin >> n;
    cout << "Please enter number of spaces: ";
    cin >> m;
    cout << "Please enter symbol: ";
    cin >> symbol;

    printShiftedTriangle(n,m,symbol);

    cout << "=======================Part 2=========================="<< endl;
    cout << "Please enter the number of triangles: ";
    cin >> triangles;
    cout << "Please enter symbol: ";
    cin >> symbol2;
    
    printPine(triangles,symbol2);

    return 0;
}
