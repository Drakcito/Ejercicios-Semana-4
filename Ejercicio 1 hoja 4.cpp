#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "El numero " << num << " es par.";
    }
    else if (num % 2 == 1) {
        cout << "El numero " << num << " es impar.";
    }
    return 0;
}