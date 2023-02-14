#include <iostream>
#include "coda.h"

using namespace std;


coda::coda()
{
    v=NULL;
    this->inizio=-1;
    this->fine=0;
    this->lung=0;
}
    
coda::coda(int dimensione)
{
    this->dim=dimensione;
    v=new int[this->dim];
    for(int i=0;i<this->dim;i++)
    {
        *(v+i)=-1;
    };
    this->inizio=-1;
    this->fine=0;
    this->lung=0;
    
}
void coda::ins(int dato)
{
    if(size()==true)
    {
    *(v+this->fine)=dato;
    this->lung++;
    this->fine=(this->fine+1)%this->dim;
    }
    else
    {
        cout<<"Il vettore è pieno\n";
    };
}
    
void coda::est()
{
    if(this->lung!=0)
    {
    *(v+((this->inizio+1)%this->dim))=-1;
    
    this->inizio=(this->inizio+1)%this->dim;
    this->lung--;
    }
    else
    {
        cout<<"Il vettore è vuoto\n";
    };
    
}

bool coda::size()
{
        if(this->lung<this->dim)  //true=nel vettore c'è ancora spazio 
        {
            return true;
        }
        else if(this->lung==0)   //false=nel vettore è vuoto
        {
            return false;
        }
}

void coda::visualizza()
{
    for(int i=0;i<this->dim;i++)
    {
        cout<<*(v+i)<<" ";
    };
    cout<<"\n";
}


