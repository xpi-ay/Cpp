#include <iostream>
using namespace std;

void CalcolaMedia(double a, double b)
{
	double media;
	media=(a+b)/2;
	cout<<media<<endl;
}

int main()
{
	double a;
	double b;
	
	cout<<"inserici il primo valore"<<endl;
	cin>>a;
	cout<<"inserisci il secondo valore"<<endl;
	cin>>b;
	
    CalcolaMedia(a,b);
	
	return 0;
}
