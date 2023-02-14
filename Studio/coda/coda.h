#include <iostream>

using namespace std;

class coda
{
    private:
    
    int* v;//puntatore
    int inizio;//primo spazio libero
    int fine;//l'ultimo spazio può arrivare
    int lung;//confronta con dim per verifica se sia pieno il vettore
    int dim;//dimensione
    
    
    
    public:
    
    coda();
    coda(int dimensione);
    void ins(int dato);
    void est();
    bool size();
    void visualizza();

};



