#include <iostream>
#include "converter.hpp"

using namespace std ;

class convertermenu {
public :

struct {
    int opsitemp ;
};

void input() {
        
        cout << "+=========================================+" << endl;
        cout << "||  ********* ****** ***   *** *******   ||" << endl;
        cout << "||  ********* ***    **** **** ***   **  ||" << endl;
        cout << "||     ***    ****** *** * *** *******   ||" << endl;
        cout << "||     ***    ***    ***   *** ***       ||" << endl;
        cout << "||  ********* ****** ***   *** ***       ||" << endl;
        cout << "+=========================================+" << endl;

        cout<< "CHOSE OPERATION : " << endl ;
        cout << "1.CELCIUS" << endl ;
        cout << "2.FAHRENHEIT" << endl ;
        cout << "3.REAMUR" << endl ;
        cout << "4.KELVIN" << endl ;
        cout << "5.BACK" << endl ;
        cin >> opsitemp ;

    }


};

int main() {

    convertermenu temp ;
    temp.input() ;

    double value;
    cout << "Enter Celsius: ";
    cin >> value;

    double result = converter::CtoF(value);

    cout << "Result: " << result << " F" << endl;

    return 0;
}