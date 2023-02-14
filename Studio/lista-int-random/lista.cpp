#include <iostream>
#include "lista.h"

using namespace std;


list::list()
{
    testa=NULL;
}

void list::push(int numero)
{
    lista nuovo = new nodo;
    lista scorri = testa;
    nuovo->numero = numero;
    if(testa == NULL)
    {
        nuovo->next = NULL;
        testa = nuovo;
    }
    else if(testa->next == NULL)     
    {
        if(nuovo->numero<=testa->numero)
        {
            nuovo->next = testa;
            testa=nuovo;
        }
        else     
        {
            nuovo->next = NULL;
            testa->next = nuovo;
        }
    }
    else                           
    {
        while(scorri!=NULL)
      {
        if(nuovo->numero<=scorri->numero)  
        {
            nuovo->next=scorri;
            testa=nuovo;
            break;
        }
        else if((nuovo->numero>scorri->numero)&&(scorri->next==NULL))
        {
            nuovo->next=NULL;
            scorri->next=nuovo;
            break;
        }
        else if((nuovo->numero>scorri->numero)&&(nuovo->numero<=scorri->next->numero)) 
        {
            nuovo->next=scorri->next;
            scorri->next=nuovo;
            break;
        }
        else if((nuovo->numero>scorri->numero)&&(nuovo->numero>scorri->next->numero))
        {
            scorri=scorri->next;
        }
        
      }
    }
}


void list::pop()
{
    if(testa == NULL)
    {
        cout << "lista vuota." << endl;
    }
    else
    {
        lista del=testa;
        int numero=testa->numero;
        testa = testa->next;
        delete del;
        cout << "è stato rimosso:"<<numero<< endl;
    }
}             
 
    
    
void list::stampa()
{
    lista scorri = testa;
    if(scorri!= NULL)
    {
        cout << "[ ";
        while(scorri != NULL)
        {
            if((scorri->next == NULL))
            {
                cout << scorri->numero << " ]" << endl;
            }
            else
            {
                cout << scorri->numero << ", ";
            }
            scorri = scorri->next;
        }
    }
    else
    {
        cout << "lista vuota." << endl;
    }
    
}