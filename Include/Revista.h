#pragma once
#include "MaterialBibliografico.h"
#include <string>

class Revista : public MaterialBibliografico {
private:
    int numeroEdicion;
    std::string mesPublicacion;

public:
    // Constructor
    Revista(const std::string& nombre, const std::string& isbn, const std::string& autor,
            int numeroEdicion, const std::string& mesPublicacion)
        : MaterialBibliografico(nombre, isbn, autor), numeroEdicion(numeroEdicion), mesPublicacion(mesPublicacion) {}

    // Implementación del método virtual
    void mostrarInformacion() const override {
        std::cout << "Revista: " << nombre << "\nISBN: " << isbn << "\nAutor: " << autor
                  << "\nNúmero de Edición: " << numeroEdicion << "\nMes de Publicación: " << mesPublicacion
                  << "\nEstado: " << (prestado ? "Prestado" : "Disponible") << "\n";
    }
};
