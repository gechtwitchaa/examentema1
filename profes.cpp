#include <iostream>
#include <string>

class Profesor {
public:
    // Propiedades de la clase
    std::string nombre;
    int edad;
    std::string materia;
    int añosExperiencia;

    // Constructor de la clase
    Profesor(const std::string& nombre, int edad, const std::string& materia, int añosExperiencia) {
        this->nombre = nombre;
        this->edad = edad;
        this->materia = materia;
        this->añosExperiencia = añosExperiencia;
    }

    // Función miembro para mostrar la información del profesor
    void mostrar_info_profesor() {
        std::cout << "Nombre del profesor: " << nombre << std::endl;
        std::cout << "Edad: " << edad << " años" << std::endl;
        std::cout << "Materia que imparte: " << materia << std::endl;
        std::cout << "Años de experiencia: " << añosExperiencia << " años" << std::endl;
    }
};

