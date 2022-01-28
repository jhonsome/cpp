#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  /*tipos de valores:

  byte 
	short 
	int 
	long 
	char 
	string 
	float 
	double 
	bool*/
	double n1;
	double n2;
	double res;
	cout << "Digite o primeiro número: ";
	cin >> n1;
	cout << "Digite o segundo número: ";
	cin >> n2;
	res = n1 + n2;
	cout << n1 << " + " << n2 << " = " << res;
	return 0;
}