/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class A       //class padre
{
    public: 
      int a=1;
    
};

class B:public A     //classe figlio 
{
    public:
        int a=2;
};

int main()
{   
    B b1;
    
    cout<<b1.a;

    return 0;
}