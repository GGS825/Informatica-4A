#include <iostream>
#include "vettore.h"

using namespace std;

stack::stack()
{
    vettore=NULL;
    this->sp=-1;
}

stack::stack(int dim)
{   
    this->dim=dim;
    vettore=new int[this->dim];
    this->sp=0;
    
    for(int i=0;i<this->dim;i++)
    {
      *(vettore+i)=-1;  
    };
}


void stack::push(int dato)
{
    if(this->sp>=dim)
    {
        cout<<dato<<" <--questo elemento non si aggiunge nel vettore pieno\n"<<endl;
    }
    else
    {
        *(vettore+this->sp)=dato;
        this->sp++;
    };
    
}


int stack::pop()
{   
    if(this->sp<=0)  //vettore vuoto
    {
        cout<<"Nel vettore non ci sono i elementi\n";
    }
    else if(this->sp<=dim) //vettore non vuoto
    {
        
            this->sp--;
            cout<<*(vettore+this->sp)<<" è estratto\n";
            *(vettore+this->sp)=-1;
        return *(vettore+this->sp);
           
    } 
}

bool stack::vuoto()
{
    if(this->sp<=0)
    {
        return true;
    }
    else
    {
        return false;
    };
}

bool stack::pieno()
{
    if(this->sp>=this->dim)
    {
        return true;
    }
    else
    {
        return false;
    };
}

void stack::visualizza()
{
    for(int i=0;i<(this->dim);i++)
    {
        cout<<*(vettore+i)<<" ";
    };
    cout<<endl;
}

