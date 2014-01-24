#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void diversos (void);
void meses (void);
void impares (void);
void perfeitos (void);
void fatorial (void);

int main(int argc, char *argv[])
{
    int opcmnu;
 
    while (opcmnu>0) {

        cout << "Selecione a rotina |||||||||||||" << endl;
        cout << "0 Sair             |||||||||||||" << endl;
        cout << "1 Diversos         |||||||||||||" << endl;
        cout << "2 Meses do Ano     |||||||||||||" << endl;
        cout << "3 Numeros Impares  |||||||||||||" << endl;
        cout << "4 Numero Perfeitos |||||||||||||" << endl;
        cout << "5 Fatorial         |||||||||||||" << endl;
    
        cin >> opcmnu;
    
        switch (opcmnu) {
          case 1:
               diversos();
               break;
          case 2:
               meses();
               break;
          case 3:
               impares();
               break;
          case 4:
               perfeitos();
               break;
          case 5:
               fatorial();
               break;
          case 0:
               break;
          default:
               cout << "digite de 1/2 ou 0 para sair"  << endl;
               
        }     
        system("PAUSE");
        system("cls");        

    }
    
    return EXIT_SUCCESS;
}


void diversos (void) {
    cout << "|||||||||||||||||||||||||||||||||||||||||||||" << endl;
    
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
        
}

void meses (void){
    cout << "|||||||||||||||||||||||||||||||||||||||||||||" << endl;

    int mes;
    cout << "Meses do ano ||||||||||>" << endl;
    cout << "digite de 1 a 12 ||||||>" << endl;
    cin >> mes;

    switch (mes) {
    case 1:
       cout << "Janeiro" << endl;
       break;
    case 2:
       cout << "Fevereiro" << endl;
       break;
    case 3:
       cout << "Março" << endl;
       break;
    case 4:
       cout << "Abril" << endl;
       break;
    case 5:
       cout << "Maio" << endl;
       break;
    case 6:
       cout << "Junho" << endl;
       break;
    case 7:
       cout << "Julho" << endl;
       break;
    case 8:
       cout << "Agosto" << endl;
       break;
    case 9:
       cout << "Setembro" << endl;
       break;
    case 10:
       cout << "Outubro" << endl;
       break;
    case 11:
       cout << "Novembro" << endl;
       break;
    case 12:
       cout << "Dezembro" << endl;
       break;
    default:
        cout << "digite de 1 a 12"  << endl;
    }        
}

void impares (void) {
    cout << "|||||||||||||||||||||||||||||||||||||||||||||" << endl;

    int maior=0, seq, num, cont=0;
    
    do {
        cont++;
        
        cout << cont << " - Digite um número inteiro (Digite 0 para sair): ";
        cin >> num;
        
        if (num % 2 != 0) 
        {
              if (num > maior) 
              {
                 maior = num;
                 seq = cont;        
              }     
        }

       
    } while (num != 0);
    
    cout << "O maior impar é: " << maior << endl;
    cout << "Na sequencia: " << seq << endl;
    cout << "Total digitado: " << cont << endl;
          
}
     
void perfeitos (void) {
    cout << "|||||||||||||||||||||||||||||||||||||||||||||" << endl;
 
    int i, num, somaDiv;
 
    cout << "Digite um número: ";
    cin >> num;
 
    for (i = 1; i < num; i++) {
        if (num % 2 == 0) {
           somaDiv = somaDiv + i;        
        }                
    }
    
    if (somaDiv == num) {
        cout << "Numero PERFEITO" << endl;
        
    }
    else
       cout << "Nao eh PERFEITO" << endl;
    
}

void fatorial (void) {
    cout << "|||||||||||||||||||||||||||||||||||||||||||||" << endl;
    
    int num;
    long fat;
    
    cout << "Informe um número";
    cin >> num;
    
    if (num == 0)
       fat = 1;
    else 
    {
         fat = num;
         while (num > 1)
         {
               fat = fat * (num - 1);
               num--;                              
         }                   
    }
    
    cout << "O fatorial eh " << fat << endl;         
    
}
