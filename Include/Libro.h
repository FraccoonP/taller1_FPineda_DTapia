#pragma once
#include "MaterialBibliografico.h"
#include <string>

class Libro : public MaterialBibliografico {
private:
    std::string fechaPublicacion;
    std::string resumen;

public:
    // Constructor
    Libro(const std::string& nombre, const std::string& isbn, const std::string& autor,
          const std::string& fechaPublicacion, const std::string& resumen)
        : MaterialBibliografico(nombre, isbn, autor), fechaPublicacion(fechaPublicacion), resumen(resumen) {}

    // Implementación del método virtual
    void mostrarInformacion() const override {
        std::cout << "Libro: " << nombre << "\nISBN: " << isbn << "\nAutor: " << autor
                  << "\nFecha de Publicación: " << fechaPublicacion << "\nResumen: " << resumen
                  << "\nEstado: " << (prestado ? "Prestado" : "Disponible") << "\n";
    }
};
