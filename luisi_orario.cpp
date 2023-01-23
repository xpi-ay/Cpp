/*
	Name: orario
	Copyright: Colamonico-Chiarulli
	Author: Paolo Luisi
	Date: 30/09/22 12:20
	Description: Dato in input un orario (come ore e minuti), dare in output il valore totale in minuti.
*/
#include <iostream>
using namespace std;
int main()
{
	int ore=0;
	int min=0;
	int mintot=0;
	int oremin=0;
	cout<<"inserisci i ore ";
	cin>>ore;
	cout<<"inserisci i minuti ";
	cin>>min;
	minsec=ore*60;
	mintot=minsec+min;
	cout<<"i minuti totali del brano sono "<<mintot;
	return 0;
}
