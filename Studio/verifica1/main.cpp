/******************************************************************************

Creare la classe Studente composta dai seguenti Membri
Proprietà
    1.	Nome
    2.	Cognome
    3.	dataNascita
    4.	vettore voti[10], inizializzato a -1 dai costruttori
    5.	variabile ultimo contenente l’ultimo voto assegnato, inizializzato a -1 dai costruttori
Metodi
    1.	costruttore con 2 parametri che indichino il nome ed il cognome dello studente avente anche lo scipo di inizializzare le proprietà voti e ultimo
    2.	setVoti con lo scopo di inserire un nuovo voto e con il compito di controllare se siano stati i 10 previsti dal vettore
    3.	getVoti con lo scopo di visualizzare i voti dello studente
    4.	getNome
    5.	getCognome
    6.	getData
    7.	mediaVoti con lo scopo di calcolare la media dei voti inseriti
Scrivere un main che utilizzi la classe Studente e svolga:
1.	Consentire all’utente attraverso un menu di
    a.	Richiedere l’inserimento di un nuovo voto
    b.	Visualizzare i voti presenti
    c.	Richiedere la Media dei Voti visualizzandone: Nome Cognome Media e l’elenco dei voti
    d.	Uscire dal programma


*******************************************************************************/
#include <iostream>
#include "studente.h"
#include <string.h>

using namespace std;

int main()
{
    
    cout<<"Inserisci 1  Richiedere l’inserimento di un nuovo voto \n";
    cout<<"Inserisci 2  Visualizzare i voti presenti\n";
    cout<<"Inserisci 3  Richiedere la Media dei Voti visualizzandone: Nome Cognome Media e l’elenco dei voti\n";
    cout<<"Inserisci 4   Uscire dal programma\n";
    
    int n;
    cout<<"inserisci il nome:";
    string a;
    cin>>a;
    cout<<"inserisci il cognome:";
    string b;
    cin>>b;
    
    studente f1(a,b);
    
    do
    {
        cout<<"Che operazione vuoi fare:";
        cin>>n;
        
     switch(n)
    {
        case 1 :
        {   
            cout<<"Inserisci il voto\n";
            int voto;
            cin>>voto;
            f1.setVoti(voto);
            break;
        };
        case 2 :
        {
            f1.getVoti();
            break;
        };
        case 3 :
        {
            f1.mediaVoti();
            f1.getNome();
            f1.getCognome();
            f1.getData();
            cout<<"\n";
            break;
        };
         case 4 :
        {
            cout<<"ciao";
            break;
        };
        default:
        {
        cout<<"Rinserisci il numero da 1 a 4\n";
         
        break;
        };
        
        
    };
    
        
    }while(n!=4);
    
   

    return 0;
}

