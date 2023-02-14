/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "lista.h"
using namespace std;
void ricerca(lista testa, int num)
{
    lista scorri = testa;
    bool check = false;
    if(testa == NULL)
    {
        cout << "lista vuota." << endl;
    }
    else
    {
        for (int i = 0; scorri != NULL; i++) {
            if(scorri->dato == num)
            {
                cout << "elemento ricercato: " << num << "\ntrovato alla " << i+1<< "° posizione della lista." << endl;
                stampa(testa);
                cout << "[" << i << "]: " << num << endl;
                check = true;
            }
            scorri = scorri->next;
        }
    }
    if(check == false)
    {
        cout << "elemento cercato: " << num << " non e' presente nella lista" << endl;
    }
}

void sortIns(lista& testa, int num)
{
    lista nuovo = new nodo;//nuovo nodo lista
    lista scorri = testa;//puntatore che scorre la lista
    nuovo->dato = num;
    if(testa == NULL)                 //********lista vuota: inserimento in testa
    {
        nuovo->next = NULL;
        testa = nuovo;
    }
    else if(testa->next == NULL)     //*******lista con un solo elemento
    {
        if(nuovo->dato<=testa->dato)//nuovo dato < testa/scorri
        {
            nuovo->next = testa;
            testa=nuovo;
        }
        else     //testa/scorri <= nuovo dato   che punta NULL
        {
            nuovo->next = NULL;
            testa->next = nuovo;
        }
    }
    else                             //**********lista con piu elementi
    {
        while(scorri!=NULL)
      {
        if(nuovo->dato<=scorri->dato)   //nuovo dato <= testa/scorri
        {
            nuovo->next=scorri;
            testa=nuovo;
            break;
        }
        else if((nuovo->dato>scorri->dato)&&(scorri->next==NULL))//  testa/scorri  < nuovo dato che punta NULL
        {
            nuovo->next=NULL;
            scorri->next=nuovo;
            break;
        }
        else if((nuovo->dato>scorri->dato)&&(nuovo->dato<=scorri->next->dato))  //testa/scorri  < nuovo dato <= scorri->next
        {
            nuovo->next=scorri->next;
            scorri->next=nuovo;
            break;
        }
        else if((nuovo->dato>scorri->dato)&&(nuovo->dato>scorri->next->dato)) //testa/scorri  < scorri->next  < nuovo dato 
        {
            scorri=scorri->next;//scorri andare avanti
        }
        
      }
    }
}
int main()
{
    lista testa = NULL;
    sortIns(testa,2);
    sortIns(testa,3);
    sortIns(testa,1);
    sortIns(testa,2);
    sortIns(testa,9);
    sortIns(testa,6);
    sortIns(testa,1);
    sortIns(testa,8);
    sortIns(testa,9);
    
   
    
    
    stampa(testa);
    return 0;
}