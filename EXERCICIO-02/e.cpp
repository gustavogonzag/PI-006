#include <iostream>

int main() {
    double x, y;

    // Passo 1: Pedir ao usuário para fornecer as coordenadas (x, y) do ponto
    std::cout << "Digite o valor de x: ";
    std::cin >> x;

    std::cout << "Digite o valor de y: ";
    std::cin >> y;

    // Passo 2: Usar o operador condicional (?) para determinar o quadrante
    std::string quadrante = (x > 0) ? ((y > 0) ? "primeiro quadrante" : "quarto quadrante") : ((y > 0) ? "segundo quadrante" : "terceiro quadrante");

    // Passo 3: Imprimir o resultado na tela
    std::cout << "O ponto (" << x << ", " << y << ") está no " << quadrante << "." << std::endl;

    return 0;
}
