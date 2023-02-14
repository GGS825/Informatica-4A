#include <iostream>
#include "class.h"
using namespace std;
vettor vettor::carica(int n)
{   
    this->dim=n;
    v=new int[this->dim];
    for(int a=0;a<this->dim;a++)
    {
        
        *(v+a)=1;
    };
    
}

vettor vettor::visualizza()
{
    for(int a=0;a<dim;a++)
    {
        cout<<*(v+a);
    };
}