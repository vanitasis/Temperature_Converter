#include <iostream>
#include "ConverterInputSystem.hpp"
#include "converter.hpp"

using namespace std ;

void convertermenu::input() {

    while (true)
    {
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
        cin >> opsitemp;

    if (opsitemp == 1) {
        menucelcius();
    }
    else if (opsitemp == 2) {
        menufahrenheit();
    }
    else if (opsitemp == 3) {
        menureamur();
    }
    else if (opsitemp == 4) {
        menukelvin();
    }
    else if (opsitemp == 5) {
        return;
    }
    else {
        cout << "Pilihan tidak valid!" << endl;
    }
    }
    
}

void convertermenu::menucelcius() {

    bool running = true ;
    while (running)
    {
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
            running = false ;
        }else {
            cout << "invalid inpt !" << endl ;
        }
    }
}

void convertermenu::menufahrenheit() {

    bool running = true ;

    while (running)
    {
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
            running = false ;
        }
    }
}

void convertermenu::menureamur() {

    bool running = true ;
    double value ;

    while (running)
    {
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
            running = false ;
        }
    }
}

void convertermenu::menukelvin() {

    bool running = true ;
    double value ;

    while (running)
    {
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
            running = false ;
        }
    }
}