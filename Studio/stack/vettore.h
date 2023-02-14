#include <iostream>

using namespace std;

class stack
{
    private:
    int sp;
    int* vettore;
    int dim;
    
    
    public:
    stack();
    stack(int dim);
    
    void push(int dato);
    int pop();
    
    bool vuoto();
    bool pieno();
    void visualizza();
    
};