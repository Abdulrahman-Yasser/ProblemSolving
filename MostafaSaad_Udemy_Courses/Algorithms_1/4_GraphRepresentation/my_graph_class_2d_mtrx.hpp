#ifndef CHRONO_WRAPPER
#define CHRONO_WRAPPER

#include <iostream>
#include <vector>

class my_graph_class
{
private:
    std::vector<std::vector<int>> the_graph;

public:
    my_graph_class(int elements);
    my_graph_class();

    void add_undirected_edge(int from, int to);
    void add_directed_edge(int from, int to);
    void print(void);
};

#endif