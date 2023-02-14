#include <iostream>
#include <string.h>
using namespace std;

class studente
{
    
    private:
      string nome;//Nome
      string cognome;//Cognome
      int data=0;//dataNascita
      int* voti;//vettore voti[10], inizializzato a -1 dai costruttori
      int ultimo;//variabile ultimo contenente l’ultimo voto assegnato, inizializzato a -1 dai costruttori
      
     public:
      studente(string& nome,string& cognome);
      void setVoti(int voto);
      void getVoti();
      void getNome();
      void getCognome();
      void getData();
      void mediaVoti();
};