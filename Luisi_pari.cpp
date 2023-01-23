/*
	Name: Somma pari
	Copyright: Colamonico-Chiarulli
	Author: Luisi Paolo
	Date: 10/10/22 10:51
	Description: Dato in input un numero intero, dare in output la somma di tutti i numeri interi pari minori di esso .
*/

//1. includo le librerie
#include <iostream>
using namespace std;
//2. inizio il blocco main
int main(){

//3. dichiaro le variabili
int n;
int somma;
int C;
//4. inizializzo le variabili
n=0;
somma=0;
C=0;

//5. input
cout<<"inserisci il numero ";
cin>>n;

//6. logica - operazioni - algoritmo
do
{
	if(C%2==0)
	{
		somma=somma+C;
	}
	C=C+1;
} while (C<n);

//7. output
cout<<"la somma dei numeri pari è: ";
cout<<somma;


//8. ritorno al sistema operativo
return 0;

//9. fine del programma
}
