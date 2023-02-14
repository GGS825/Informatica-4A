/******************************************************************************** 
      Nel programma ci sono 2 classe A e B, A è la classe padre,B è la classe figlio,tutte le 2 classe hanno una proprieta con lo stesso nome a e il metodo stampa();
il programma svolge la gestione del chiamo dei membri che sia della classe figlio ne della classe padre





1.Il formato per richiamo i membri della classe originale  da (NomeOggetto).(NomeClassePadre)::(NomeMembro)

*******************************************************************************/
#include <iostream>

using namespace std;

class A       //class padre
{
    public: 
    
    int a=6;   //proprietà della classe originale
    
     void stampa()//metodo della classe originale
      {
        cout<<"Padre";  
      };
};

class B:public A     //classe figlio 
{
    public:
    
    int a=5;     //proprietà della classe derivata
     
    void stampa()//metodo della classe derivata
    {
       cout<<"Figlio";
    };
};

int main()
{   
  
    B b1;
    
    b1.stampa();//dichiara il metodo di figlio
    cout<<endl;
    b1.A::stampa();//dichiara il metodo di padre

    cout<<endl<<b1.a; //stampa a della classe derivata che è definito
    cout<<endl<<b1.A::a;//stampa a della classe originale

    return 0;
}
