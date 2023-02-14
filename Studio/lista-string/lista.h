#include <iostream>

using namespace std;

typedef struct nodo    
{
    string nome;
    struct nodo* next;
}nodo;

typedef nodo* lista;   //lista è il tipo del puntatore con tipo nodo

class list
{
    public:
    list();                  //costruttore senza parametro
    void push(string &nome); //push
    void pop();              //pop
    void stampa();           //visualizza tutta la lista
    
    private:
    lista testa;            //uguale nodo* testa
    
};