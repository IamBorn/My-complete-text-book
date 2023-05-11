#include <stdlib.h>

template <size_t rows, size_t cols>
void random_adj_matrix_graph(int seed, int (&graph)[rows][cols], int size, int order){
    srand(seed); // initialize rand() by seed
    
    for(int i = 0; i < size; i++){
        int s = rand() % order;
        int t = rand() % order;
        graph[s][t] = 1;
    }
}