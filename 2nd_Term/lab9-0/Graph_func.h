#ifndef NSU_LEARNING_GRAPH_FUNC_H
#define NSU_LEARNING_GRAPH_FUNC_H

#define GRAPH struct graph
#define DEIKSTRA struct deikstra

GRAPH{
    int* arr;
    int start;
    int finish;
    int node_count;
    int edge_count;
};

DEIKSTRA{
    int * marked;
    int minway;
    int * way;
};

GRAPH* Creating_graph(int start, int finish, int node_count, int edge_count){
    GRAPH * graph;
    graph = (GRAPH*)malloc(sizeof(GRAPH));
    graph -> start = start;
    graph -> finish = finish;
    int * arr = (int*) malloc(node_count * node_count * sizeof(unsigned int));
    graph -> arr = arr;
    graph -> node_count = node_count;
    graph -> edge_count = edge_count;

    return graph;
}


void add_graph(int st_edge, int fn_edge, int weight_edge, GRAPH * graph,
               int node_count){
    graph -> arr[(st_edge - 1) * node_count + (fn_edge - 1)] = weight_edge;
    graph -> arr[(fn_edge - 1) * node_count + (st_edge - 1)] = weight_edge;
}


void Deikstra_alg(GRAPH * graph){

}

#endif
