#ifndef ConverterInputSystem_hpp
#define ConverterInputSystem_hpp

class convertermenu {
    private :

    int opsitemp, opsi, num ;
    char confirm ;
    double celcius ;
    double fahrenheit ;
    double reamur ;
    double kelvin ;

    public :
    void input() ;
    void menucelcius() ;
    void menufahrenheit() ;
    void menureamur() ;
    void menukelvin() ;

    int getopsitemp();
};

#endif