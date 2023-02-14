#include <iostream>
#include "studente.h"
#include "string.h"
using namespace std;

studente::studente(string& nome,string& cognome)
{
    this->nome=nome;
    this->cognome=cognome;
    voti=new int[10];
    for(int i=0;i<10;i++)
    {
        *(voti+i)=-1;
    };
    
    this->ultimo=-1;
}

void studente::setVoti(int voto)
{   
    
    if((this->ultimo)<9)
    {   
        this->ultimo++;
        *(voti+this->ultimo)=voto;
    }
    else
    {
        cout<<"Il vettore è pieno\n";
    };
}

void studente::getVoti()
{
    for(int i=0;i<10;i++)
    {
        cout<<*(voti+i)<<" ";
    };
    cout<<"\n";
}

void studente::getNome()
{
    cout<<this->nome;
}

void studente::getCognome()
{
    cout<<this->cognome;
}

void studente::getData()
{
    cout<<this->data<<this->data<<"/"<<this->data<<this->data<<"/"<<this->data<<this->data<<this->data<<this->data;
}

void studente::mediaVoti()
{
    float somma;
     for(int i=0;i<10;i++)
    {   
        if(*(voti+i)!=-1)
        {
         somma=somma+(*(voti+i));
        }
        else
        {
          somma=somma;  
        };
    };
    float media=somma/((this->ultimo)+1);
    cout<<"La media è "<<media<<" \n";
}


