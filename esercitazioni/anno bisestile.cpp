#include<iostream>
using namespace std;

int anno;

bool isBisestile(int anno)
{
	bool isBisestile=true;

	if(anno%100==0 && anno%400==0 || anno%4==0 && not(anno%100==0))
	{
		cout<<"l'anno "<<anno<<" e' bisestile.";
		return anno;
	}
	else 
	{
		isBisestile=false;
		cout<<"l'anno "<<anno<<" non e' bisestile.";
		return anno;
		
	}

}

int main()
{
	cout<<"inserisci l'anno ",
	cin>>anno;
	
	isBisestile(anno);
	
	return 0;
	
}
