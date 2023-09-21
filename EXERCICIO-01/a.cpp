#include <iostream>

int main() {
    int a, b, c;

    // Passo 1: Pedir ao usuário para digitar dois números inteiros
    std::cout << "Digite o valor de a: ";
    std::cin >> a;

    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    // Passo 2: Calcular a primeira expressão 4 * a + b / 3 - 5
    c = 4 * a + b / 3 - 5;
    std::cout << "Resultado da primeira expressão: " << c << std::endl;

    // Passo 3: Calcular a segunda expressão 4 * (a + b) / (3 - 5)
    c = 4 * (a + b) / (3 - 5);
    std::cout << "Resultado da segunda expressão: " << c << std::endl;

    // Passo 4: Comentar por que os resultados são diferentes
    // Os resultados são diferentes porque a precedência dos operadores é diferente nas duas expressões.
    // Na primeira expressão, a multiplicação e a divisão são realizadas antes da adição e subtração.
    // Na segunda expressão, a adição e a subtração são realizadas antes da multiplicação e divisão.

    // Passo 5: Implementar uma variação da segunda expressão que gera resultado diferente
    c = 4 * (a + b) / 3 - 5;
    std::cout << "Resultado da terceira expressão: " << c << std::endl;

    // Passo 6: Recalcular o valor de c usando a expressão a
    c = a;
    std::cout << "Resultado da quarta expressão: " << c << std::endl;

    return 0;
}
