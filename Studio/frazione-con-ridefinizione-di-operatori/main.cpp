/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class frazione
{
    private:
      int num;
      int den;
      
    public:
       frazione();
       frazione(int num);
       frazione(int num,int den);
       frazione somma(frazione op)
       {
           frazione ris;
           ris.num=this->num*op.den+op.num*this->den;
           ris.den=this->den*op.den;
           
        
           int max;
           if(ris.num>ris.den)
           {
               max=ris.den;
           }else
           {
               max=ris.num;
           };
           
           while(max>1)
           {
             if((ris.num%max==0)&&(ris.den%max==0))
             {
                 ris.num=ris.num/max;
                 ris.den=ris.den/max;
             }else 
             { 
                max--;
             };
           };
           
           return ris;
       };
       
       frazione sottrazione(frazione op)
       {
           frazione ris;
           ris.num=this->num*op.den-op.num*this->den;
           ris.den=this->den*op.den;
           
        
           int max;
           if(ris.num>ris.den)
           {
               max=ris.den;
           }else
           {
               max=ris.num;
           };
           
           while(max>1)
           {
             if((ris.num%max==0)&&(ris.den%max==0))
             {
                 ris.num=ris.num/max;
                 ris.den=ris.den/max;
             }else 
             { 
                max--;
             };
           };
           
           return ris;
       };
       
       frazione moltiplicazione(frazione op)
       {
           frazione ris;
           ris.num=this->num*op.num;
           ris.den=this->den*op.den;
          
           
           int max;
           if(ris.num>ris.den)
           {
               max=ris.den;
           }else
           {
               max=ris.num;
           };
           
           while(max>1)
           {
             if((ris.num%max==0)&&(ris.den%max==0))
             {
                 ris.num=ris.num/max;
                 ris.den=ris.den/max;
             }else 
             { 
                max--;
             };
           };
           
           return ris;
       };
       
       frazione divisione(frazione op)
       {
           frazione ris;
           ris.num=this->num*op.den;
           ris.den=this->den*op.num;
           
           int max;
           if(ris.num>ris.den)
           {
               max=ris.den;
           }else
           {
               max=ris.num;
           };
           
           while(max>1)
           {
             if((ris.num%max==0)&&(ris.den%max==0))
             {
                 ris.num=ris.num/max;
                 ris.den=ris.den/max;
             }else 
             { 
                max--;
             };
           };
           
           return ris;
       };
       
       
       
       frazione operator+ (frazione op)
       {
           return somma(op);
       };
       
       frazione operator- (frazione op)
       {
           return sottrazione(op);
       };
       
       frazione operator* (frazione op)
       {
           return moltiplicazione(op);
       };
       frazione operator/ (frazione op)
       {
           return divisione(op);
       };
       
       
       
       void setNum(int num)
       {
           this->num=num;
       };
       void setDen(int den)
       {
           this->den=den;
       };
       int getNum()
       {
           return num;
       };
       int getDen()
       {
           return den;
       };
       
 
};

frazione::frazione()
{
    this->num=0;
    this->den=1;
};

frazione::frazione(int num)
{
    this->num=num;
    this->den=1;
};

frazione::frazione(int num,int den)
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
    

    
};

int main()
{   
    frazione ris1;
    frazione ris2;
    frazione ris3;
    frazione ris4;
    
    int n=1;
    frazione array[n]=frazione f[n]();
    
    frazione f1(6,3);
    frazione f2(12,9);
    
    /*int a=2;
    int b=3;
    int c=a+b;
    cout<<c;*/
    ris1=f1+f2;
    ris2=f1-f2;
    ris3=f1*f2;
    ris4=f1/f2;
    
    cout<<ris1.getNum()<<"/"<<ris1.getDen()<<"\n";
    cout<<ris2.getNum()<<"/"<<ris2.getDen()<<"\n";
    cout<<ris3.getNum()<<"/"<<ris3.getDen()<<"\n";
    cout<<ris4.getNum()<<"/"<<ris4.getDen()<<"\n";

    return 0;
}
