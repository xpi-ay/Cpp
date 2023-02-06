#include <iostream>
#include <cmath>
using namespace std;

double D;
double radice1;
double radice2;


double x1(double a,double b,double c)
{
	radice1=(-(b)+sqrt(D))/2;
	
	return radice1;
}

double x2(double a,double b,double c)
{
	radice2=(-(b)-sqrt(D))/2;
	
	return radice2;
}

double CalcolaDelta(double a,double b,double c) 
{
	double delta;
	
	delta=pow(b,2)-(4*a*c);
	
	cout<<"il delta e': "<<delta<<endl;
	
	D=delta;
	
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
	
	
	if(D>0)
	{
		cout<<"il delta e' maggiore di 0 e quindi abbiamo 2 soluzioni diverse: "<<endl;
		cout<<"x1: "<<x1(a,b,c)<<endl;
		cout<<"x2: "<<x2(a,b,c)<<endl;
	}
	else if(D<0)
	{
		cout<<"il delta e' minore di 0 quindi non abbiamo soluzioni. ";
	}
	else if(D==0)
	{
		cout<<"la soluzione e' uguale per entrambi i risultati perche' delta e' uguale a 0 quindi il risultato dell'equazione e': "<<x1(a,b,c)<<endl;
	}
	return 0;
}
