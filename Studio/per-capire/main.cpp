/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a=5;
    int* b;
    b=new int;
    int* c;
    c=new int;
    *c=3;
    *b=a;
    b=*&c;
    
    cout<<"b:"<<b<<"  c:"<<c<<"\n";
    cout<<"stop\n";
    cout<<"b:"<<&*b<<"  c:"<<*c<<"\n";
    cout<<"stop\n";
    cout<<"b:"<<&b<<"  c:"<<&c<<"\n";
    

    return 0;
}