#include "my_graph_class_2d_mtrx.hpp"

my_graph_class::my_graph_class(int elements){
    int tmp;
    for(int i = 0; i < elements; i++){
        std::vector<int> tmp_vctr;
        for(int j = 0; j < elements; j++){
            if(i == j){
                tmp_vctr.push_back(0);
                continue;
            }
            std::cin >> tmp;
            tmp_vctr.push_back(tmp);
        }
        the_graph.push_back(tmp_vctr);
    }
}
my_graph_class::my_graph_class(){
    int tmp, elements;
    std::cin >> elements;
    for(int i = 0; i < elements; i++){
        std::vector<int> tmp_vctr;
        for(int j = 0; j < elements; j++){
            if(i == j){
                tmp_vctr.push_back(0);
                continue;
            }
            std::cin >> tmp;
            tmp_vctr.push_back(tmp);
        }
        the_graph.push_back(tmp_vctr);
    }
}

void my_graph_class::add_undirected_edge(int from, int to){
    the_graph[from][to]++;
    the_graph[to][from]++;
}
void my_graph_class::add_directed_edge(int from, int to){
    the_graph[from][to]++;
}
void my_graph_class::print(void){
    for(int i = 0; i < the_graph.size(); i++){
        for(int j = 0; j < the_graph[i].size(); j++){
            std::cout << the_graph[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
