#include <iostream>
#include <cmath>
using namespace std;

double CalcolaDelta(double a,double b,double c) 
{
	double delta;
	
	delta=pow(b,2)-(4*a*c);
	
	cout<<"il delta e': "<<delta<<endl;
	
	return delta;
	
}

int main()
{
	double a;
	double b;
	double c;
	double radice1;
	double radice2;
	
	cout<<"inserisci a: "<<endl;
	cin>>a;
	cout<<"inserisci b: "<<endl;
	cin>>b;
	cout<<"inserisci c: "<<endl;
	cin>>c;
	
	CalcolaDelta(a,b,c);
	D=delta;
	
	if(D>0)
	{
		radice1=(-(b)+sqrt(delta))/2;
		radice2=(-(b)-sqrt(delta))/2;
		cout<<"il delta e' maggiore di 0 e quindi abbiamo 2 soluzioni diverse: "<<endl;
		cout<<radice1<<endl;
		cout<<radice2<<endl;
	}
	else if(delta<0)
	{
		cout<<"il delta e' minore di 0 quindi non abbiamo soluzioni. ";
	}
	else if(D=0)
	{
		radice1=(-(b)+sqrt(delta))/2;
		cout<<"la soluzione è uguale per entrambi i risultati perche' delta è uguale a 0 "<<radice1<<endl;
	}
	return 0;
}
