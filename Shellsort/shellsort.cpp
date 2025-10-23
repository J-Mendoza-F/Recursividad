#include <iostream>
#include <windows.h>
#include <ctime>

#define color SetConsoleTextAttribute
using namespace std;

// gap : salto o intervalo (n/2)
void shellsort (int arr[], int n, int gap){
	if (gap==0){
		return;
	}
	
	for (int i=gap; i<n; i++){
		int temp=arr[i];
		int j=i;
		
		while (j>=gap && arr[j-gap]>temp){
			arr[j]=arr[j-gap];
			j=j-gap;
		}
		arr[j]=temp;
	}
	
	shellsort (arr, n, gap/2);
}

int main (){
	SetConsoleOutputCP(CP_UTF8);
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(0));
	
	cout<<"--- ORDENAMIENTO SHELLSORT ---\n";
	
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
	
	shellsort (arr, n, n/2);
	
	cout<<"- ARREGLO ORDENADO -\n";
	for (int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}