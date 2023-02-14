/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "class.h"

using namespace std;

int main()
{
    /*vettor f1(4,-2);   //il caso in cui la dimensione 4 definita,e il currente si parte da -2 che non si permette;
    
    vettor f2(4,-1);     //il caso in cui la dimensione 4 definita,e il currente si parte da -1;
    f2.crea(3);
    f2.visualizza();*/
    
    vettor f3(4,0);//il caso in cui la dimensione 4 definita,e il currente si parte da 0;
    f3.crea(2);        
    cout<<"stop1\n";
    f3.crea(2);
    cout<<"stop2\n";
    f3.crea(2);
    cout<<"stop3\n";
    f3.visualizza();
    f3.aggiungi(2);  //si aggiungono ancora 2 elementi che supera il limite della dimensione 4
    f3.visualizza();
    f3.aggiungi(2);  //si aggiungono ancora 2 elementi che supera il limite della dimensione 6
    f3.visualizza();
    //f3.cancella();
    

    return 0;
}