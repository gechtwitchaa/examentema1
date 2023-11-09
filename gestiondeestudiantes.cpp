#include <iostream>
#include <string>

class Estudiante {
public:
    // Propiedades de la clase
    std::string nombre;
    int edad;
    std::string grado;

    // Constructor de la clase
    Estudiante(std::string nombre, int edad, std::string grado) {
        this->nombre = nombre;
        this->edad = edad;
        this->grado = grado;
    }

    // Función miembro para mostrar la información del estudiante
    void mostrar_info() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << " años" << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }
};
int main() {
    // Crear un objeto Estudiante
    Estudiante estudiante1("Alberto González", 18, "Ingenieria Informatica");

    // Llamar a la función mostrar_info() para mostrar la información del estudiante
    std::cout << "Información del estudiante:" << std::endl;
    estudiante1.mostrar_info();

    return 0;
}


