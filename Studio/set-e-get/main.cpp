/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class persona
{   private:
    string nome;
    string cognome;
    float stipendio;
    
    public:
    void setNome(string a)
    {
        nome=a;
    };
    
    string getNome()
    {
        return nome;
    };
    
    
    void setCognome(string a)
    {
        cognome=a;
    };
    
    string getCognome()
    {
        return cognome;
    };
    
    
    void setStipendio(float a)
    {
        stipendio=a;
    };
    
    float getStipendio()
    {
        return stipendio;
    };
    
};


int main()
{   
    string nome,cognome;
    float stipendio;
    cout<<"Inserisci il nome:\n";
    cin>>nome;
    cout<<"Inserisci il cognome:\n";
    cin>>cognome;
    cout<<"Inserisci lo stipendio:\n";
    cin>>stipendio;
    
    persona a;
    a.setNome(nome);
    a.setCognome(cognome);
    a.setStipendio(stipendio);
    
    cout<<a.getNome()<<a.getCognome()<<":"<<a.getStipendio();

    return 0;
}