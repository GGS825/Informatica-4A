#include <iostream>
#include "lista.h"

using namespace std;


list::list()
{
    testa=NULL;
}

void list::push(string &nome)
{
    lista nuovo = new nodo;
    lista scorri = testa;
    nuovo->nome = nome;
    if(testa == NULL)
    {
        nuovo->next = NULL;
        testa = nuovo;
    }
    else if(testa->next == NULL)     
    {
        if(nuovo->nome<=testa->nome)
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
        if(nuovo->nome<=scorri->nome)  
        {
            nuovo->next=scorri;
            testa=nuovo;
            break;
        }
        else if((nuovo->nome>scorri->nome)&&(scorri->next==NULL))
        {
            nuovo->next=NULL;
            scorri->next=nuovo;
            break;
        }
        else if((nuovo->nome>scorri->nome)&&(nuovo->nome<=scorri->next->nome)) 
        {
            nuovo->next=scorri->next;
            scorri->next=nuovo;
            break;
        }
        else if((nuovo->nome>scorri->nome)&&(nuovo->nome>scorri->next->nome))
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
        string nome=testa->nome;
        testa = testa->next;
        delete del;
        cout << "è stato rimosso:"<<nome<< endl;
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
                cout << scorri->nome << " ]" << endl;
            }
            else
            {
                cout << scorri->nome << ", ";
            }
            scorri = scorri->next;
        }
    }
    else
    {
        cout << "lista vuota." << endl;
    }
    
}











