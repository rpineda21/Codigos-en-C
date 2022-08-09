//Rodrigo Pienda
//Calculadora
//Calculadora.cpp
#include <iostream> 
#include <cmath>
using namespace std;
int main() {
   int numero1;
   int numero2;
   char operacion;
   char otro;
   char suma = '+';
   char resta = '-';
   char multi = '*';
   char divi = '/';
   char porcen = '%';
   char poten2 = '@';
   char poten = '^';
   char si = '1';
   char no = '2';
   cout<<"El menu de operaciones es:\n+ suma \n- resta \n* multiplicacion \n/ division \n% porcentaje \n@ potecia al cuadrado \n^ potencia entre dos numeros"; 
   cout<<"\nDigite su operacion: ";
   cin>>operacion;
   if (operacion == suma) {
   	   cout<<"Digite el primer numero: ";
   cin>>numero1;
   cout<<"Digite el segundo numero: ";
   cin>>numero2;
    int suma = numero1 + numero2; 
    cout<<"La suma de "<< numero1<< " y " <<numero2 << " es igual a "<< suma;}
   else if (operacion == resta) {
   	   cout<<"Digite el primer numero: ";
   cin>>numero1;
   cout<<"Digite el segundo numero: ";
   cin>>numero2;
     int resta = numero1 - numero2; 
    cout<<"La resta de "<< numero1<< " y " <<numero2 << " es igual a "<< resta;}
   else if (operacion == multi) {  
    cout<<"Digite el primer numero: ";
   cin>>numero1;
   cout<<"Digite el segundo numero: ";
   cin>>numero2;
      int multi = numero1 * numero2; 
    cout<<"La multiplicacion de "<< numero1<< " y " <<numero2 << " es igual a "<< multi;}
   else if (operacion == divi) {
   	   cout<<"Digite el primer numero: ";
   cin>>numero1;
   cout<<"Digite el segundo numero: ";
   cin>>numero2;
    float divi = (float) numero1 / numero2; 
    cout<<"La division de "<< numero1<< " entre " <<numero2 << " es igual a "<< divi;}
    else if (operacion == porcen) {   
	cout<<"Digite el numero: ";
   cin>>numero1;
   cout<<"Digite el porcentaje que desea obtener: ";
   cin>>numero2;
      int porcen =  numero1 % numero2; 
    cout<<"El "<< numero2 << " porciento de " << numero1 << " es igual a "<< porcen;}
       else if (operacion == poten2) {   
	cout<<"Digite el numero: ";
   cin>>numero1;
    double elevado = pow (numero1, 2);
	cout << "El numero " << numero1 << " elevado al cuadrado es " << elevado;}
     else if (operacion == poten) {   
	cout<<"Digite el numero: ";
   cin>>numero1;
   cout<<"Digite el numero al cual desea elevar: ";
   cin>>numero2;
  double elevado2 = pow (numero1, numero2);
   cout << "El numero " << numero1 << " elevado al " << numero2 << " es igual a "<< elevado2;}
   else {cout<<"La operacion no es correcta";}
   cout<<"\nPara realizar otra operación escriba: 1";
   cout<<"\nPara finalizar el programa escriba: 2";
   cout<<"\n1 o 2:";
   cin>>otro;
    if (otro == si){
    	main();}
	 else if (otro == no) {
   return 0;}
}
