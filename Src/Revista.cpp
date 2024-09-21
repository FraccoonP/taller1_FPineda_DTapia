#include "../include/Revista.h"
#include <iostream>

// Implementación del método mostrarInformacion
void Revista::mostrarInformacion() const {
    std::cout << "Revista: " << nombre << "\nISBN: " << isbn << "\nAutor: " << autor
              << "\nNúmero de Edición: " << numeroEdicion << "\nMes de Publicación: " << mesPublicacion
              << "\nEstado: " << (prestado ? "Prestado" : "Disponible") << "\n";
}
