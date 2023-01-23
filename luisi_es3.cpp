#include <iostream>
using namespace std;
int main ()
{
	int a=0;
	int esp=0;
	int ris=1;
	int d=0;
	cout<<"inseisci il numero ";
	cin>>a;
	cout<<"inserisci l esponente ";
	cin>>esp;
	do 
	{
		ris=ris*a;
		d=d+1;
	} while (d<esp);
	
	cout<<"il risultato è ";
	cout<<ris;
	
	return 0;
}
