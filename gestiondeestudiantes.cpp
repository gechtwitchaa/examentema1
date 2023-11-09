#include <iostream>
#include <string>
#include <vector>

class Estudiante {
public:
    // Propiedades de la clase
    std::string nombre;
    int edad;
    std::string grado;
    std::vector<std::string> materias; // Lista de materias registradas

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

    // Función miembro para registrar una materia
    void registrar_materia(const std::string& materia) {
        materias.push_back(materia);
    }

    // Función miembro para mostrar las materias registradas
    void mostrar_materias() {
        std::cout << "Materias registradas para " << nombre << ":" << std::endl;
        for (const std::string& materia : materias) {
            std::cout << "- " << materia << std::endl;
        }
    }
};

int main() {
    // Crear un objeto Estudiante
    Estudiante estudiante1("Alberto González", 18, "Ingeniería Informática");

    // Registrar materias
    estudiante1.registrar_materia("Íngles");
    estudiante1.registrar_materia("Programación");
    estudiante1.registrar_materia("Informática");

    // Llamar a la función mostrar_info() para mostrar la información del estudiante
    std::cout << "Información del estudiante:" << std::endl;
    estudiante1.mostrar_info();

    // Llamar a la función mostrar_materias() para mostrar las materias registradas
    estudiante1.mostrar_materias();

    return 0;
}



