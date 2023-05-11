#include "random_graph_generator.h"
#include <iostream>

int main(){
    int seed;
    int size, order;
    std::cin >> seed;
    std::cin >> size >> order;
    int adj_matrix[100][100];
    
    random_adj_matrix_graph(seed, adj_matrix, size, order);

    for(int i = 0; i < order; i++){
        for(int j = 0; j < order; j++){
            std::cout << adj_matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}