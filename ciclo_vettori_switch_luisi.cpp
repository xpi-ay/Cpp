/*
    Name: Esercizio
    Copyright: Colamonico-Chiarulli
    Author: Luisi Paolo
    Date: 22/11/22 13:23
    Description: 
	Creare un programma con il seguente menu:

	Gentile Utente,
	
	se premi 1, chiede all'utente il numero della lunghezza (es. 5) e fa un ciclo (es. 5 volte) per caricare i dati nel vettore.
	se premi 2, stampa a video il vettore con un ciclo.
	se premi 3, conta quanti numeri pari ci sono nel vettore e stampa il risultato
	se premi 4, conta quanti numeri dispari ci sono nel vettore e stampa il risultato
	se premi 5, conta quanti numeri ci sono maggiori di un numero dato in input e stampa il risultato
	se premi 6, esca dal programma

	
	usare opportunamente i costrutti switch, do while e for.
*/

//1. includo le librerie
#include<iostream>
using namespace std;

//2. inizio il blocco main
int main()
{

//3. dichiaro le variabili e inizializzo le variabili
int n=0;
int i=0;
int vet[i];
int a=0;
int v=0;
int pari=0;
int dispari=0;
int m=0;
int N=0;


// input - logica - operazioni - algoritmo - output
do{

cout<<"Gentile Utente,"<<endl; 
cout<<"se premi 1, chiede all utente il numero della lunghezza e fa un ciclo per caricare i dati nel vettore."<<endl;
cout<<"se premi 2, stampa a video il vettore con un ciclo."<<endl;
cout<<"se premi 3, conta quanti numeri pari ci sono nel vettore e stampa il risultato"<<endl;
cout<<"se premi 4, conta quanti numeri dispari ci sono nel vettore e stampa il risultato"<<endl;
cout<<"se premi 5, conta quanti numeri ci sono maggiori di un numero dato in input e stampa il risultato"<<endl;
cout<<"se premi 6, esca dal programma"<<endl;

cin>>n;
 switch(n)
{
case 1:
 	cout<<"inserisci la lunghezza del vettore "<<endl;
 	cin>>a;
 	for(i=0;i<a;i++)
 	{
 		cout<<"inserisci il valore del vettore "<<endl;
 		cin>>vet[i];
 		cout<<endl;
	}
break;
case 2:
cout<<"inserisci la lunghezza del vettore "<<endl;
 	cin>>a;
 	for(i=0;i<a;i++)
 	{
 		cout<<"inserisci il valore del vettore "<<endl;
 		cin>>vet[i];
 		cout<<endl;
    }
    for(i=0;i<a;i++)
 	{
		cout<<"il valore del vettore e': "<<endl;
		cout<<vet[i];
		cout<<endl;	
	}
break;
case 3:
	cout<<"inserisci la lunghezza del vettore "<<endl;
 	cin>>a;
 	for(i=0;i<a;i++)
 	{
 		cout<<"inserisci il valore del vettore "<<endl;
 		cin>>vet[i];
		cout<<endl;
		if(vet[i]%2==0)
		{
		   pari=pari+1;
	    }
    }
	cout<<"i numeri pari sono: "<<pari;
break;
case 4:
	cout<<"inserisci la lunghezza del vettore "<<endl;
 	cin>>a;
 	for(i=0;i<a;i++)
 	{
 		cout<<"inserisci il valore del vettore "<<endl;
 		cin>>vet[i];
		cout<<endl;
 		if(vet[i]%2!=0)
		{
			dispari=dispari+1;
		}	
    }
    cout<<"i numeri dispari sono: "<<dispari;
break;
case 5:
	cout<<"inserisci il numero da confrontare "<<endl;
	cin>>N;
	cout<<"inserisci la lunghezza del vettore "<<endl;
 	cin>>a;
 	for(i=0;i<a;i++)
 	{
 		cout<<"inserisci il valore del vettore "<<endl;
 		cin>>vet[i];
		cout<<endl;
 		if(vet[i]>N)
		{
			m=m++;
		}	
    }
    cout<<"i numeri maggiori di "<<N<<"sono: "<<m;
break;
case 6:
	return 0;
break;
	
}

}while(n!=0);

//9. fine del programma
}
