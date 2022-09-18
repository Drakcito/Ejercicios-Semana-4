#include <iostream>
using namespace std;
int main() {
	int ambrosoli, tictac, dono;
	float pro, total;
	cout << "Ambrosoli (0.75)\nTic Tac(1.15)\nDonofrio(0.65)\n";

	cout << "\nIngrese la cantidad de caramelos ´Ambrosoli´: ";
	cin >> ambrosoli;
	cout << "Ingrese la cantidad de caramelos ´Tic Tac´: ";
	cin >> tictac;
	cout << "Ingrese la cantidad de caramelos ´Donofrio´: ";
	cin >> dono;
	
	cout << "\nIngrese el monto de la propina: ";
	cin >> pro;
	total = ambrosoli * 0.75 + tictac * 1.15 + dono * 0.65;
	cout << "El monto total de la compra es: " << total << endl;
	if (pro >= total) {
		cout << "\nLA PROPINA FUE SUFICIENTE PARA PAGAR" << endl;
	}
	else {
		cout << "\nLA PROPINA NO FUE SUFICIENTE PARA PAGAR LOS CARAMELOS" << endl;
	}
	return 0;
}