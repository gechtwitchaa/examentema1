#include <iostream>
#include <vector>
#include <exception>

class MateriaYaRegistradaException : public std::exception {
public:
    MateriaYaRegistradaException(const std::string& materia)
            : materia_(materia) {}

    virtual const char* what() const throw() {
        return ("La materia '" + materia_ + "' ya ha sido registrada.").c_str();
    }

private:
    std::string materia_;
};

class Estudiante {
public:
    std::string nombre;
    std::vector<std::string> materiasRegistradas;

    Estudiante(const std::string& nombre) : nombre(nombre) {}

    // Función para registrar una materia
    void registrarMateria(const std::string& materia) {
        for (const std::string& materiaRegistrada : materiasRegistradas) {
            if (materiaRegistrada == materia) {
                throw MateriaYaRegistradaException(materia);
            }
        }
        materiasRegistradas.push_back(materia);
    }
};

int main() {
    Estudiante estudiante("Juan Perez");

    try {
        estudiante.registrarMateria("Matemáticas");
        estudiante.registrarMateria("Historia");
        estudiante.registrarMateria("Matemáticas");
    } catch (const MateriaYaRegistradaException& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
