/*
    Name: Cinema
    Copyright: Colamonico-Chiarulli
    Author: Luisi Paolo
    Date: 19/10/22 09:39
    Description:In un cinema multisala si attuano delle particolari riduzioni sul costo del biglietto di ingresso, sulla base del sesso e dell’età del cliente: fino a 18 anni, sconto del 15%, da 19 a 64 anni, nessuna riduzione; da 65 anni in su, per le donne riduzione del 25%, per gli uomini del 20%. Dati in input il costo del biglietto, il sesso e l’età del cliente, calcolare e dare in output l’importo da pagare.
*/


//1. includo le librerie
#include<iostream>
using namespace std;
//2. inizio il blocco main
int main()
{
	
//3. dichiaro le variabili e inizializzo le variabili
float prezzo=10.0;
float pscontato=0.0;
int sesso=0;
int eta=0;

//5. input
cout<<"inserisci l'eta ";
cin>>eta;
cout<<"inserisci il sesso (se maschio inserisci 0 se femmina inserisci un qualsiasi altro numero positivo ): ";
cin>>sesso;
//6. logica - operazioni - algoritmo
if(eta<=18)
{
pscontato=prezzo*100/15;
 } else
 {
  if(eta>=19 and eta<=64)
  {
  	pscontato=prezzo;
  
 } else
 if(eta>=65 and sesso>0)
 {
 pscontato=prezzo*100/25;	

 } else
 {  
 pscontato=prezzo*100/20;
}
}
//7. output
cout<<"il prezzo è: ";
cout<<pscontato;

//8. ritorno al sistema operativo
return 0;

//9. fine del programma
}
