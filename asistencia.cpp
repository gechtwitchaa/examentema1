#include <iostream>
#include <string>

class RegistroAsistencia {
public:
    std::string fecha;
    std::string estado;

    RegistroAsistencia(const std::string& fecha, const std::string& estado) {
        this->fecha = fecha;
        this->estado = estado;
    }

    void mostrar_asistencia() {
        std::cout << "Fecha de la clase: " << fecha << std::endl;
        std::cout << "Estado de asistencia: " << estado << std::endl;
    }
};



