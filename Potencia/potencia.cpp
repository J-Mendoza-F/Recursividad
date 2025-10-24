#include <iostream>
#include <windows.h>
using namespace std;

int potencia (int, int);

int main (){
	cout<<"--- ELEVACIÓN CON RECURSIVIDAD ---\n";
	int a, b, r;
	cout<<"Para la expresión: a^b\n";
	cout<<"Valor a: "; cin>>a;
	cout<<"Valor b: "; cin>>b;
	
	cout<<"--- RESULTADO ---\na^b = "<<potencia (a, b)<<endl;
	return 0;
}

int potencia (int a, int b){
	int n;
	if (b==1){
		n=a;
	} else {
		n=a*potencia(a, b-1);
	}
	return n;
}