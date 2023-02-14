#include <iostream>
#include "Quadrato.h"
using namespace std;

quadrato::quadrato()
{
    this->lato=0;
}

quadrato::quadrato(int lato)
{
    this->lato=lato;
}


int quadrato::perimetro()
{
    return lato*4;
}
int quadrato::area()
{
    return lato*lato;
}
float quadrato::diagonale()
{
    return lato*1.414;
}
    
void quadrato::file()
{
    FILE* fp=NULL;
    int a=this->lato;
    int b=perimetro();
    int c=area();
    float d=diagonale();
    fp=fopen("Quadrati.txt","a+");
    fprintf(fp,"%d      ",a);
    fprintf(fp,"%d             ",b);
    fprintf(fp,"%d            ",c);
    fprintf(fp,"%f\n",d);
    fclose(fp);
    
}



