/*1. Escriba un programa que lea dos numeros y determine cual de ellos es el mayor y dado el caso alerte si ambos son iguales.*/


#include<iostream>

using namespace std;

int main(){
	int v1,v2;

	cout<<"Ingrese los dos numeros: ";
	cin>>v1>>v2;
	if(v1==v2){
		cout<<"Ambos numeros son iguales";
	}
	else if(v1>v2){
		cout<<"El mayor es: "<<v1;
	}
	else{
	cout<<"El mayor es: "<<v2;
	}



	return 0;
}


