#include <iostream>
#include <windows.h>

#define color SetConsoleTextAttribute
using namespace std;

int main (){
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleOutputCP(CP_UTF8);
	
	for (int i=0; i<15; i++){
		color(hConsole, i);
		cout<<i<<". Hola mundo\n";
	}
	return 0;
}