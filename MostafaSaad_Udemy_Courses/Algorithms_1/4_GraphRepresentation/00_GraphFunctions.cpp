
#include "my_graph_class_2d_mtrx.hpp"


int main(){
	my_graph_class real_graph(5);
	real_graph.add_directed_edge(1, 1);
	real_graph.add_undirected_edge(2, 2);
	real_graph.print();
}
