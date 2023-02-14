#include <iostream>
#include "frazione.h"

using namespace std;


frazione::frazione()//frazione()
{
    this->num=1;
    this->den=1;
}

frazione::frazione(int num)//frazione(int num)
{
    this->num=num;
    this->den=1;
}

frazione::frazione(int num,int den)//frazione(int num,int den)
{
    this->num=num;
    
    if(den!=0)
    {
        this->den=den;
    }else
    {
        cout<<"Il denominatore non può essere uguale a 0";
        this->den=1;
    }      
}



frazione frazione::confronto(frazione op)//frazione confronto(frazione op)
{   
    frazione ris1;
    frazione ris2;
    ris1.num=this->num*op.den;
    ris2.num=op.num*this->den;
    
    if(ris1.num>ris2.num)
    {   if(this->den==1)
        cout<<this->num<<" è più grande\n";
        else
        cout<<this->num<<"/"<<this->den<<" è più grande\n";   
       
    }
    else if(ris1.num<ris2.num)
    {
        if(op.den==1)
        cout<<op.num<<" è più grande\n";
        else
        cout<<op.num<<"/"<<op.den<<" è più grande\n";
        
        
    }
    else if(ris1.num==ris2.num)
    {
        cout<<"Sono uguali\n"; 
    };
}

frazione frazione::sempli()//frazione sempli()
{   
    int max;
           if(this->num>this->den)
           {
               max=this->den;
           }else
           {
               max=this->num;
           };
           
           while(max>1)
           {
             if((this->num%max==0)&&(this->den%max==0))
             {
                 this->num=this->num/max;
                 this->den=this->den/max;
             }else 
             { 
                max--;
             };
           };
           
           if((this->num<0)&&(this->den<0))
           {
               this->num=1-this->num;
               this->den=1-this->den;
           }
           if((this->num>0)&&(this->den<0))
           {
             this->num=-1*this->num;
             this->den=1-this->den;
           };
           
}



void frazione::setNum(int num)//void setNum(int num)
{
    this->num=num;
}

void frazione::setDen(int den)//void setDen(int den)
{
    this->den=den;
}

int frazione::getNum()//int getNum()
{
    return num;
}

int frazione::getDen()//int getDen()
{
    return den;
}

