/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
#include "lista.h"

using namespace std;
 
void trasforma(string &nome)   //passa direttamente il riferimento come il parametro,quindi il metodo non ha bisogno di return qualche valore,perciò si usa  void
{                              
    int len=nome.size();
    for(int i=0;i<len;i++)
    {
        if(nome[i]>='A'&&nome[i]<='Z')
        {
            transform(nome.begin(),nome.end(),nome.begin(),::tolower);    //trasforma Maiuscolo in minuscolo
        }
        else
        {
            
        };
        /*else if(nome[i]>='a'&&nome[i]<='z')
        {
           transform(nome.begin(),nome.end(),nome.begin(),::toupper);     //trasforma  minuscolo in Maiuscolo
        }*/
    }
}
 
int main()
{
    list a;
    string b="ALEssiO";
                 cout<<b<<"\n";
    string c="bouvier";
                 cout<<c<<"\n";
    string d="alessia";
                 cout<<d<<"\n\n\n\n";
    trasforma(b);//il metodo permette di trasforma obbligatoriamente i caratteri maiuscoli in minuscoli per fare la paragona
    trasforma(c);
    trasforma(d);
    a.push(b);
    a.push(c);
    a.push(d);
    
    a.stampa();
                cout<<"----fine inserimento ---- \n\n\n\n";
    a.pop();
                cout<<"----fine estratto ---- \n";
    /*a.push("ale");
    a.push("bouvier");
    a.push("ge");
    a.push("Ge");
    a.push("ge guosheng");*/
    a.stampa();
    
    
    
   
   cout<<"\n\n\n\n\n\n\n          fine esempio,sotto interfaccia per personalizza le operazioni\n---------------------------------\n";
    int n;
    list v;                             
    string x;
    
    do
    {
        cout<<"--------------------------------------------";
        cout<<"\n1 Inserimento                              -\n";
        cout<<"2 estrazione                               -\n";
        cout<<"3 visualizza tutta la lista                -\n";
        cout<<"4 exit                                     -\n";
        cout<<"--------------------------------------------";
        cout<<endl<<":";
        cin>>n;   
    switch(n)
       {
        case 1:
        {
         
          cout<<"Che nome vuoi inserire:                       ";
          cin>>x;
          trasforma(x);
          v.push(x);
          break;  
        }
        case 2: 
        {
        
            v.pop();
          break;  
        }
        case 3:
        {
            v.stampa();
          break;  
        }
        case 4:
        {
          cout<<"Ciaociao";
          break;
        }
        default:
        {
          cout<<"Per favole inserisci il numero tra 1 a 4\n";  
          break;
        }
      };
    }while(n!=4);
    
    
    

    return 0;
}