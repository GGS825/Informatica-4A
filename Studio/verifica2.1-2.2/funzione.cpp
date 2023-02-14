#include <iostream>
#include "funzione.h"
#include <ctime>
using namespace std;



float funzione(int* &v,int dim)
{    
    srand(time(0));               //a.carica il vettore
    for(int i=0;i<dim;i++)
    {
        //*(v+i)=rand()%50+1;
        *(v+i)=rand()%10+1;
        cout<<" "<<*(v+i);
    }
        cout<<"\n";
        
    float somma=0.000000000000;            //b.calcola la media
    int n=0;
    for(int i=0;i<dim;i++)
    {
        if((i+1)%2==1)
        {
            somma=somma+*(v+i);
            n=n+1;
        }  
    }
    float media=somma/n;
    return media;
}