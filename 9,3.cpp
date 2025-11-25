#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout << "Ingrese la cantidad de numeros: ";
	cin >> n;
	
	int vector[n];
	
	for(int i = 0; i < n; i++){
		cout << "Ingrese el numero " << i+1 << ": ";
		cin >> vector[i];
	}
	
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(vector[j] > vector[j+1]){
				int temp = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = temp;
			}
		}
	}
	
	cout << "\nVector ordenado: ";
	for(int i = 0; i < n; i++){
		cout << vector[i] << " ";
	}
	cout << endl;
	
	return 0;
}
