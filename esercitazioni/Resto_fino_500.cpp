/*
	Name: Resto 500
	Copyright: Colamonico-Chiarulli
	Author: Luisi Paolo
	Date: 11/10/22 10:24
	Description: Questo programma, dati in input il prezzo da pagare e la banconota a mia disposizione, mi dice quante e quali monete o banconote dovrò restituire.
*/


//1. includo le librerie
#include<iostream>
using namespace std;
//2. inizio il blocco main
int main(){

//3. dichiaro le variabili
float prezzo;
float resto;
float resto2;
float soldi;
float uncent;
float cinqcent;
float diecicent;
float venticent;
float cinquantacent;
int uneuro;
int dueeuro;
int cinqueeuro;
int diecieuro;
int ventieuro;
int cinquantaeuro;
int centoeuro;
int duecentoeuro;
int cinquecentoeuro;

//4. inizializzo le variabili
prezzo=0.0;
resto=0.0;
resto2=0.0;
soldi=0.0;
uncent=0.00;
cinqcent=0.00;
diecicent=0.0;
venticent=0.0;
cinquantacent=0.0;
uneuro=0;
dueeuro=0;
cinqueeuro=0;
diecieuro=0;
ventieuro=0;
cinquantaeuro=0,
centoeuro=0;
duecentoeuro=0;
cinquecentoeuro=0;
//5. input
cout<<"inserisci il prezzo";
cin>>prezzo;
cout<<"inserisci i soldi";
cin>>soldi;

//6. logica - operazioni - algoritmo

if(soldi>prezzo)
{
	resto=soldi-prezzo;
	resto2=resto;
}
if(resto>500)
{
	resto=resto-500;
	cinquecentoeuro=cinquecentoeuro+1;
	}else if(resto>200)
	{
		resto=resto-200;
		duecentoeuro=duecentoeuro+1;
	}
	if(resto>100)
	{
		resto=resto-100;
		centoeuro=centoeuro+1;
		}else if(resto>50)
		{
			resto=resto-50;
			cinquantaeuro=cinquantaeuro+1;
		}
		if(resto>20)
		{
			resto=resto-20;
			ventieuro=ventieuro+1;
			}else if(resto>10)
			{
				resto=resto-10;
				diecieuro=diecieuro+1;
			}
			if(resto>5)
			{
				resto=resto-5;
				cinqueeuro=cinqueeuro+1;
				}else if(resto>2)
				{
					resto=resto-2;
					dueeuro=dueeuro+1;
				}
				if(resto>1)
				{
					resto=resto-1;
					uneuro=uneuro+1;
					}else if(resto>0.5)
					{
						resto=resto-0.5;
						cinquantacent=cinquantacent+1;
					}
					if (resto>0.2)
					{
						resto=resto-0.2;
						venticent=venticent+1;
					}
					if(resto>0.10)
					{
						resto=resto-0.10;
						diecicent=diecicent+1;
						} 
						if(resto>0.05)
						{
							resto=resto-0.05;
							cinqcent=cinqcent+1;
						}
						else if(resto>0.01)
						{
							resto=resto-0.01;
							uncent=uncent+1;
						}
cout<<"il resto è: ";
cout<<resto2 <<endl;
cout<<"le banconote da 500 sono: ";
cout<<cinquecentoeuro <<endl;
cout<<"le banconote da 200 sono: ";
cout<<duecentoeuro <<endl;
cout<<"le banconote da 100 sono: ";
cout<<centoeuro <<endl;
cout<<"le banconote da 50 sono: ";
cout<<cinquantaeuro <<endl;
cout<<"le banconofe da 20 sono: ";
cout<<ventieuro <<endl;
cout<<"le banconote da 10 sono: ";
cout<<diecieuro <<endl;
cout<<"le banconote da 5 sono: ";
cout<<cinqueeuro <<endl;
cout<<"le monete da 2 sono: ";
cout<<dueeuro <<endl;
cout<<"le monete da 1 sono: ";
cout<<uneuro <<endl;
cout<<"le monete da 0.50 sono: ";
cout<<cinquantacent <<endl;
cout<<"le monete da 0.20 sono: ";
cout<<venticent <<endl;
cout<<" le monete da 0.10 sono: ";
cout<<diecicent <<endl;
cout<<"le monete da 0.05 sono: ";
cout<<cinqcent <<endl;
cout<<"le monete da 0.01 sono: ";
cout<<uncent <<endl;
	
return 0;
}
