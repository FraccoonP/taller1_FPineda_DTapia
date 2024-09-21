#pragma once
#include "Libro.h"
#include "Revista.h"
#include "Usuario.h"
#include <iostream>

class Biblioteca {
private:
    MaterialBibliografico* biblioteca[100];
    Usuario* usuarios[50];
    int numMateriales;
    int numUsuarios;

public:
    // Constructor
    Biblioteca() : numMateriales(0), numUsuarios(0) {
        for (int i = 0; i < 100; ++i) biblioteca[i] = nullptr;
        for (int i = 0; i < 50; ++i) usuarios[i] = nullptr;
    }

    // Métodos para gestionar la biblioteca
    void agregarMaterial(MaterialBibliografico* material) {
        if (numMateriales < 100) {
            biblioteca[numMateriales++] = material;
            std::cout << "Material agregado correctamente.\n";
        } else {
            std::cout << "No se puede agregar más material, biblioteca llena.\n";
        }
    }

    void agregarUsuario(Usuario* usuario) {
        if (numUsuarios < 50) {
            usuarios[numUsuarios++] = usuario;
            std::cout << "Usuario agregado correctamente.\n";
        } else {
            std::cout << "No se puede agregar más usuarios, biblioteca llena.\n";
        }
    }

    // Otros métodos de gestión...
};
