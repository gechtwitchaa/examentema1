#include <iostream>

int sumaDosNumeros(int num1, int num2) {
    int resultado = num1 + num2;
    return resultado;
}

int main() {
    int numero1, numero2;


    std::cout << "Ingrese el primer número: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> numero2;

 
    int resultado = sumaDosNumeros(numero1, numero2);

    std::cout << "La suma de " << numero1 << " y " << numero2 << " es: " << resultado << std::endl;

    return 0;
}
