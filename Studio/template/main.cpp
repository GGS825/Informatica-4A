/*
1.La quantità dei tipi Template distingue i tipi dei parametri inseriti
2.Ogni tipo di template deve essere utillizzato nel prototipo della class
*/
#include <iostream>

using namespace std;

template<class t>
void scambio(t &op1,t &op2)
{
    t op3;
    
    op3=op1;
    op1=op2;
    op2=op3;
    
};

int main()
{
    
   int a=5;
   int b=7;
   
   cout<<a;
   cout<<b;
   cout<<endl;

   scambio(a,b);
   
   cout<<a;
   cout<<b;

    return 0;
}
