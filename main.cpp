#include <iostream>
#include "utilerias.h"

int main() {
    std::cout << "Area y peri`metro de un rectangulo\n";

    double altura;
    double base;
    double Perimetro;
    double Area;

    std::cout << "Introduce la base: ";
    std::cin >> base;
    while (base <= 0) {
        std::cout << "Numero invalido. Introduce un valor positivo: ";
        std::cin >> base;
    }

    std::cout << "Introduce la altura: ";
    std::cin >> altura;
    while (altura <= 0) {
        std::cout << "Numero invalido. Introduce un valor positivo: ";
        std::cin >> altura;
    }

    Area = base * altura;
    Perimetro = 2 * (base + altura);

    std::cout << "El perimetro es: " << Perimetro << std::endl;
    std::cout << "El area es: " << Area << std::endl;

    return 0;
}
