#include <iostream>


using namespace std;

int main() {
    float price1, price2, tax, base, priceaf, total;
    string member;
    cout << "Enter price of first item:";
    cin >> price1;
    cout << "Enter price of second item:";
    cin >> price2;
    cout << "Does customer have a club card? (Y/N):";
    cin >> member;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax:";
    cin >> tax;
    base = price2 + price1;
    if (price1 > 0 && price2 > 0) {
        if (price1 > price2) {
            price2 = price2 - (price2 * .5);
        }
        else if (price1 < price2) {
            price1 = price1 - (price1 * .5);
        }
        else if (price1 == price2) {
            price1 = price1 - (price1 * .5);
        }
        if (member == "Y" || member == "y") {
            priceaf = price1 + price2;
            priceaf = priceaf - (priceaf * .1);
            total = priceaf * ((tax/100)+1);
        }
        else if (member == "n" || member == "N") {
            priceaf = price1 + price2;
            total = priceaf * ((tax/100)+1);
        }
    }
    else if (member == "n" || member == "N") {
        priceaf = price1 + price2;
        total = priceaf * ((tax/100)+1);
    }
    else if (member == "Y" || member == "y") {
        priceaf = price1 + price2;
        priceaf = priceaf - (priceaf * .1);
        total = priceaf * ((tax/100)+1);
    }
    cout << "Base price: "<< base<< endl;
    cout << "Price after discounts: "<< priceaf<< endl;
    cout << "Total price: "<< total;
    return 0;
}
