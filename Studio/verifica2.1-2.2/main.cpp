/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "funzione.h"
using namespace std;

int main()
{
   int n;
   int m;
   
   cout<<"Inserisci la dimensione:\n";  //2.a
   cin>>n; 
   int* v=NULL;
   v=new int[n];
   
   float c;
   c=funzione(v,n);              //2.b
   cout<<"\n"<<c;                //2.c
   
   int d=c;                     //trasforma in int per essere un numero adeguato di dimensione
   
   if((d<10)&&(d>2))            //2.d  
   {                            //Chiedere all’utente se vuole utilizzare il valore come dimensione di un nuovo vettore
       cout<<"\nSe vuoi utilizzare il valore restituito come dimensione di un nuovo vettore?\n";
       cout<<"1 <- SI: ripartire la funzione fornendo il valore restituito come parametro\n";
       cout<<"2 <- NO: Uscire dal programma\n";
       cin>>m;
       
       switch(m)
       {
           case 1:       //Se SI: ripartire dal punto b) fornendo la nuova dimensione come parametro
           {
              v=new int[d];
              c=funzione(v,d);
              cout<<"\n"<<c; 
              break;
           } 
           case 2:      //Se NO: Uscire dal programma
           {
               exit(0);
           }
       };
   }
   else                  //Altrimenti Chiedere all’utente se vuole far ripartire la funzione con una nuova dimensione
   {   
       cout<<"\nSe vuoi far ripartire la funzione con una nuova dimensione\n";
       cout<<"1 <- SI: ripartire la funzione e inserire una nuova dimensione\n";
       cout<<"2 <- NO: Uscire dal programma\n";
       cin>>m;
       
       switch(m)
       {
           case 1:     //Se SI: Consentire all’utente di inserire la nuova dimensione e ripartire dal punto b) fornendo la nuova dimensione come parametro
           {
              cout<<"Inserisci una nuova dimensione:\n";
              cin>>n;
              v=new int[n];
              c=funzione(v,n);
              cout<<"\n"<<c;
              
              break;
           }
           case 2:    //Se NO: Uscire dal programma
           {  
               exit(0);
           }
       };
   };
   


   return 0;
}