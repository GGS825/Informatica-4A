#include <iostream>
#include "class.h"
#include <ctime>
#include <cstdlib>
using namespace std;

vettor::vettor()
{
    cout<<"Non esiste il numero\n";
}

vettor::vettor(int i)
{   
    
   
   if(i<=0)
   {
       this->i=0;
       cout<<"Il numero di dimensione deve essere magiore do 0";
   }
   else
   {
       this->i=i;
   };
}

vettor vettor::crea()
{   
    srand(time(0));
    this->v=new int[this->i];
    
     for(int a=0;a<this->i;a++)
    {   
    *(v+a)=rand()%10+1;
    cout<<*(v+a)<<" ";
    };
    cout<<"\n";
}

vettor vettor::cancella()
{  
    delete v;
}

vettor vettor::pari()
{
    cout<<"I numeri pari sono: ";
     for(int a=0;a<this->i;a++)
    {   
      if((*(v+a))%2==0)
        {
            cout<<*(v+a)<<" ";   
        }
        else
        {
            cout<<"";
        };
    };
    cout<<"\n";
}
vettor vettor::dispari()
{
    cout<<"I numeri dispari sono: ";
     for(int a=0;a<this->i;a++)
    {   
      if((*(v+a))%2==1)
        {
            cout<<*(v+a)<<" ";   
        }
        else
        {
            cout<<"";
        };
    };
    cout<<"\n";
}