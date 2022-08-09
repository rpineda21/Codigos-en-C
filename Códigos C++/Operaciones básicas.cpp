//Rodrigo Pineda
//Operaciones básicas
//Operaciones.cpp
#include "iostream"
using namespace std;
int main () {
	int a,b,c,d,e,f,g,h;
	cout<<"Ingrese Dato #1: ";
	cin>>a;
	cout<<"Ingrese Dato #2: ";
	cin>>b;
		
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a^b;
	h=a+a+b+b;
	
	cout<<"\nLa suma es: ";
	cout<<c;
	cout<<"\nLa resta es: ";
	cout<<d;
	cout<<"\nLa multiplicacion es: ";
	cout<<e;
	cout<<"\nLa division es: ";
	cout<<f;
	cout<<"\nLa potencia es: ";
	cout<<g;
	cout<<"\nLa suma de a+a+b+b es: ";
	cout<<h;
	return 0;
}
