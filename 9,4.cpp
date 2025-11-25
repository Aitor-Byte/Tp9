#include <iostream>
using namespace std;

int main(){
	
	double array[6];
	
	for(int i = 0; i < 6; i++){
		cout << "Ingrese el numero " << i+1 << ": ";
		cin >> array[i];
	}
	
	double suma = 0;
	
	for(int i = 0; i < 6; i++){
		if(i % 2 == 0){
			suma += array[i];
		}
	}
	
	cout << "\nLa suma de los elementos en posiciones pares es: " << suma << endl;
	
	return 0;
}
