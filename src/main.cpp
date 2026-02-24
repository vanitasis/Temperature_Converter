/*
 * Temperature Checker
 * Copyright (c) 2026 Mie
 * Licensed under the MIT License.
 */

#include <iostream>
#include <vector>

using namespace std ;

int opsi; 
int opsicelcius ;

class Konversi {

    public :
    
    struct temperatur
    {
        int Dcelcius ;
        int Dfahrenheit ;
        int Dreamur ;
        int Dkelvin ;
    };

    void tempimage() {
        cout << "+=========================================+" << endl;
        cout << "||  ********* ****** ***   *** *******   ||" << endl;
        cout << "||  ********* ***    **** **** ***   **  ||" << endl;
        cout << "||     ***    ****** *** * *** *******   ||" << endl;
        cout << "||     ***    ***    ***   *** ***       ||" << endl;
        cout << "||  ********* ****** ***   *** ***       ||" << endl;
        cout << "+=========================================+" << endl;
    }

    void input() {
        
        cout<< "CHOSE OPERATION : " << endl ;
        cout << "1.CELCIUS" << endl ;
        cout << "2.FAHRENHEIT" << endl ;
        cout << "3.REAMUR" << endl ;
        cout << "4.KELVIN" << endl ;
        cin >> opsi ;

    }

    void Celcius() {

        cout << "=====================" << endl ;
        cout << "CHOSE OPERATION : " << endl ;
        cout << "1.FAHRENHEIT" << endl ;
        cout << "2.REAMUR" << endl ;
        cout << "3.KELVIN" << endl ;
        cin >> opsicelcius ;
        
        temperatur temp ;

        cout << "masukan derajat celcius : " ;
        cin >> temp.Dcelcius ;

    }
    
};

int main() {
    Konversi convers ;
    convers.tempimage() ;
    
    return 0 ;
}