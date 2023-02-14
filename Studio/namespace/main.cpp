/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "stud1.h"
#include "stud2.h"
using namespace std;
using namespace std1;
using namespace std2;

int main()
{   
    int a=4;
    int b=5;
    int c; 
    cout<<a<<" "<<b;
    
    std1::xx x;     //usa la class xx del namespace std1
   
    cout<<x.getA()<<" "<<x.getB();
    
    std2::xx y;     //usa la class xx del namespace std2 con lo stesso nome del namespacestd1
   
    cout<<y.getA()<<" "<<y.getB();
 
    
    
    
    

    
    

    return 0;
}