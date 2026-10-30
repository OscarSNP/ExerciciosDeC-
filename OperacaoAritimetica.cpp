# include <iostream>

int main() {
    int number1, number2;

    std::cout << "Entre o primeiro valor: "<< std::endl;
    std::cin >> number1;
    std::cout << "Entre o segundo valor: "<< std::endl;
    std::cin >> number2;

    // Parte do código para fazer as somas, multiplicacoes, divisoes e subtracoes
    std::cout << "\nResultados a seguir"<< std::endl;
    std::cout << "Soma: " << number1 + number2 << std::endl;
    std::cout << "Multiplicação: " << number1 * number2 << std::endl;
    std::cout << "Subtracao: " << number1 - number2 << std::endl;
    std::cout << "Divisao: " << number1 / number2 << std::endl;

    return 0;
}