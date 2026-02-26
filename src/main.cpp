#include <iostream>
#include "converter.hpp"

using namespace std ;

int main() {

    double value;
    cout << "Enter Celsius: ";
    cin >> value;

    double result = converter::CtoF(value);

    cout << "Result: " << result << " F" << endl;

    return 0;
}