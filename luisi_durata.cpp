/*
	Name: orario
	Copyright: Colamonico-Chiarulli
	Author: Paolo Luisi
	Date: 30/09/22 12:08
	Description: Data in input la durata di un brano musicale (come minuti e secondi), dare in output la durata totale in secondi.
*/
#include <iostream>
using namespace std;
int main()
{
	int min=0;
	int sec=0;
	int sectot=0;
	int minsec=0;
	cout<<"inserisci i minuti";
	cin>>min;
	cout<<"inserisci i secondi";
	cin>>sec;
	minsec=min*60;
	sectot=minsec+sec;
	cout<<"i secondi totali del brano sono"<<sectot;
	return 0;
}
