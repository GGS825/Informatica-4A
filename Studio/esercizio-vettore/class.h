 #include <iostream>
using namespace std;

class vettor
{   
    private:
    int i;
    int* v;
    
    public:
    vettor();
    vettor(int i);
    
    vettor crea();
    vettor cancella();
    vettor pari();
    vettor dispari();
    
};