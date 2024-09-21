#include <iostream>
#include "Biblioteca.h"

void mostrarMenu() {
    std::cout << "1. Agregar Libro\n";
    std::cout << "2. Agregar Revista\n";
    std::cout << "3. Listar Materiales\n";
    std::cout << "4. Prestar Material\n";
    std::cout << "5. Devolver Material\n";
    std::cout << "6. Salir\n";
}

int main() {
    Biblioteca biblioteca;
    int opcion;

    do {
        mostrarMenu();
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch(opcion) {
            case 1: {
                std::string nombre, isbn, autor, fecha, resumen;
                std::cout << "Ingrese nombre: "; std::cin >> nombre;
                std::cout << "Ingrese ISBN: "; std::cin >> isbn;
                std::cout << "Ingrese autor: "; std::cin >> autor;
                std::cout << "Ingrese fecha de publicación: "; std::cin >> fecha;
                std::cout << "Ingrese resumen: "; std::cin >> resumen;
                biblioteca.agregarMaterial(new Libro(nombre, isbn, autor, fecha, resumen));
                break;
            }
            case 2: {
                std::string nombre, isbn, autor,
