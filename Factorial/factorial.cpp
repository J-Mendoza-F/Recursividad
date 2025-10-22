#include <iostream>
#include <windows.h>
using namespace std;

int fact(int);

int main (){
	SetConsoleOutputCP(CP_UTF8);
    int n;
    cout<<"Ingrese un número: ";
    cin>>n;
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