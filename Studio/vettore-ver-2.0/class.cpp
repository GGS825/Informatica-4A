#include <iostream>
#include "class.h"
#include <ctime>
#include <cstdlib>
using namespace std;

vettor::vettor()
{
    this->v=NULL;
    cout<<"Non esiste il numero di dimensione,quindi non si crea il vettore\n";
}

vettor::vettor(int i)
{   
    
   
   if(i<=0)
   {
       this->v=NULL;
       cout<<"Il numero di dimensione deve essere magiore di 0\n";
   }
   else
   {
       this->i=i;
       v=new int[this->i];
   };
}

vettor::vettor(int i,int currente)
{   
    
   if(i<=0)
   {
       this->v=NULL;
       cout<<"Il numero di dimensione deve essere magiore di 0\n";
   }
   else
   {
       this->i=i;
       v=new int[this->i];
       
       if((currente==0)||(currente==-1))
       {
       this->curr=currente;
       this->n=currente;
       }else
       {
         cout<<"currente deve partire da 0 oppure -1\n";  
       };
   };
}

vettor vettor::crea(int n)
{
    if(this->curr==-1)
    {
        for(int a=this->curr;a<(n-1);a++)
        {
            this->curr++;
            cout<<"Inserire il numero "<<a+2<<" intero che vuoi nel vettore\n";
            int numero;
            cin>>numero;
            *(v+this->curr)=numero;
        };
    }
    else if(this->curr==0)
    {
        for(int a=this->curr;a<n;a++)
        {
            cout<<"Inserire il numero "<<a+1<<" intero che vuoi nel vettore\n";
            int numero;
            cin>>numero;
            *(v+this->curr)=numero;
            this->curr++;
        };
    }
    else if(this->curr<=i)
    {
        
         
            if(this->n==-1)
            {   
                for(int a=0;a<n;a++)
              {
                
                if((this->curr+2)<=this->i)
                {
                    cout<<"Inserire il numero "<<a+1<<" intero che aggiungi nel vettore\n";
                    int numero;
                    cin>>numero;
                
                    this->curr++;
                    *(v+this->curr)=numero;
                }
                else if((this->curr+2)>this->i)
                {
                    cout<<"è pieno il vettore\n";
                };
                
              };
            
                
            }
            else if(this->n==0)
            {
                for(int a=0;a<n;a++)
              {
                
                if((this->curr+1)<=this->i)
                {
                    cout<<"Inserire il numero "<<a+1<<" intero che aggiungi nel vettore\n";
                    int numero;
                    cin>>numero;
                
                    *(v+this->curr)=numero;
                    this->curr++;
                }
                else if((this->curr+1)>this->i)
                {
                    cout<<"è pieno il vettore\n";
                };
                
              };
            };
           
    };
}

vettor vettor::visualizza()
{   
    cout<<"I numeri nel vettore sono: ";
    for(int a=0;a<this->i;a++)
    {   
    cout<<*(v+a)<<" ";
    };
    cout<<"\n";
}

vettor vettor::cancella()
{   
    delete []v;
    cout<<"è stato cancellato il vettore\n";
}

vettor vettor::aggiungi(int number)
{
    if(this->n==0)                        //Nel caso il currente si parte da 0
    {
        if((this->curr+number)<=this->i-1)  //1.nel caso gli elenmenti aggiunti NON SUPERA la dimensione
      {
        for(int a=this->curr;a<number;a++)   //1.carica il vettore normalmente
        {
            cout<<"Inserire il numero "<<a+1<<" intero che vuoi nel vettore\n";
            int numero;
            cin>>numero;
            *(v+this->curr)=numero;
            this->curr++;
        };
      }
      else                                     //2.nel caso gli elenmenti aggiunti SUPERA la dimensione
      {                                        
        int* p;                               
        this->i=this->curr+number;                //la nuova dimensione
        p=new int[this->i];                       //creare un nuovo vettore a cui p punta
        
        for(int a=0;a<this->curr;a++)             //copia il contenuto del vettor a cui v punta al vettore a cui p punta (uno alla volta)
        {
        
        *(p+a)=*(v+a); 
        };                   
        
        delete []v;                             //cancella il vettore a cui v punta
        for(int a=0;a<number;a++)              //carica i nuovi elementi nel vettore a cui p punta(uno alla volta)
              {
                    cout<<"Inserire il numero "<<a+1<<" intero che aggiungi nel vettore\n";
                    int numero;
                    cin>>numero;
                
                    *(p+this->curr)=numero;
                    this->curr++;
              };
        
        *&v=p;                                //Dare il indirizzo che contenuto del puntatore p al puntatore v,
                                              //così il puntatore v può anche puntare  il vettore di p
      };    
    }
    
    else if((this->n==-1))        //Nel caso il currente si parte da -1
    {
        if((this->curr+number)<=this->i-2)
      {
        for(int a=this->curr;a<(number-1);a++)
        {
            this->curr++;
            cout<<"Inserire il numero "<<a+2<<" intero che vuoi nel vettore\n";
            int numero;
            cin>>numero;
            *(v+this->curr)=numero;
        };
      }
      else
      {
        int* p;                               
        this->i=this->curr+number;                //la nuova dimensione
        p=new int[this->i];                       //creare un nuovo vettore 
        
        for(int a=0;a<this->curr;a++)             //copia il contenuto del vettor di v al vettore p (uno alla volta)
        {
        
        *(p+a)=*(v+a); 
        };                   
        
        delete []v;                             //cancella il vettore di v
        for(int a=0;a<number;a++)              //carica i nuovi elementi nel vettore di p(uno alla volta)
              {
                    cout<<"Inserire il numero "<<a+1<<" intero che aggiungi nel vettore\n";
                    int numero;
                    cin>>numero;
                
                    *(p+this->curr)=numero;
                    this->curr++;
              };
        *&v=p;                       
      };
        
    };
    
   
    
}



