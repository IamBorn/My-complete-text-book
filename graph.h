#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <climits>

constexpr int MAXSIZE = 1e4; // Set limit size of graph

class graph{
    public: 
        // Variable
        int adj_matrix[MAXSIZE][MAXSIZE];
        int order, size;

        // Method
        graph(int seed, int size, int order, int limit);

        void print_graph();
};

graph::graph(int seed, int size, int order, int limit){
    srand(seed);
    memset(this->adj_matrix, 0, sizeof(this->adj_matrix));
    size = std::min(size, order*order-order);
    this->order = order;
    this->size = size;
    for(int i = 0; i < size; i++){
        int s = -1, t = -1, w;
        while(s == t || adj_matrix[s][t]){
            s = rand() % order;
            t = rand() % order;
            w = rand() % limit + 1;
        }
        adj_matrix[s][t] = w;
    }
}

void graph::print_graph(){
    for(int i = 0; i < this->order; i++){
        for(int j = 0; j < this->order; j++){
            std::cout << adj_matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}