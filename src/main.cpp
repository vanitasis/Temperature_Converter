#include <iostream>
#include "converter.hpp"

using namespace std ;

class convertermenu {
public :

struct {
    int opsitemp, opsi, num ;
    char confirm ;
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

void celcius() {

    double value ;

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
        cin >> opsi ;

        if (opsi == 1)
        {
            cout << "enter celcius : " ;
            cin >> value ;

            double result = converter::CtoF(value);
            cout << "Result: " << result << " F" << endl;
        }else if (opsi == 2)
        {
            cout << "enter celcius : " ;
            cin >> value ;

            double result = converter::CtoR(value);
            cout << "Result : " << result << "R" << endl;
        }else if(opsi == 3) {

            cout << "enter celcius : " ;
            cin >> value ;

            double result = converter::CtoK(value);
            cout << "Result : " << result << "K" << endl;
        }else if (opsi == 4) 
        {
            input() ;
        }
        
        
        cout << "continue count ? [y/n] : " ;
        cin >> confirm ;

        if (confirm == 'y')
        {
            celcius() ;
        }else if (confirm = 'n')
        {
            input() ;
        }
        
}

void fahrenheit() {

    double value ;

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
        cin >> opsi ;

        if (opsi == 1)
        {
            cout << "enter fahrenheit: " ;
            cin >> value ;

            double result = converter::FtoC(value);
            cout << "Result: " << result << " C" << endl;
        }else if (opsi == 2)
        {
            cout << "enter fahrenheit : " ;
            cin >> value ;

            double result = converter::FtoR(value);
            cout << "Result : " << result << "R" << endl;
        }else if(opsi == 3) {

            cout << "enter fahrenheit: " ;
            cin >> value ;

            double result = converter::FtoK(value);
            cout << "Result : " << result << "K" << endl;
        }else if (opsi == 4) 
        {
            input() ;
        }
        
        
        cout << "continue count ? [y/n] : " ;
        cin >> confirm ;

        if (confirm == 'y')
        {
            fahrenheit() ;
        }else if (confirm = 'n')
        {
            input() ;
        }
}

void reamur() {

    double value ;

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
        cin >> opsi ;

        if (opsi == 1)
        {
            cout << "enter reamur : " ;
            cin >> value ;

            double result = converter::RtoC(value);
            cout << "Result: " << result << " C" << endl;
        }else if (opsi == 2)
        {
            cout << "enter reamur : " ;
            cin >> value ;

            double result = converter::RtoF(value);
            cout << "Result : " << result << "F" << endl;
        }else if(opsi == 3) {

            cout << "enter reamur : " ;
            cin >> value ;

            double result = converter::RtoK(value);
            cout << "Result : " << result << "K" << endl;
        }else if (opsi == 4) 
        {
            input() ;
        }
        
        
        cout << "continue count ? [y/n] : " ;
        cin >> confirm ;

        if (confirm == 'y')
        {
            reamur() ;
        }else if (confirm = 'n')
        {
            input() ;
        }
}

void kelvin() {

    double value ;

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
        cin >> opsi ;

        if (opsi == 1)
        {
            cout << "enter kelvin : " ;
            cin >> value ;

            double result = converter::KtoC(value);
            cout << "Result: " << result << " C" << endl;
        }else if (opsi == 2)
        {
            cout << "enter kelvin : " ;
            cin >> value ;

            double result = converter::KtoF(value);
            cout << "Result : " << result << "F" << endl;
        }else if(opsi == 3) {

            cout << "enter reamur : " ;
            cin >> value ;

            double result = converter::KtoR(value);
            cout << "Result : " << result << "R" << endl;
        }else if (opsi == 4) 
        {
            input() ;
        }
        
        
        cout << "continue count ? [y/n] : " ;
        cin >> confirm ;

        if (confirm == 'y')
        {
            kelvin() ;
        }else if (confirm = 'n')
        {
            input() ;
        }
}

};

int main() {

    convertermenu temp ;
    temp.input() ;
    
    while (true)
    {
         if (temp.opsitemp == 1)
    {
        temp.celcius();
    }if (temp.opsitemp == 2)
    {
        temp.fahrenheit();
    }if (temp.opsitemp == 3)
    {
        temp.reamur();
    }if (temp.opsitemp == 4)
    {
        temp.kelvin();
    }else if (temp.opsitemp == 5) {
        break; 
    }
    }


    return 0;
}