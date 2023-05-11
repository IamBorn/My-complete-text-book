#include "graph.h"
#include <queue>
#define MAXSIZE 10000
#define inf 1e9 + 7

void find_shortest_path(int src, graph* g){
    if(src >= g->order){
        throw std::invalid_argument("Index out of bound");
    }
    std::priority_queue<std::pair<int, int>> pq;
    int distance[MAXSIZE];
    memset(distance, inf, sizeof(distance));
    distance[src] = 0;
    pq.push({0, src});
    while(!pq.empty()){
        std::pair<int, int> u = pq.top();
        pq.pop();

        for(int i = 0; i < g->order; i++){
            if(g->adj_matrix[u.second][i] != 0){
                if(u.first + g->adj_matrix[u.second][i] < distance[i]){
                    distance[i] = u.first + g->adj_matrix[u.second][i];
                    
                    pq.push({distance[i], i});
                }
            }
        }
    }
    for(int i = 0; i < g->order; i++){
        std::cout << distance[i] << std::endl;
    }
    return;
}