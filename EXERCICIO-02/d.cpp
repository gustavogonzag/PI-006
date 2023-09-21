#include <iostream>
#include <cmath>

int main() {
    double raio;

    // Passo 1: Pedir ao usuário para fornecer o raio do círculo
    std::cout << "Digite o raio do círculo: ";
    std::cin >> raio;

    // Passo 2: Calcular o diâmetro, circunferência (perímetro) e área
    double diametro = 2 * raio;
    double circunferencia = 2 * M_PI * raio; // Usando a constante M_PI para o valor de Pi
    double area = M_PI * pow(raio, 2); // Usando a função pow para elevar ao quadrado

    // Passo 3: Imprimir os resultados na tela
    std::cout << "Diâmetro do círculo: " << diametro << std::endl;
    std::cout << "Circunferência (perímetro) do círculo: " << circunferencia << std::endl;
    std::cout << "Área do círculo: " << area << std::endl;

    return 0;
}
