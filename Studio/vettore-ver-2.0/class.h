 #include <iostream>
using namespace std;

class vettor
{   
    private:
    int i;//dimensione
    int* v;//vettore
    int curr;//currente
    int n;//per indicare lo stato iniziale di currente per gestire i casi 0 e -1
    
    public:
    vettor();
    vettor(int i);
    vettor(int i,int currente);
    
    vettor crea(int n);
    vettor visualizza();
    vettor cancella();
    vettor aggiungi(int number);
   
    
};