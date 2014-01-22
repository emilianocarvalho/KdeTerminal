#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv) {
  
    int res = 0, num1 = 5, num2 = 2, vlr;

    float vlr2;
    char vlr3;
    bool vlr4;
    string vlr5;

    num1++;

    cout << "Número 1: " << num1 << endl;    
    cout << "Vlr não inicializado: " << vlr << endl;    

    vlr++;

    cout << "Vlr não inicializado e incrementado: " << vlr << endl;    
    cout << "Vlr2 não inicializado: " << vlr2 << endl;    
    cout << "Vlr3 não inicializado: " << vlr3 << endl;    
    cout << "Vlr4 não inicializado: " << vlr4 << endl;    
    cout << "Vlr5 não inicializado: " << vlr5 << endl;    
    
    res = num1 - num2;
    
    cout << "Resultado: " << res << endl;
    
    cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
    
    const double phi = 3.1415, raio = 2;
    float s, p;

    // s = pi * r^²
    // p = 2 * pi * r
    s = phi * (raio * raio);
    p = 2 * phi * raio;
    
    cout << "S = Pi * raio² -> " << s << endl;
    cout << "p = 2 * pi * raio -> " << p << endl;
        
    return 0;
}
