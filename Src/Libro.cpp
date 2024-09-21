#include "../include/Libro.h"
#include <iostream>

// Implementación del método mostrarInformacion
void Libro::mostrarInformacion() const {
    std::cout << "Libro: " << nombre << "\nISBN: " << isbn << "\nAutor: " << autor
              << "\nFecha de Publicación: " << fechaPublicacion << "\nResumen: " << resumen
              << "\nEstado: " << (prestado ? "Prestado" : "Disponible") << "\n";
}
