/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "frazione.h"

using namespace std;

int main()
{
    srand(time(0));//seed dal time
    int a,b,c,d;   //dichiara 4 variabili
    a=rand()%10+1; //numeratore f1 casuale da 1 a 10
    b=rand()%10+1; //denominatore f1 casuale da 1 a 10
    c=rand()%10+1; //numeratore f2 casuale da 1 a 10
    d=rand()%10+1; //denominatore f2 casuale da 1 a 10
    
    frazione f1(a,b);                         //crea oggetto f1
    cout<<f1.getNum()<<"/"<<f1.getDen()<<" "; //stampa f1 originale
    f1.sempli();                              //richiamo metodo semplificazione
    
    frazione f2(c,d);                         //crea oggetto f2
    cout<<f2.getNum()<<"/"<<f2.getDen()<<"\n";//stampa f2 originale
    f2.sempli();                              //richiamo metodo semplificazione
    
    cout<<"Rendersi più belle:\n";
    
    if(f1.getDen()==1)                      //stampa f1 semplificata  
    {
        cout<<f1.getNum()<<" ";
    }                                     
    else                                      
    {
       cout<<f1.getNum()<<"/"<<f1.getDen()<<" "; 
    };
    
    if(f2.getDen()==1)                      //stampa f2 semplificata          
    {
        cout<<f2.getNum()<<"\n";
    }
    else
    {
       cout<<f2.getNum()<<"/"<<f2.getDen()<<" \n"; 
    };
    
    
    f1.confronto(f2);                       //confrontare 2 frazioni

    return 0;
}