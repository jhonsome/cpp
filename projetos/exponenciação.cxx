#include <iostream>

using namespace std;

float exp(float base, float expoente) {
  float valor = base;
  for (int n; n < expoente - 1; n ++) {
    valor *= base;
  }
  return valor;
}

int main(int argc, char *argv[]) {
	float base, expoente, res;
	cout << "Difite o valor da base: ";
	cin >> base;
	cout << "Digite o valor do expoente: ";
	cin >> expoente;
	res = exp(base, expoente);
	cout << res << "\n";
}