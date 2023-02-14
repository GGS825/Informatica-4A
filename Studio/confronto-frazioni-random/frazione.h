#include <iostream>

using namespace std;


class frazione
{
    private:
      int num;//proprietà numeratore
      int den;//proprietà denominatore
      
    public:
       frazione();//costruttore senza parametri
       frazione(int num);//costruttore con 1 parametro
       frazione(int num,int den);//costruttore con 2 parametri
       
       frazione confronto(frazione op);//metodo confronto
       
       frazione sempli();//metodo semplificazione
       
       void setNum(int num);// set numeratore
       void setDen(int den);//set denominatore
       int getNum();//get numeratore
       int getDen();//get denominatore
       
 
};