//Rodrigo Pineda
//Ejercicio con ciclo For
//01for.cpp
#include "iostream" 
#include "string"  
#include <cstdlib> 
using namespace std;
int main ()
    {
int b; 
string nom; 
cout<<"ingrese su primer nombre: "; 
cin>>nom;
for (b=1;b<=10;b++){
cout<<b<<" "<<nom<<"\n";
}
system ("pause"); 
}
