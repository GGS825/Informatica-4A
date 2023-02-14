/******************************************************************************
Scrivere una funzione, alla quale passare due parametri: il riferimento di un puntatore ad intero, ed
un intero. L’algoritmo dovrà svolgere quanto segue: (Punti 4)
a. Creare una lista in cui i valori presenti nei singoli nodi dovranno essere tutti i multipli di 2
b. Calcola la media dei valori presenti nella lista che abbiano un valore maggiore di 4 e
visualizzare la lista e la media calcolata.
c. Cercare e visualizzare il minimo ed il massimo presenti nella lista

*******************************************************************************/
#include <iostream>
#include "funzione.h"
#include <ctime>
using namespace std;

typedef struct Nodo{
    int valore;
    struct Nodo* next;
}nodo;
typedef nodo* lista;


void funzione(int* &v,const int dim)
{
    srand(time(0));
    
    v=new int[dim];             //genera "un vettore dei numeri interi" in base della quantità "dim"
    for(int i=0;i<dim;i++)
    {
        *(v+i)=rand()%10+1;
        cout<<" "<<*(v+i)<<" ";
    };
    cout<<"\n";
    

    
    lista testa=NULL;   //A.crea una lista(inserire dalla coda)
    lista scorri=NULL;
    for(int i=0;i<dim;i++)
    {
        
                lista nuovo=new nodo;         //crea un nuovo nodo
                nuovo->valore=*(v+i)*2;
                nuovo->next=NULL;
                
                if(i!=0)
                {
                 scorri->next=nuovo;  
                }
                
                scorri=nuovo; 
                
                if(i==0)
                {
                    testa=scorri;
                };
                
                cout<<" "<<scorri->valore<<" ";
                          
       
    };
    cout<<"\n";
    
    
     scorri=testa;                  //B.calcolare la media dei valori che sono maggiore di 4
     float somma=0.0000;
     int n=0;
    for(int i=0;i<dim;i++)
    {
        if(scorri->valore>4)
        {
            cout<<" "<<scorri->valore<<" ";
            somma=somma+scorri->valore;
            n=n+1;
            scorri=scorri->next;
        }
        else
        {
            scorri=scorri->next;
        };
    };
    float media=0.0000;
    media=somma/n;
    cout<<"\nLa media è:"<<media;
    cout<<"\n";
    
    
    scorri=testa;             //cerca il valore massimo
    int max=scorri->valore;
    for(int i=0;i<dim;i++)
    {
        if(scorri->valore>max)
        {
            max=scorri->valore;
            scorri=scorri->next;
        }
        else
        {
            scorri=scorri->next;
        }
    };
    cout<<"il valore massimo è:"<<max;
    cout<<"\n";
    
    scorri=testa;           //cerca il valore minimo
    int min=scorri->valore;
    for(int i=0;i<dim;i++)
    {
        if(scorri->valore<min)
        {
            min=scorri->valore;
            scorri=scorri->next;
        }
        else
        {
            scorri=scorri->next;
        };
    };
    cout<<"il valore minimo è:"<<min;
    cout<<"\n";
    
    
}