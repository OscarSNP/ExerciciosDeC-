#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Inicializa a semente aleatória primeiro
    srand(time(0));

    // Gera o número aleatório após o srand
    int randomNum = rand() % 101;
    int guess;

    std::cout << "Insira um número a seguir (entre 0 e 100):\n" << std::endl;

    do {
        std::cin >> guess; // Lê o palpite dentro do loop

        if (guess < randomNum) {
            std::cout << "Muito baixo, tente novamente: " << std::endl;
        } else if (guess > randomNum) {
            std::cout << "Muito alto, tente novamente: " << std::endl;
        } else {
            std::cout << "Parabens, voce acertou!" << std::endl;
        }
    } while (guess != randomNum);

    return 0;
}