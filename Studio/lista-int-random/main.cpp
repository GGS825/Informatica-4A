/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "lista.h"
using namespace std;


int main()
{
    srand(time(0));
    int n;                                   
    cout<<"Inserire la quantita dei numeri:";
    cin>>n;                     //definire la quantità di numeri 
    cout<<endl;
    
    int a[n];                   //creare un vettore per generare i numeri casuali
    for(int i=0;i<=n;i++)
    {
        a[i]=rand()%50+1;
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    
    list pari;                //creare un oggetto che si chiama pari col tipo di list  e esegue automaticamente il costruttore senza parametro
    list dispari;             //creare un oggetto che si chiama dispari col tipo di list  e esegue automaticamente il costruttore senza parametro
    
    for(int i=0;i<=n;i++)     //valutare i numeri siano pari o dispari,e inserire nelle liste pari e dispari
    {
        if(a[i]%2==0)
        {
            pari.push(a[i]);
        }
        else if(a[i]%2==1)
        {
            dispari.push(a[i]);
        }
    }
    cout<<"La lista pari: ";
    pari.stampa();               //stampa lista pari
    cout<<endl;
    cout<<"La lista dispari: ";
    dispari.stampa();           //stampa lista dispari
    cout<<endl;
    
    
    
    
    
}