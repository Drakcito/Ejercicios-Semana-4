#include <iostream>
using namespace std;
int main() {
	int num, centena, decena, unidad;

	cout << "Digite un numero de TRES cifras: ";
	cin >> num;

	centena = (num / 100);
	decena = (num % 100) / 10;
	unidad = (num % 100) % 10;

	if (num > 99 && num < 1000) {
		if (centena == unidad) {
			cout << "\nEl numero es capicua\n";
		}
		else {
			cout << "\nEl numero no es capicua\n";
		}
	}
	else {
		cout << "Numero incorrecto.";
	}
	return 0;
}