#include <iostream>
using namespace std;
int main(){
	
	int vector[5], vector2[5];
	
	for(int i = 0; i < 5; i++){
	cout<<"Ingrese los numeros del primer vector(5 lugares): ";cin>>vector[i];
	}
	
	for(int i = 0; i < 5; i++){
	cout<<"Ingrese los numeros del segundo vector (5 lugares): ";cin>>vector2[i];
	}
	
	for(int i; i < 5; i++){
		if(i == 1 || i == 3 || i == 5){
			vector[i] = vector2[i];
		}
	}
	
	cout<<"Los numeros intercalados son: ";
	for(int i = 0; i < 5; i++){
		cout << vector[i] << " ";
	}
	
	
	
	
	
	
	return 0;
}
