#include <iostream>
using namespace std;
int main() {
    int edad = 0, precio;

    cout << "Ingrese la edad: ";
    cin >> edad;

    if (edad <= 5) {
        precio = 0;
    }

    else if (edad < 18) {
        precio = 7;
    }
    else if (edad >= 18 || edad <= 50) {
        precio = 15;
    }
    else if (edad > 50) {
        precio = 5; 
    }
    cout << "El precio de la entrada es: " << precio<< " soles";
    return 0;
}