#include <iostream>

int main() {
    double x, y, z;

    // Passo 1: Pedir ao usuário para fornecer dois números de ponto flutuante
    std::cout << "Digite o primeiro número de ponto flutuante: ";
    std::cin >> x;

    std::cout << "Digite o segundo número de ponto flutuante: ";
    std::cin >> y;

    // Passo 2: Atribuir à variável z a soma de x e y e imprimir o resultado
    z = x + y;
    std::cout << "Soma de x e y: " << z << std::endl;

    // Passo 3: Atribuir à variável z a média de x e y e imprimir o resultado
    z = (x + y) / 2.0;
    std::cout << "Média de x e y: " << z << std::endl;

    // Passo 4: Atribuir à variável z o produto de x e y e imprimir o resultado
    z = x * y;
    std::cout << "Produto de x e y: " << z << std::endl;

    // Passo 5: Atribuir à variável z o maior valor entre x e y e imprimir o resultado
    z = (x > y) ? x : y;
    std::cout << "Maior valor entre x e y: " << z << std::endl;

    // Passo 6: Atribuir à variável z o menor valor entre x e y e imprimir o resultado
    z = (x < y) ? x : y;
    std::cout << "Menor valor entre x e y: " << z << std::endl;

    return 0;
}
