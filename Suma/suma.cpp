#include <iostream>
#include <windows.h>

#define color SetConsoleTextAttribute
using namespace std;

int sum(int);

int main (){
	SetConsoleOutputCP(CP_UTF8);
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	color (hConsole, 3);
	cout<<"(El ejercicio suma desde 1 hasta n)\n";
	color (hConsole, 6);
	cout<<"--- SUMA RECURSIVA ---\n";
	int n;
	color (hConsole, 7);
	cout<<"Ingrese un número: ";
	cin>>n;
	color (hConsole, 6);
	cout<<"--- RESULTADOS ---\n";
	color (hConsole, 7);
	cout<<"La suma es: "<<sum(n)<<endl;
	return 0;
}

int sum (int n){
	if (n==1){
		n=1;
	} else {
		n=n+sum(n-1);
	}
	return n;
}