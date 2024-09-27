#include <iostream>

using namespace std;

int busBinaria(int arreglo[], int n, int elem){
	int izq = 0, der = n, cen = 0, m;
	while(izq <= der && cen == 0){
		m = (izq + der) / 2;
		if(arreglo[m] == elem) cen = 1;
		else if(elem > arreglo[m]) izq = m+1;
		else der = m-1;
	} 
	if(cen == 1) return m;
	else return -izq;
}

void llenarArreglo(int arreglo[], int n){
	for(int i = 0; i < n; i++){
		cout << "Digite el " << i+1 << " elemento: ", cin >> arreglo[i];
	}
}

int main(){
	int pos, elem;
	int n;
	cout << "Ingrese la cantidad de datos del arreglo ordenado: ", cin >> n;
	
	int arregloO[n];
	
	llenarArreglo(arregloO, n);
	
	cout << "Ingrese el elemento a buscar: ", cin >> elem;
	
	pos = busBinaria(arregloO, n, elem);
	
	if(pos < 0){
		cout << "El elemento deberia estar en la posicion " << pos;
	} else {
		cout << "El elemento esta en la posicion " << pos;
	}
	
	return 0;
}