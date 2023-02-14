/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "class.h"

using namespace std;
int main()
{
    
    vettor f1;      //Prova con senza parametro
    cout<<"Sopra è la prova senza parametro\n\n\n\n";
    
    int i;
    cout<<"Adesso inserire la dimensione:";
    cin>>i;
    
    
    vettor f2(i); //Cotruttore per la variabile del numero di dimensione 
    f2.crea();    //A segue della variabile del numero di dimensione,si crea i numeri casuali della dimensione corrispondente 
    f2.pari();    //seleziona i numeri pari
    f2.dispari(); //seleziona i numeri dispari
    f2.cancella();// Si cancellano tutti i riferimenti del vettore
    


    return 0;
}

