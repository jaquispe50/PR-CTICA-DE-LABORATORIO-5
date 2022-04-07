/*5.a PUNTEROS

JESUS ANGEL QUISPE SUNTURA

Solicitar un número y mediante un puntero comprobar si es par o impar; 
además indicar su posición de memoria
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
void Funcion();

int main (){
	system("color 0d");
	Funcion();
		
	return 0;
}
void Funcion(){
	int  a;
	int* p;
	
	p=&a;
	//Ingreso de datos
	cout<<"Ingrese un numero: "<<endl;
	cin>>a;
	//Operaciones y resultado
	if((*p%2)==0){
		cout<<"El numero ingresado es PAR"<<endl;
		cout<<"Su direccion de memoria es: "<<p;	
	} else{
		cout<<"El numero ingresado es IMPAR"<<endl;
		cout<<"Su direccion de memoria es: "<<p;		
	}
}
