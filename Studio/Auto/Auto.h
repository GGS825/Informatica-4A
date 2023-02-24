#include <iostream>

using namespace std;

 
class Auto
{
   protected:
   char* nome;      //il nome del conducente che ha effetuato la prenotazione
   char* cognome;   //il cognome del conducente che ha effetuato la prenotazione

   private:
   char* marca_e_modello;
   int posti;
   int  porte;
   int potenza;
   char* tipo_di_cambio;
   char* targa;
   float prezzo_al_giorno;
   
   
   public:
   Auto();
   //Costruttore:inserisce i dati dell'auto
   void visualizza();
   //visualizza i tutti dati dell'auto 
   bool verifica();
   /*Verifica l'auto se sia prenotato oppure no
    true significa che al momento l'auto non è ancora prenotato da nessuno
    false significa che al momento l'auto è stato prenotato da qualcuno
   */
   void Inserisci(char* nome,char* cognome);
   //Inserisce il nome e il cognome del conducente che ha effetuato la prenotazione
   void cancella();
   //Cancella le informazioni del conducente quando l'auto si finisce il noleggio
   void modifica();
   //Rinserisce i dati dell'auto
   float getPrezzo_al_giorno();
   //Fornisce il prezzo al giorno per calcolare il prezzo totale per la prenotazione
   char* getTarga();
   /*fornisce la targa che è l'indetità univoca di una macchina
     per esempio,In un indirizzo di ritiro,ci sono 10 macchine stesse di fiat500,per
   distinguerle,ci serve la targa
   */

};