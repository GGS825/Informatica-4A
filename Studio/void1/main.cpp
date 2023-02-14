/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void g(int a,int b=5,int c=7)
{  
        if(b!=2 or b!=4)
        {b=5;
            
        };
        cout<< a<< b<< c<<"\n";
    
    
};


int main()
{
    
    
    
    g(3,2,1);
    g(3,4);
    g(3,7,4);
    
    
    
    
    return 0;
}