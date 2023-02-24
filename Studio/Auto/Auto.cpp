#include <iostream>
#include "Auto.h"

using namespace std;

Auto::Auto()
{   
    cout<<"Inserire la marca e il modello:\n";
    char* a1=new char[50];
    cin>>a1;
    this->marca_e_modello=a1;

    cout<<"Inserire i posti:\n";
    int b1;
    cin>>b1;
    this->posti=b1;

    cout<<"Inserire le porte:\n";
    int b2;
    cin>>b2;
    this->porte=b2;
   
    cout<<"Inserire la potenza[KW]:\n";
    int b3;
    cin>>b3;
    this->potenza=b3;
    
    cout<<"Inserire il tipo di cambio:\n0->Manuale\n1->Automatico\n";
    int b4;
    do
    {   
        cin>>b4;
        if(b4==0)
        {
          this->tipo_di_cambio="Manuale";
        }
        else if(b4==1)
        {
          this->tipo_di_cambio="Automatico";
        }
        else
        {
            cout<<"Per favole rinserisci il numero che sia 0 oppuere 1\n";
        }
    }while((b4!=0)&&(b4!=1));
    
    
    cout<<"Inserire la targa:\n";
    char* a2=new char[7];
    cin>>a2;
    this->targa=a2;
    
    
    cout<<"Inserire il prezzo[€] al giorno:\n";
    float c1;
    cin>>c1;
    this->prezzo_al_giorno=c1;
   
}

void Auto::visualizza()
{
       cout<<"La marca e il modello:"<<this->marca_e_modello<<endl;
       cout<<"I nuemri dei posti:"<<this->posti<<endl;
       cout<<"I numeri delle porte:"<<this->porte<<endl;
       cout<<"La potenza:"<<this->potenza<<"[KW]"<<endl;
       cout<<"Il tipo di cambio:"<<this->tipo_di_cambio<<endl;
       cout<<"La targa:"<<this->targa<<endl;
       cout<<"Il prezzo al giorno:"<<this->prezzo_al_giorno<<"[€]"<<endl;
}

bool Auto::verifica()
{
    if((this->nome==NULL)&&(this->cognome==NULL))
    {
         return true;
    }
    else
    {
        return false;
    }
}


void Auto::Inserisci(char* a,char * b)
{
     this->nome=nome;
     this->cognome=cognome;
}

void Auto::cancella()
{
     this->nome=NULL;
     this->cognome=NULL;
}

void Auto::modifica()
{
    Auto();
}

float Auto::getPrezzo_al_giorno()
{
    return this->prezzo_al_giorno;
}

char* Auto::getTarga()
{
    return this->targa;

}