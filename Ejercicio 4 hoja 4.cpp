#include <iostream>
using namespace std;
int main() {
	int n1, n2;
	cout << "Ingrese dos numeros enteros(N1, N2): ";
	cin >> n1>>n2;
	if (n1 % n2 == 0) {
		cout << n1 << " es multiplo de " << n2 << endl;
	}
	else {
		cout << n1 << " no es multiplo de " << n2 << endl;
	}

	return 0;
}