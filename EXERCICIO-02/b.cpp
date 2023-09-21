#include <iostream>

int main() {
    int num1, num2;

    // Passo 1: Pedir ao usuário para fornecer dois números inteiros
    std::cout << "Digite o primeiro número inteiro: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número inteiro: ";
    std::cin >> num2;

    // Passo 2: Encontrar o maior número e imprimir
    int maiorNumero = (num1 > num2) ? num1 : num2;

    if (num1 == num2) {
        std::cout << "Estes números são iguais." << std::endl;
    } else {
        std::cout << maiorNumero << " é maior." << std::endl;
    }

    // Passo 3: Verificar se o maior número é par ou ímpar
    if (maiorNumero % 2 == 0) {
        std::cout << maiorNumero << " é um número par." << std::endl;
    } else {
        std::cout << maiorNumero << " é um número ímpar." << std::endl;
    }

    return 0;
}
