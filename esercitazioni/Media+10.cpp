#include <iostream>
using namespace std;

double CalcolaMedia(double a, double b)
{
	double tot;
	double media;
	media=(a+b)/2;
	tot=media+10;
	return tot;
}

int main()
{
	double a;
	double b;

	cout<<"inserici il primo valore"<<endl;
	cin>>a;
	cout<<"inserisci il secondo valore"<<endl;
	cin>>b;
	
	cout<<CalcolaMedia(a,b);
    
	return 0;
}
