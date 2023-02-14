/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class A
{    public:
      int a;                             //la seguenza quando si parte la classe:
        A(int a):a(7)                    //1.A(int a) riceve il parametro a;
                                         //2.conferisce alla proprieta this->a il valore 7; 
        {
            cout<<"a:"<<a<<endl;         //3.stampa il parametro a;
            cout<<"a:"<<this->a<<endl;   //4.stampa la proprieta this->a;
        }; 
};

class B:public A
{
    public: 
    int b;
    B(int b):A(b)
    {
        cout<<"b:"<<b<<endl;
    };
};
 
class C:public B
{   
    public:
    C(int c):B(c)
    {
       cout<<"c:"<<c<<endl;
        
    };
};





int main()
{
    C c1(6);
    //la seguenza dei costruttori inizia da padre poi figlio,cioè A->B->C

    return 0;
}