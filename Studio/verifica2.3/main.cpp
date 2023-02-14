/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <ctime>
#include <string.h>
#include "Quadrato.h"
using namespace std;

int main()
{   
    srand(time(0));
    int n=rand()%79+21;
    
    FILE* fp=NULL;
    fp=fopen("Quadrati.txt","w");
    fprintf(fp,"Lato    ");
    fprintf(fp,"Perimetro    ");
    fprintf(fp,"Area    ");
    fprintf(fp,"Diagonale\n");
    fclose(fp);
    
    for(int i=1;i<=(n-1);i++)
    {
        quadrato q(i);
        q.file();
    };
    
    
    
    
    return 0;
}