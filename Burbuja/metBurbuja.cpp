#include <iostream>
#include <ctime>
#include <windows.h>

#define color SetConsoleTextAttribute
using namespace std;

int main (){
	SetConsoleOutputCP(CP_UTF8);
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(NULL));
	
	color (hConsole, 6);
	cout<<"--- MÉTODO DE ORDENAMIENTO 'BURBUJA' ---\n";
	int tam;
	color (hConsole, 7);
	cout<<"Tamaño del arreglo: ";
	cin>>tam;
	int arr[tam];
	
	for (int i=0; i<tam; i++){
		arr[i]=rand()%9;
	}
	
	color (hConsole, 3);
	cout<<"-- ARREGLO INICIAL --\n";
	color (hConsole, 7);
	for (int i=0; i<tam; i++){
		cout<<arr[i]<<" ";
	}
	
	//Ordenar el arreglo
	int aux;
	for (int i=0; i<tam-1; i++){
		for (int j=0; j<tam-1; j++){
			if (arr[j]>arr[j+1]){
				aux=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=aux;
			}
		}
	}
	
	color (hConsole, 3);
	cout<<"\n- ORDEN ASCENDENTE -\n";
	color (hConsole, 7);
	for (int i=0; i<tam; i++){
		cout<<arr[i]<<" ";
	}
	color (hConsole, 3);
	cout<<"\n- ORDEN DESCENTE -\n";
	color (hConsole, 7);
	for (int i=tam-1; i>=0; i--){
		cout<<arr[i]<<" ";
	}
	
	color (hConsole, 7);
	return 0;
}