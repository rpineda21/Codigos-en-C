//Rodrigo Pineda
//Ejercicio con programación CASE
//Ejemplo CASE
#include<iostream>
using namespace std;
int main (){
	int num;
	cout<<" Ingrese un numero menor a 6: ";
	cin>>num;
	switch(num){
		case 1: cout<<"El numero es 1"; break;
		case 2: cout<<"El numero es 2"; break;
		case 3: cout<<"El numero es 3"; break;
		case 4: cout<<"El numero es 4"; break;
		case 5: cout<<"El numero es 5"; break;
		default: cout<< "No es valido"; break;
	}
	return 0;
}
