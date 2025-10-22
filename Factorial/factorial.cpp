#include <iostream>
#include <windows.h>

#define color SetConsoleTextAttribute
using namespace std;

int fact(int);

int main (){
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleOutputCP(CP_UTF8);
	
	color(hConsole, 6);
	cout<<"--- FACTORIAL DE UN NÚMERO ---\n";
	color(hConsole, 3);
	cout<<"(Método recursivo)\n";
    int n;
    color(hConsole, 7);
    cout<<"Ingrese un número: ";
    cin>>n;
    color(hConsole, 6);
    cout<<"--- RESULTADOS ---\n";
    color(hConsole, 7);
    cout<<"El factorial de "<<n<<" es: "<<fact(n)<<endl;

    return 0;
}

int fact(int n){
    if (n==0){
        n=1;
    } else {
        n=n*fact(n-1);
    }
    return n;
}