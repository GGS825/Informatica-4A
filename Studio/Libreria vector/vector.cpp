/*
1.size()=il numero dei elementi presenti del momento nel vettore
2.capacity()=il massimo numero dei elementi si possono inserire nel 
vettore,si radoppia solitamente quando non ci c'e' più il spazio
3 push_back()=inserire elemento,nel caso supera la capacita'.la capacità' aumenta 
4.resize()=cambia la quantita' dei elementi(tipo ci sono n elementi)
    se <n,taglia i elementi di piu'
    se >n,genera i elementi in piu' e azerare
5.reserve()=La capacita' aumenta a un certo numero dal parametro
6.shrink_to_fit()=la capacita' si diminuisce per adeguare la size()
    cioe'   la capacita'=la size;
7.data()=un puntatore che punta il primo elemento
*/
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    
    vector<int> v2;

   for(int i=0;i<5;i++)
    {
       v2.push_back(6);
       cout<<"    "<<v2[i];
    };
     
     cout<<endl<<"Size:"<<v2.size();  //5(6 6 6 6 6)
     cout<<endl<<"Capacity:"<<v2.capacity();//1 2 4 4 8  =8
     cout<<endl;
     cout<<endl;
     cout<<endl;

     v2.resize(7);          
     cout<<"resize(7)";
     for(int i=0;i<v2.size();i++)
      cout<<"    "<<v2[i];

     cout<<endl<<"Size:"<<v2.size();//7(6 6 6 6 6 0 0)
     cout<<endl<<"Capacity:"<<v2.capacity();//8(size7<8)
     cout<<endl;
     cout<<endl;
     cout<<endl;

     v2.resize(3);          
     cout<<"resize(3)";
     for(int i=0;i<v2.size();i++)
      cout<<"    "<<v2[i];

     cout<<endl<<"Size:"<<v2.size();//3(6 6 6 )
     cout<<endl<<"Capacity:"<<v2.capacity();//8(size3<8)
     cout<<endl;
     cout<<endl;
     cout<<endl;
     
     v2.reserve(3);          
     cout<<"reserve(4)";
     for(int i=0;i<v2.size();i++)
      cout<<"    "<<v2[i];

     cout<<endl<<"Size:"<<v2.size();//3
     cout<<endl<<"Capacity:"<<v2.capacity();//8(size4<8)
     cout<<endl;
     cout<<endl;
     cout<<endl;

     v2.reserve(9);          
     cout<<"reserve(9)";
     for(int i=0;i<v2.size();i++)
      cout<<"    "<<v2[i];

     cout<<endl<<"Size:"<<v2.size();//3
     cout<<endl<<"Capacity:"<<v2.capacity();//9(size9>8)
     cout<<endl;
     cout<<endl;
     cout<<endl;

      v2.shrink_to_fit();
      cout<<endl<<"Size:"<<v2.size();//3
      cout<<endl<<"Capacity:"<<v2.capacity();//3




    return 0;
};