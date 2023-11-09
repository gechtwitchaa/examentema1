#include <iostream>
#include <vector>

double calcularPromedio(const std::vector<int>& calificaciones) {
    if (calificaciones.empty()) {
        return 0.0;
    }

    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }

    return static_cast<double>(suma) / calificaciones.size();
}

int main() {
    // Ejemplo: Lista de calificaciones
    std::vector<int> calificaciones = {9, 6, 3, 7, 5};

    double promedio = calcularPromedio(calificaciones);

    std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;

    return 0;
}
