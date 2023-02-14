#include <iostream>

using namespace std;

class quadrato
{
    private:
    
    int lato;
    
    public:
    quadrato();
    quadrato(int lato);
    
    int perimetro();
    int area();
    float diagonale();
    
    void file();
};