#include <iostream>

int division(int numerador, int denominador) {
    if (denominador == 0) {
        throw "División por cero no permitida";
    }
    return numerador / denominador;
}

int main() {
    int numerador, denominador;

    std::cout << "Ingrese el numerador: ";
    std::cin >> numerador;

    std::cout << "Ingrese el denominador: ";
    std::cin >> denominador;

    try {
        int resultado = division(numerador, denominador);
        std::cout << "El resultado de la división es: " << resultado << std::endl;
    } catch (const char* mensaje) {
        std::cerr << "Error: " << mensaje << std::endl;
    }

    return 0;
}

