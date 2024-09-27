#include <iostream>

using namespace std;

int busSecDesor(int arreglo[], int n, int elem){
	for (int i = 0; i < n; i++){
		if(arreglo[i] == elem){
			return i;
		}
	}
	return -1;
}

int busSecOrd(int arreglo[], int n, int elem){
	int i, pos;
	for (i = 0; i < n; i++){
		if(arreglo[i] < elem){
			pos = i+1;
		}
	}
	if(arreglo[pos] == elem){
		return pos;
	} else {
		return -pos;
	}
}

void llenarArreglo(int arreglo[], int n){
	for(int i = 0; i < n; i++){
		cout << "Digite el " << i+1 << " elemento: ", cin >> arreglo[i];
	}
}
	
int main(){
	int pos, pos2, elem, elem2;
	int n;
	cout << "Ingrese la cantidad de datos del arreglo desordenado: ", cin >> n;
	
	int arregloD[n];
	
	llenarArreglo(arregloD, n);
	
	cout << "Ingrese el elemento a buscar: ", cin >> elem;
	
	pos = busSecDesor(arregloD, n, elem);
	
	if(pos == -1){
		cout << "No se encontro el elemento";
	} else {
		cout << "Se encontro el elemento en la posicion " << pos;
	}
	
	cout << endl;
	int n2;
	cout << "Ingrese la cantidad de datos del arreglo ordenado: ", cin >> n2;
	int arregloO[n2];
	llenarArreglo(arregloO, n2);
	
	cout << "Ingrese el elemento a buscar: ", cin >> elem2;
	
	pos2 = busSecOrd(arregloO, n2, elem2);
	
	if(pos2 < 0){
		cout << "El elemento deberia estar en la posicion " << pos2;
	} else {
		cout << "El elemento esta en la posicion " << pos2;
	}
	return 0;
}
