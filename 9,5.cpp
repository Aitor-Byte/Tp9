//en los ultimos dos ejercicios le tuve que pedir un poco de ayuda a claude porque me costaba bastante
#include <iostream>
using namespace std;

int main(){
	
	int vector[10];
	
	for(int i = 0; i < 10; i++){
		cout << "Ingrese el numero " << i+1 << ": ";
		cin >> vector[i];
	}
	
	bool contados[10] = {false};
	
	cout << "\nFrecuencia de cada numero:\n";
	
	for(int i = 0; i < 10; i++){
		if(!contados[i]){
			int frecuencia = 1;
			
			for(int j = i+1; j < 10; j++){
				if(vector[i] == vector[j]){
					frecuencia++;
					contados[j] = true;
				}
			}
			
			cout << "Numero " << vector[i] << ": " << frecuencia << " veces" << endl;
		}
	}
	
	return 0;
}
