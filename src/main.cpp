/*
 * Temperature Checker
 * Copyright (c) 2026 vanitasis
 * Licensed under the MIT License.
 */

#include <iostream>
#include <vector>

using namespace std ;

int opsi; 
int opsicelcius ;
char confirm ;

class Konversi {

    public :
    
    struct temperatur
    {
        int Dcelcius ;
        int Dfahrenheit ;
        int Dreamur ;
        int Dkelvin ;
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

        if (opsicelcius == 1)
        {
            cout << "Enter degrees Celsius: " ;
            cin >> temp.Dcelcius ;

            cout << "result : " 
                 << temp.Dcelcius * 9 / 5 + 32 
                 << "° Fahrenheit"  << endl ;
        }

        cout << "continue ? y/n : " ;
        cin >> confirm ;

    while (confirm == 'y')
    {
    cout << "=====================" << endl ;
        cout << "CHOSE OPERATION : " << endl ;
        cout << "1.FAHRENHEIT" << endl ;
        cout << "2.REAMUR" << endl ;
        cout << "3.KELVIN" << endl ;
        cin >> opsicelcius ;
        
        temperatur temp ;

        if (opsicelcius == 1)
        {
            cout << "Enter degrees Celsius: " ;
            cin >> temp.Dcelcius ;

            cout << "result : " 
                 << temp.Dcelcius * 9 / 5 + 32 
                 << "° Fahrenheit"  << endl ;
        }

        cout << "continue ? y/n : " ;
        cin >> confirm ;
    }

    if (confirm == 'n')
    {
        input(); 
    }
        
    }
    
};

int main() {
    Konversi convers ;
    convers.input() ;

    if (opsi == 1)
    {
        convers.Celcius() ;
    }else if (opsi == 5) {
        system("clear") ;
    }
    
    
    return 0 ;
}