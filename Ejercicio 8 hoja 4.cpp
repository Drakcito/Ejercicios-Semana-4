#include <iostream>
using namespace std;
int main() {
	float consumo, p1, p2, p3, total1, total2;
	int zona;
	cout << "Ingrese zona(1-2): ";
	cin >> zona;
	cout << "Ingrese consumo: ";
	cin >> consumo;

	switch (zona)
	{
	case 1:
		if (consumo > 100) {
			p1 = 100 * 0.75;
			p2 = consumo - 100;
			p3 = p2 * 0.9;
			total1 = p1 + p3 + 50;
			cout << "El monto a pagar es: " << total1 << " soles" << endl;
		}
		else {
			cout << "El monto a pagar es : " << 50 << " soles" << endl;
		}
		break;
	case 2:
		if (consumo > 100) {
			p1 = 100 * 0.30;
			p2 = consumo - 100;
			p3 = p2 * 0.7;

			total2 = p1 + p3 + 25;
			cout << "El monto a pagar es: " << total2 << " soles"<< endl;
		}
		else {
			cout << "El monto a pagar es : " << 25 <<" soles"<< endl;
		}
		break;
	default:
			cout << "Dato no valido";
		break;
	}
	return 0;
}
