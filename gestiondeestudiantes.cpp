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


