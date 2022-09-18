#include <iostream>
using namespace std;
int main() {
	int l1, l2, l3;
	cout << "Ingrese los lados de un triangulo(A B C): ";
	cin >> l1 >> l2 >> l3;
	if (l1 + l2 > l3 && l1 + l3 > l2 && l3 + l2 > l1) {
		cout << "SI ES UN TRIANGULO";
	}
	else {
		cout << "NO ES UN TRIANGULO";
	}

	return 0;
}