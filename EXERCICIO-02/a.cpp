#include <iostream>
#include <cctype> // Para a função isupper e islower

int main() {
    char ch1, ch2, ch3;

    // Passo 1: Pedir ao usuário para digitar dois caracteres
    std::cout << "Digite o primeiro caractere: ";
    std::cin >> ch1;

    std::cout << "Digite o segundo caractere: ";
    std::cin >> ch2;

    // Passo 2: Atribuir à variável ch3 o caractere que antecede ch1
    ch3 = ch1 - 1;

    // Imprimir o caractere em formato numérico decimal, octal, hexadecimal e como caractere
    std::cout << "O caractere que antecede a ch1 é: " << int(ch3) << " (decimal), " << std::oct << int(ch3) << " (octal), " << std::hex << int(ch3) << " (hexadecimal), " << ch3 << std::endl;

    // Passo 3: Atribuir à variável ch3 o caractere que precede ch2
    ch3 = ch2 - 1;

    // Imprimir o caractere em formato numérico decimal, octal, hexadecimal e como caractere
    printf("O caractere que precede a ch2 é: %d (decimal), %o (octal), %x (hexadecimal), %c\n", ch3, ch3, ch3, ch3);

    // Passo 4: Atribuir 'A' a ch3 se ch1 for letra maiúscula, senão atribuir espaço
    ch3 = (std::isupper(ch1)) ? 'A' : ' ';

    // Imprimir o valor de ch3
    std::cout << "O valor de ch3 após verificar ch1 é: " << ch3 << std::endl;

    // Passo 5: Atribuir 'a' a ch3 se ch2 for letra minúscula, senão atribuir espaço
    ch3 = (std::islower(ch2)) ? 'a' : ' ';

    // Imprimir o valor de ch3
    std::cout << "O valor de ch3 após verificar ch2 é: " << ch3 << std::endl;

    // Passo 6: Atribuir '1' a ch3 se ch1 ou ch2 for um dígito, senão atribuir espaço
    ch3 = (std::isdigit(ch1) || std::isdigit(ch2)) ? '1' : ' ';

    // Imprimir o valor de ch3
    std::cout << "O valor de ch3 após verificar ch1 e ch2 é: " << ch3 << std::endl;

    return 0;
}
