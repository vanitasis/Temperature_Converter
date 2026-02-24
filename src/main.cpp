/*
 * Temperature Checker
 * Copyright (c) 2026 vanitasis
 * Licensed under the MIT License.
 */

#include <iostream>
#include <vector>

using namespace std ;

int opsi; 
double opsicelcius ;
double opsifahrenheit ;
double opsireamur ;
double opsikelvin ;
char confirm ;
const double kelvin = 273.15 ;

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

        cout << "+====================+" << endl;
        cout << "||   *********  **  ||" << endl;
        cout << "||  *********** **  ||" << endl;
        cout << "||  ***             ||" << endl;
        cout << "||  ***             ||" << endl;
        cout << "||  ***********     ||" << endl;
        cout << "||   *********      ||" << endl;
        cout << "+====================+" << endl;

        cout << "=====================" << endl ;
        cout << "CHOSE OPERATION : " << endl ;
        cout << "1.FAHRENHEIT" << endl ;
        cout << "2.REAMUR" << endl ;
        cout << "3.KELVIN" << endl ;
        cout << "4.BACK" << endl ;
        cin >> opsicelcius ;
        
        temperatur temp ;

        if (opsicelcius == 1)
        {
            cout << "Enter degrees Celsius: " ;
            cin >> temp.Dcelcius ;

            cout << "result : " 
                 << temp.Dcelcius * 9 / 5 + 32 
                 << "° Fahrenheit"  << endl ;
        }else if (opsicelcius == 2)
        {
            cout << "Enter degrees Celsius: " ;
            cin >> temp.Dcelcius ;

            cout << "result : " 
                 << temp.Dcelcius * 4 / 5 
                 << "° reamur"  << endl ;
        }else if (opsicelcius == 3)
        {
            cout << "Enter degrees Celsius: " ;
            cin >> temp.Dcelcius ;

            cout << "result : " 
                 << temp.Dcelcius + kelvin 
                 << "° kelvin"  << endl ;
        }else if(opsicelcius == 4) {
            input() ;
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
        cout << "4.back" << endl ;
        cin >> opsicelcius ;
        
        temperatur temp ;

        if (opsicelcius == 1)
        {
            cout << "Enter degrees Celsius: " ;
            cin >> temp.Dcelcius ;

            cout << "result : " 
                 << temp.Dcelcius * 9 / 5 + 32 
                 << "° Fahrenheit"  << endl ;
        }else if (opsicelcius == 2)
        {
            cout << "Enter degrees Celsius: " ;
            cin >> temp.Dcelcius ;

            cout << "result : " 
                 << temp.Dcelcius * 4 / 5 
                 << "° reamur"  << endl ;
        }else if (opsicelcius == 3)
        {
            cout << "Enter degrees Celsius: " ;
            cin >> temp.Dcelcius ;

            cout << "result : " 
                 << temp.Dcelcius + kelvin 
                 << "° kelvin"  << endl ;
        }else if(opsicelcius == 4) {
            input() ;
        }if (confirm == 'n')
        {
        input(); 
        }

        cout << "continue program ? y/n : " ;
        cin >> confirm ;
    }

        
    }

    void fahrenheit() {

        cout << "+====================+" << endl;
        cout << "||  ************  ** ||" << endl;
        cout << "||  ***********   ** ||" << endl;
        cout << "||  ***              ||" << endl;
        cout << "||  ********         ||" << endl;
        cout << "||  ***              ||" << endl;
        cout << "||  ***              ||" << endl;
        cout << "+====================+" << endl;

        cout << "=====================" << endl ;
        cout << "CHOSE OPERATION : " << endl ;
        cout << "1.CELCIUS" << endl ;
        cout << "2.REAMUR" << endl ;
        cout << "3.KELVIN" << endl ;
        cout << "4.BACK" << endl ;
        cin >> opsifahrenheit ;
        
        temperatur temp ;

        if (opsifahrenheit == 1)
        {
            cout << "Enter degrees Fahrenheit: " ;
            cin >> temp.Dfahrenheit ;

            cout << "result : " 
                 << (temp.Dfahrenheit - 32) * 5/9
                 << "° celcius"  << endl ;
        }else if (opsifahrenheit == 2)
        {
            cout << "Enter degrees fahrenheit: " ;
            cin >> temp.Dfahrenheit ;

            cout << "result : " 
                 << (temp.Dfahrenheit - 32) * 4 / 9 
                 << "° reamur"  << endl ;
        }else if (opsifahrenheit == 3)
        {
            cout << "Enter degrees fahrenheit: " ;
            cin >> temp.Dfahrenheit ;

            cout << "result : " 
                 << (temp.Dfahrenheit - 32 ) * 5/9 + kelvin 
                 << "° kelvin"  << endl ;
        }else if (opsifahrenheit == 4) {
            input() ;
        }
       

        cout << "continue ? y/n : " ;
        cin >> confirm ;

         if (confirm == 'n')
    {
        input(); 
    }

    while (confirm == 'y')
    {
    cout << "=====================" << endl ;
        cout << "CHOSE OPERATION : " << endl ;
        cout << "1.FAHRENHEIT" << endl ;
        cout << "2.REAMUR" << endl ;
        cout << "3.KELVIN" << endl ;
        cout << "4.back" << endl ;
        cin >> opsicelcius ;
        
        temperatur temp ;

        if (opsifahrenheit == 1)
        {
            cout << "Enter degrees Fahrenheit: " ;
            cin >> temp.Dfahrenheit ;

            cout << "result : " 
                 << (temp.Dfahrenheit - 32) * 5/9
                 << "° celcius"  << endl ;
        }else if (opsifahrenheit == 2)
        {
            cout << "Enter degrees fahrenheit: " ;
            cin >> temp.Dcelcius ;

            cout << "result : " 
                 << (temp.Dfahrenheit - 32) * 4 / 5 
                 << "° reamur"  << endl ;
        }else if (opsifahrenheit == 3)
        {
            cout << "Enter degrees fahrenheit: " ;
            cin >> temp.Dfahrenheit ;

            cout << "result : " 
                 << (temp.Dfahrenheit - 32 ) * 5/9 + kelvin 
                 << "° kelvin"  << endl ;
        }else if(opsifahrenheit == 4) {
            input() ;
        }else if (confirm == 'n')
        {
        input(); 
        }

        cout << "continue ? y/n : " ;
        cin >> confirm ;
    
        
    }


    }
    void reamur() {

        cout << "+====================+" << endl;
        cout << "||  ********  **    ||" << endl;
        cout << "||  ***   *** **    ||" << endl;
        cout << "||  ***    **       ||" << endl;
        cout << "||  ********        ||" << endl;
        cout << "||  ***   ***       ||" << endl;
        cout << "||  ***     ***     ||" << endl;
        cout << "+====================+" << endl;

        cout << "=====================" << endl ;
        cout << "CHOSE OPERATION : " << endl ;
        cout << "1.CELCIUS" << endl ;
        cout << "2.FAHRENHEIT" << endl ;
        cout << "3.KELVIN" << endl ;
        cout << "4.BACK" << endl ;
        cin >> opsireamur ;
        
        temperatur temp ;

        if (opsireamur == 1)
        {
            cout << "Enter degrees reamur: " ;
            cin >> temp.Dreamur ;

            cout << "result : " 
                 << temp.Dreamur * 5/4
                 << "° celcius"  << endl ;
        }else if (opsireamur == 2)
        {
            cout << "Enter degrees reamur: " ;
            cin >> temp.Dreamur ;

            cout << "result : " 
                 << (temp.Dreamur * 9/4 ) + 32 
                 << "° fahrenheit"  << endl ;
        }else if (opsireamur == 3)
        {
            cout << "Enter degrees reamur: " ;
            cin >> temp.Dreamur ;

            cout << "result : " 
                 << (temp.Dreamur * 5/4 ) + kelvin 
                 << "° kelvin"  << endl ;
        }else if(opsireamur == 4) {
            input() ;
        }

        cout << "continue ? y/n : " ;
        cin >> confirm ;

        
    while (confirm == 'y')
    {
        cout << "=====================" << endl ;
        cout << "CHOSE OPERATION : " << endl ;
        cout << "1.CELCIUS" << endl ;
        cout << "2.FAHRENHEIT" << endl ;
        cout << "3.KELVIN" << endl ;
        cout << "4.BACK" << endl ;
        cin >> opsireamur ;
    
        if (opsireamur == 1)
        {
            cout << "Enter degrees reamur: " ;
            cin >> temp.Dreamur ;

            cout << "result : " 
                 << temp.Dreamur * 5/4
                 << "° celcius"  << endl ;
        }else if (opsireamur == 2)
        {
            cout << "Enter degrees reamur: " ;
            cin >> temp.Dreamur ;

            cout << "result : " 
                 << (temp.Dreamur * 9/4 ) + 32 
                 << "° fahrenheit"  << endl ;
        }else if (opsireamur == 3)
        {
            cout << "Enter degrees reamur: " ;
            cin >> temp.Dreamur ;

            cout << "result : " 
                 << (temp.Dreamur * 5/4 ) + kelvin 
                 << "° kelvin" << endl ;
        }else if(opsireamur == 4) {
            input() ;
        }
        cout << "continue ? y/n : " ;
        cin >> confirm ;
         if (confirm == 'n')
    {
        input(); 
    }
    }
}
    void Kelvin() {

        cout << "+====================+" << endl;
        cout << "||  ***    *** **   ||" << endl;
        cout << "||  ***   ***  **   ||" << endl;
        cout << "||  *** ***         ||" << endl;
        cout << "||  ********        ||" << endl;
        cout << "||  ***   ***       ||" << endl;
        cout << "||  ***     ***     ||" << endl;
        cout << "+====================+" << endl;

        cout << "=====================" << endl ;
        cout << "CHOSE OPERATION : " << endl ;
        cout << "1.CELCIUS" << endl ;
        cout << "2.FAHRENHEIT" << endl ;
        cout << "3.REAMUR" << endl ;
        cout << "4.BACK" << endl ;
        cin >> opsikelvin ;
        
        temperatur temp ;

        if (opsikelvin == 1)
        {
            cout << "Enter degrees kelvin: " ;
            cin >> temp.Dkelvin ;

            cout << "result : " 
                 << temp.Dkelvin - kelvin
                 << "° celcius"  << endl ;
        }else if (opsikelvin == 2)
        {
            cout << "Enter degrees kelvin: " ;
            cin >> temp.Dkelvin ;

            cout << "result : " 
                 << (temp.Dkelvin - kelvin) *9/5 + 32 
                 << "° fahrenheit"  << endl ;
        }else if (opsikelvin== 3)
        {
            cout << "Enter degrees kelvin: " ;
            cin >> temp.Dkelvin ;

            cout << "result : " 
                 << (temp.Dkelvin - kelvin) * 0.8 
                 << "° reamur"  << endl ;
        }else if(opsikelvin == 4) {
            input() ;
        }
        

        cout << "continue ? y/n : " ;
        cin >> confirm ;
         if (confirm == 'n')
    {
        input(); 
    }

    while (confirm == 'y')
    {
        cout << "=====================" << endl ;
        cout << "CHOSE OPERATION : " << endl ;
        cout << "1.CELCIUS" << endl ;
        cout << "2.FAHRENHEIT" << endl ;
        cout << "3.REAMUR" << endl ;
        cout << "4.BACK" << endl ;
        cin >> opsikelvin ;
    
        if (opsikelvin == 1)
        {
            cout << "Enter degrees kelvin: " ;
            cin >> temp.Dkelvin ;

            cout << "result : " 
                 << temp.Dkelvin - kelvin
                 << "° celcius"  << endl ;
        }else if (opsikelvin == 2)
        {
            cout << "Enter degrees kelvin: " ;
            cin >> temp.Dkelvin ;

            cout << "result : " 
                 << (temp.Dkelvin - kelvin) *9/5 + 32 
                 << "° fahrenheit"  << endl ;
        }else if (opsikelvin== 3)
        {
            cout << "Enter degrees kelvin: " ;
            cin >> temp.Dkelvin ;

            cout << "result : " 
                 << (temp.Dkelvin - kelvin) * 0.8 
                 << "° reamur"  << endl ;
        }else if(opsikelvin == 4) {
            input() ;
        }
    }
    }
    
};

int main() {
    Konversi convers ;
    convers.input() ;

    if (opsi == 1)
    {
        convers.Celcius() ;
    }else if (opsi == 2)
    {
        convers.fahrenheit();
    }else if (opsi == 3)
    {
        convers.reamur() ;

    }else if (opsi == 4) {
        convers.Kelvin() ;
    }
    else if(opsi == 5) {
        system("clear") ;
    }
    
    
    return 0 ;
}