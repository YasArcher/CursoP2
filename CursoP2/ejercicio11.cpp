#include <iostream>
#include <iomanip>
using namespace std;

void lab_2_0_3() {
    float grossprice, taxrate, netprice, taxvalue;

    cin >> grossprice;
    cin >> taxrate;

    if (grossprice > 0 && taxrate > 0 && taxrate < 100) {
        netprice = grossprice / (1 + (taxrate / 100));
        taxvalue = grossprice - netprice;

        cout << fixed << setprecision(4);
        cout << "Net price: " << netprice << endl;
        cout << "Tax value: " << taxvalue << endl;
    }
    else {
        cout << "Invalid input" << endl;
    }
}
