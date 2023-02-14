#include "stud1.h"
#include <iostream>

using namespace std1;



int xx::operazione(int a,int b)
{
    int c=a+b;
    return c;
}
int xx::aa::molitiplicazione(int a,int b)
{
    int c=a*b;
    return c;
}

float xx::bb::molitiplicazione(int a,int b)
{
    float c=a/b;
    return c;
}

int xx::getA()
{
    return this->a;
}

int xx::getB()
{
    return this->b;
}