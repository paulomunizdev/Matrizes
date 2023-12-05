#include <iostream>
#include <vector>

int main() {
    // Exemplo 1: Declaração e Inicialização de uma Matriz
    std::cout << "Exemplo 1: Declaração e Inicialização de uma Matriz" << std::endl;
    std::vector<std::vector<int>> matriz = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Exemplo 2: Acesso aos Elementos da Matriz
    std::cout << "\nExemplo 2: Acesso aos Elementos da Matriz" << std::endl;
    std::cout << "Elemento na posição (2, 3): " << matriz[1][2] << std::endl;

    // Exemplo 3: Iteração pelos Elementos da Matriz
    std::cout << "\nExemplo 3: Iteração pelos Elementos da Matriz" << std::endl;
    for (size_t i = 0; i < matriz.size(); ++i) {
        for (size_t j = 0; j < matriz[i].size(); ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Exemplo 4: Modificação de Elementos da Matriz
    std::cout << "\nExemplo 4: Modificação de Elementos da Matriz" << std::endl;
    matriz[0][0] = 10;

    // Exemplo 5: Adição de Linha à Matriz
    std::cout << "\nExemplo 5: Adição de Linha à Matriz" << std::endl;
    std::vector<int> novaLinha = {11, 12, 13};
    matriz.push_back(novaLinha);

    // Exemplo 6: Remoção de Linha da Matriz
    std::cout << "\nExemplo 6: Remoção de Linha da Matriz" << std::endl;
    matriz.pop_back();

    return 0;
}
