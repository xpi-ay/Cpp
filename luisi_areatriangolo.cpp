/*
    Name: area triangolo
    Copyright: Colamonico-Chiarulli
    Author: Paolo Luisi
    Date: 18/10/22 10:07
    Description: calcolare l area del triangolo
*/


//1. includo le librerie
#include<iostream>
using namespace std;


//2. inizio il blocco main
int main()
{

//3. dichiaro le variabili e inizializzo le variabili
float area=0.0;
float base=0.0;
float altezza=0.0;

//5. input
cout<<"inserisci l altezza ";
cin>>altezza;
cout<<"inserisci la base ";
cin>>base;

//6. logica - operazioni - algoritmo
area=(base*altezza)/2;

//7. output
cout<<"l area e'\: "<<area;

//8. ritorno al sistema operativo
return 0;

//9. fine del programma
}
