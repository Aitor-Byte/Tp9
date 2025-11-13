#include <iostream>
#include <string.h>
using namespace std;
int main(){
	
	float vector[10];
	int positivo = 0, negativo = 0, cero = 0;
	for(int i; i < 10; i++){
		cout<<"Ingrese los numeros de un vector(10 lugares): ";cin>>vector[i];
	}
	
	for(int j; j < 10; j++){
		if(vector[j]>0){
			positivo++;
		}
		if(vector[j]<0){
			negativo++;
		}
		if(vector[j]==0){
			cero++;
		}
	}
	cout<<"La cantidad de numeros positivos son: "<<positivo;
	cout<<"La cantidad de numeros negativo son: "<<negativo;
	cout<<"La cantidad de ceros son: "<<cero;
	
	return 0;
}
