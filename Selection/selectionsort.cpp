#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

// index = 0
void selectionsort (int arr[], int n, int index){
	if (index==n-1){
		return;
	}
	
	int minIndex=index;
	for (int j=index+1; j<n; j++){
		if (arr[j]<arr[minIndex]){
			minIndex=j;
		}
	}
	
	if (minIndex!=index){
		int temp=arr[index];
		arr[index]=arr[minIndex];
		arr[minIndex]=temp;
	}
	
	selectionsort (arr, n, index+1);
}

int main (){
	srand(time(0));
	
	cout<<"--- ORDENAMIENTO POR SELECCIÓN ---\n";
	
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
	cout<<endl;
	
	selectionsort (arr, n, 0);
	
	cout<<"- ARREGLO ORDENADO -\n";
	for (int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}