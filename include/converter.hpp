#ifndef converter_hpp
#define converter_hpp

class converter {
public:

    static double CtoF (double c);
    static double CtoR (double c);
    static double CtoK (double c);

    static double FtoC (double f);
    static double FtoR (double f);
    static double FtoK (double f);

    static double RtoC (double r);
    static double RtoF (double r);
    static double RtoK (double r);

    static double KtoC (double k);
    static double KtoF (double k);
    static double KtoR (double k);

};

#endif