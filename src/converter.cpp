#include <iostream>
#include "converter.hpp"
#include "ConverterInputSystem.hpp"

const double k = 273.15 ;

double converter::CtoF(double c) { return c * 9.0/5 + 32; }
double converter::CtoR(double c) { return c * 4.0/5; }
double converter::CtoK(double c) { return c + k; }

double converter::FtoC(double f) { return (f - 32) * 5.0/9; }
double converter::FtoR(double f) { return (f - 32) * 4.0/9; }
double converter::FtoK(double f) { return FtoC(f) + k; }

double converter::RtoC(double r) { return r * 5.0/4; }
double converter::RtoF(double r) { return r * 9.0/4 + 32; }
double converter::RtoK(double r) { return RtoC(r) + k; }

double converter::KtoC(double k) { return k - k; }
double converter::KtoF(double k) { return KtoC(k) * 9.0/5 + 32; }
double converter::KtoR(double k) { return KtoC(k) * 4.0/5; }

