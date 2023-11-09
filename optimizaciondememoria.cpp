#include <iostream>

void intercambiar(int* ptrA, int* ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {
    int a = 1;
    int b = 2;

    std::cout << "Valores iniciales: a = " << a << ", b = " << b << std::endl;

    intercambiar(&a, &b);

    std::cout << "Valores intercambiados: a = " << a << ", b = " << b << std::endl;

    return 0;
}
