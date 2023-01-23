/*
	Name: Cerchio
	Copyright: Colamonico-Chiarulli
	Author: Luisi Paolo
	Date: 30/09/22 11:35
	Description: Data in input la misura del raggio, dare in output la circonferenza e l’area del cerchio.
*/
#include <iostream>
using namespace std;
int main()
{
	int r;
	int area;
	int circ;
	cout<<"qual'è il raggio? ";
	cin>>r;
	circ=r*2*3.14;
	area=r*r*3.14;
	cout<<"la circonferenza è: "<<circ;
	cout<<"l'area è :"<<area;
	return 0;
}
