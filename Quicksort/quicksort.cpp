#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;


void quicksort (int A[], int inicio, int fin){
	int i=inicio;
	int j=fin;
	int pivote=A[(i+j)/2];
	
	while (i<=j){
		while (A[i]<pivote) i++;
		while (A[j]>pivote) j--;
		
		if (i<=j){
			int aux=A[i];
			A[i]=A[j];
			A[j]=aux;
			i++;
			j--;
		}
	}
	
	if (inicio<j){
		quicksort(A, inicio, j);
	} 
	if (i<fin){
		quicksort(A, i, fin);
	}
}

int main (){
	SetConsoleOutputCP(CP_UTF8);
	srand(time(0));
	cout<<"--- MÉTODO DE ORDENAMIENTO QUICKSORT ---\n(Pivote central)\n";
	
	int n;
	cout<<"Tamaño del arreglo: ";
	cin>>n;
	
	int arr[n];
	for (int i=0; i<n; i++){
		arr[i]=rand()%20;
	}
	
	cout<<"- ARREGLO INICIAL -\n";
	for (int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
	quicksort (arr, 0, n-1);
	
	cout<<"\n--- AAREGLO ORDENADO ---\n";
	for (int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}