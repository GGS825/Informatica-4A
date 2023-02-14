/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "vettore.h"

using namespace std;

int main()
{
    int n;
    int d;
    int a;
    
    cout<<"Inserisci la dimensione:";
    cin>>d;
    stack v(d);                             
    cout<<endl;
    
    
    
    do
    {
        cout<<"------------------------------------------";
        cout<<"\n1 push                                   -\n";
        cout<<"2 pop                                    -\n";
        cout<<"3 visualizza tutto vettore               -\n";
        cout<<"4 verifica il vettore sia pieno o vuoto  -\n";
        cout<<"5 exit                                   -\n";
        cout<<"------------------------------------------";
        cout<<endl<<":";
        cin>>n;   
    switch(n)
       {
        case 1:
          
          cout<<"Che numero vuoi inserire:                       ";
          cin>>a;
          v.push(a);
          break;  
        
        case 2:                                              
        
            v.pop();
          break;  
       
        case 3:
            v.visualizza();
          break;  
        
        case 4:
        
          if(v.vuoto()==true)
          {
              cout<<"Vettore vuoto\n";
          }
          else if(v.pieno()==true)
          {
              cout<<"vettore pieno\n";
          }
          else
          {
              cout<<"C'è ancora spazio nel vettore\n";
          };
          break;
          
        case 5:
        
          cout<<"Ciaociao";
          break;
        
        default:
        
          cout<<"Per favole inserisci il numero tra 1 a 5\n";  
          break;
      };
    }while(n!=5);
    
    
    
    
    
    

    return 0;
}