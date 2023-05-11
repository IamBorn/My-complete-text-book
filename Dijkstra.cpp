#include <iostream>
#include "Dijkstra.h"

int main(){
    int seed;
    int size, order, limit;
    std::cin >> seed;
    std::cin >> size >> order >> limit;
    graph* exampleGraph = new graph();
    exampleGraph->generate_graph(seed, size, order, limit);
    exampleGraph->print_graph();
    int src;
    std::cin >> src;
    
    try{
        find_shortest_path(src, exampleGraph);
    }
    
    catch(std::invalid_argument &e){
        std::cerr << e.what() << std::endl;
        free(exampleGraph);
        return -1;
    }
    free(exampleGraph);
    return 0;
}