//Rodrigo Pineda
//Ejercicio con ciclo do
//03do.cpp
#include "iostream" 
#include "string" 
#include <cstdlib> 
 using namespace std;
int main (){
 int b; 
 string nom; 
 
cout<<"ingrese su primer nombre: "; 
cin>>nom; 
b=1; 
 do { 
cout<<b<<" "<<nom<<"\n"; 
b=b+1; 
}while (b <=10);
system ("pause"); 
}
