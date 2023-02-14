/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class nome
{    
     public:
     nome()
     {
      cout<<"waitting...\n";  
     };
   
     nome(string a)
     {   
         cout<<"nome è "<<a;
     };
};


int main()
{   string y;
    cout<<"inserisci il nome\n";
    cin>>y;
    nome z();
    nome x(y);
    

    return 0;
}