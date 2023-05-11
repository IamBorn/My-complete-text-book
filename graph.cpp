#include <iostream>
#include "graph.h"

int main(){
    int seed;
    int size, order, limit;
    std::cin >> seed;
    std::cin >> size >> order >> limit;
    
    graph* exampleGraph = new graph();
    
    exampleGraph->generate_graph(seed, size, order, limit);
    exampleGraph->print_graph();
    free(exampleGraph);
}