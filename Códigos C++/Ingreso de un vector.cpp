//Rodrigo Pineda
//Programa para ingresos de un vector
//vector.cpp
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int vector[5];
    int i;
    cout<<"ingresa primer dato del vector: ";
    cin>>vector[0];
    cout<<"ingresa segundo dato del vector: ";
    cin>>vector[1];
    cout<<"ingresa tercer dato del vector: ";
    cin>>vector[2];
    cout<<"ingresa cuarto dato del vector: ";
    cin>>vector[3];
    cout<<"ingresa quinto dato del vector: ";
    cin>>vector[4];
    cout<<"\n \n";
    cout<<"ingresa el numero de casilla que quieres verificar: ";
    cin>>i;
    cout<<"\n \n";
   	cout<<"la variable que quieres verificar es: ";
    cout<<vector[i];
	return 0;
}
