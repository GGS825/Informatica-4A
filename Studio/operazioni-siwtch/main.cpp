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
    this->num=1;
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
    
    
    
    cout<<"Che operazione vuoi fare?\n";
    cout<<"Inserisci 1 per solamente inserire delle frazione\n";
    cout<<"Inserisci 2 per fare la somma delle frazioni\n";
    cout<<"Inserisci 3 per fare la sottrazione delle frazioni\n";
    cout<<"Inserisci 4 per fare la moltiplificazione delle frazioni\n";
    cout<<"Inserisci 5 per fare la divisione delle frazioni\n";
    cout<<"Inserisci 6 per uscire\n";
    
    int n;
  
    
    do
{
    cin>>n;
    switch(n)
    {
        case 1 :
        {  int numeratore;
           int denominatore;
           cout<<"quanti frazione vuoi fare inserire?\n";
           int x;
           cin>>x;
            
            for(int i=1;i<=x;i++)
           { 
           cout<<"Inserisci il numeratore:";
           cin>>numeratore;
           cout<<"Inserisci il denominatore:";
           cin>>denominatore;
           frazione f[i];
           f[i](numeratore,denominatore);
         /*f[i].setNum(numeratore);
           f[i].setDen(denominatore);*/
           cout<<"La frazione ("<<i<<"):"<<f[i].getNum()<<"/"<<f[i].getDen()<<"\n";
           };
           
           cout<<"Che operazione vuoi fare ancora?\n";
           
           
           break;   
        };
        case 2:
        {  int numeratore;
           int denominatore;
           frazione ris;
           
           cout<<"Con quanti frazione vuoi fare la somma?\n";
           int x;
           cin>>x;
            
            for(int i=1;i<=x;i++)
           { 
           cout<<"Inserisci il numeratore:";
           cin>>numeratore;
           cout<<"Inserisci il denominatore:";
           cin>>denominatore;
           frazione f[i];
           f[i].setNum(numeratore);
           f[i].setDen(denominatore);
           cout<<"La frazione ("<<i<<"):"<<f[i].getNum()<<"/"<<f[i].getDen()<<"\n";
           
           if(i==1)
            {
             ris=f[i];
            }else
            {
            ris=ris+f[i];    
            }; 
           
           };
           
           cout<<"\nla somma è:"<<ris.getNum()<<"/"<<ris.getDen()<<"\n";
           cout<<"Che operazione vuoi fare ancora?\n";
        
        break;     
        };
        case 3:
        {  int numeratore;
           int denominatore;
           frazione ris;
           
           cout<<"Con quanti frazione vuoi fare la sottrazione?\n";
           int x;
           cin>>x;
            
            for(int i=1;i<=x;i++)
           { 
           cout<<"Inserisci il numeratore:";
           cin>>numeratore;
           cout<<"Inserisci il denominatore:";
           cin>>denominatore;
           frazione f[i];
           f[i].setNum(numeratore);
           f[i].setDen(denominatore);
           cout<<"La frazione ("<<i<<"):"<<f[i].getNum()<<"/"<<f[i].getDen()<<"\n";
           if(i==1)
            {
             ris=f[i];
            }else
            {
            ris=ris-f[i];    
            };
           
           };
           
           cout<<"\nla sottrazione è:"<<ris.getNum()<<"/"<<ris.getDen()<<"\n";
           cout<<"Che operazione vuoi fare ancora?\n";
    
        break;
        };
        case 4:
        {    int numeratore;
           int denominatore;
           frazione ris;
           
           cout<<"Con quanti frazione vuoi fare la moltiplificazione?\n";
           int x;
           cin>>x;
            
            for(int i=1;i<=x;i++)
           { 
           cout<<"Inserisci il numeratore:";
           cin>>numeratore;
           cout<<"Inserisci il denominatore:";
           cin>>denominatore;
           frazione f[i];
           f[i].setNum(numeratore);
           f[i].setDen(denominatore);
           cout<<"La frazione ("<<i<<"):"<<f[i].getNum()<<"/"<<f[i].getDen()<<"\n";
           
           if(i==1)
            {
             ris=f[i];
            }else
            {
            ris=ris*f[i];    
            }; 
           
           };
           
           cout<<"\nla moltiplificazione è:"<<ris.getNum()<<"/"<<ris.getDen()<<"\n";
           cout<<"Che operazione vuoi fare ancora?\n";
    
        break;
        };
        case 5:
        {  int numeratore;
           int denominatore;
           frazione ris;
           
           cout<<"Con quanti frazione vuoi fare la somma?\n";
           int x;
           cin>>x;
            
            for(int i=1;i<=x;i++)
           { 
           cout<<"Inserisci il numeratore:";
           cin>>numeratore;
           cout<<"Inserisci il denominatore:";
           cin>>denominatore;
           frazione f[i];
           f[i].setNum(numeratore);
           f[i].setDen(denominatore);
           cout<<"La frazione ("<<i<<"):"<<f[i].getNum()<<"/"<<f[i].getDen()<<"\n";
           
           if(i==1)
            {
             ris=f[i];
            }else
            {
            ris=ris/f[i];    
            };
           
           };
           
           cout<<"\nla divisione è:"<<ris.getNum()<<"/"<<ris.getDen()<<"\n";
           cout<<"Che operazione vuoi fare ancora?\n";
        break;
        };
        
        default:
        {
        cout<<"Rinserisci il numero da 1 a 6\n";
         
        break;
        };
    
    };

}while(n!=6);    
    
 return 0;
    
}





