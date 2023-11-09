#include <iostream>
#include <string>
#include <vector>

class Estudiante {
public:
    std::string nombre;
    int edad;
    std::string grado;

    Estudiante(const std::string& nombre, int edad, const std::string& grado) {
        this->nombre = nombre;
        this->edad = edad;
        this->grado = grado;
    }
};

std::vector<Estudiante> filtrarEstudiantesPorGrado(const std::vector<Estudiante>& estudiantes, const std::string& grado) {
    std::vector<Estudiante> estudiantesFiltrados;

    for (const Estudiante& estudiante : estudiantes) {
        if (estudiante.grado == grado) {
            estudiantesFiltrados.push_back(estudiante);
        }
    }

    return estudiantesFiltrados;
}

int main() {

    std::vector<Estudiante> estudiantes;
    estudiantes.push_back(Estudiante("Jorge", 18, "Ingenieria Informatica"));
    estudiantes.push_back(Estudiante("María", 17, "Derecho"));
    estudiantes.push_back(Estudiante("Alvaro", 18, "Marketing"));
    estudiantes.push_back(Estudiante("Rosa", 16, "ADE"));

    std::string gradoBuscado = "Ingenieria Informatica";


    std::vector<Estudiante> estudiantesFiltrados = filtrarEstudiantesPorGrado(estudiantes, gradoBuscado);

    std::cout << "Estudiantes en " << gradoBuscado << ":" << std::endl;
    for (const Estudiante& estudiante : estudiantesFiltrados) {
        std::cout << estudiante.nombre << " (" << estudiante.edad << " años)" << std::endl;
    }

    return 0;
}

