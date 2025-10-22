#include <iostream>
#include <ctime>
#include <windows.h>

#define color SetConsoleTextAttribute
using namespace std;

int main (){
	SetConsoleOutputCP(CP_UTF8);
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(NULL));
	
	cout<<"--- MÉTODO DE ORDENAMIENTO 'BURBUJA' ---\n";
	int tam;
	cout<<"Tamaño del arreglo: ";
	cin>>tam;
	int arr[tam];
	
	for (int i=0; i<tam; i++){
		arr[i]=rand()%9;
	}
	
	cout<<"-- ARREGLO INICIAL --\n";
	for (int i=0; i<tam; i++){
		cout<<arr[i]<<" ";
	}
	
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
	
	cout<<"\n- ORDEN ASCENDENTE -\n";
	for (int i=0; i<tam; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n- ORDEN DESCENTE -\n";
	for (int i=tam-1; i>=0; i--){
		cout<<arr[i]<<" ";
	}
	return 0;
}