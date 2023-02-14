/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class persona
 {  public:
    persona(string a,string b,int c);
    
 };
 
persona::persona(string a,string b,int c)
{  
      string d=a+b;
      cout<<d<<":"<<c<<"Euro/mese\n";
      
};

int main()
{   
    string nome;
    string cognome;
    int sti;
    cout<<"Inserisci il nome:";
    cin>>nome;
    cout<<"Inserisci il cognome:";
    cin>>cognome;
    cout<<"Inserisci il stipendio mensile:";
    cin>>sti;
    persona a(nome,cognome,sti);
    

    return 0;
}






