/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "class.h"

using namespace std;

void caricastampa(int n)
   {   
       int* v;
       v=new int[n];
       for(int a=0;a<n;a++)
       {   
           cout<<"Inserisci il numero\n";
           int z;
           cin>>z;
           *(v+a)=z;
       };
       for(int a=0;a<n;a++)
       {   
           cout<<*(v+a);
       };
       
   }





int main()
{
   /*vettor f1;
   f1.carica(3);
   f1.visualizza();*/
   
   caricastampa(4);
   
   
   

    return 0;
}