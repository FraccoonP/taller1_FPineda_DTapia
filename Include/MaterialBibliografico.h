#pragma once
#include <string>

class MaterialBibliografico {
protected:
    std::string nombre;
    std::string isbn;
    std::string autor;
    bool prestado;

public:
    // Constructor
    MaterialBibliografico(const std::string& nombre, const std::string& isbn, const std::string& autor)
        : nombre(nombre), isbn(isbn), autor(autor), prestado(false) {}

    // Método virtual puro para mostrar información
    virtual void mostrarInformacion() const = 0;

    // Métodos para gestionar el estado del préstamo
    bool estaPrestado() const { return prestado; }
    void prestar() { prestado = true; }
    void devolver() { prestado = false; }

    // Destructor virtual para manejo adecuado de punteros
    virtual ~MaterialBibliografico() {}
};
