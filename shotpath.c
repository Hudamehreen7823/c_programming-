#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#define V 5  // Number of vertices in the graph
// Function to find the minimum distance vertex
int minDistance(int dist[], int visited[]) {
    int min = INT_MAX, min_index = -1;
    for (int v = 0; v < V; v++)
        if (!visited[v] && dist[v] <= min)
            min = dist[v], min_index = v;
    return min_index;
}
// Dijkstra's algorithm using an adjacency matrix representation
void dijkstraMatrix(int graph[V][V], int src) {
    int dist[V];     // dist[i] will hold the shortest distance from src to i
    int visited[V];  // visited[i] will be 1 if vertex i is included in the shortest path
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }
    dist[src] = 0;
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, visited);
        visited[u] = 1;
        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }
}
// Node in adjacency list
struct Node {
    int dest;
    int weight;
    struct Node* next;
};
// Adjacency list
struct AdjList {
    struct Node* head;
};
// Graph structure containing adjacency lists
struct Graph {
    struct AdjList* array;
};
// Function to create a new adjacency list node
struct Node* newAdjListNode(int dest, int weight) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->dest = dest;
    newNode->weight = weight;
    newNode->next = NULL;
    return newNode;
}
// Function to create a graph
struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->array = (struct AdjList*)malloc(vertices * sizeof(struct AdjList));
    for (int i = 0; i < vertices; i++)
        graph->array[i].head = NULL;
    return graph;
}
// Function to add an edge to the graph
void addEdge(struct Graph* graph, int src, int dest, int weight) {
    struct Node* newNode = newAdjListNode(dest, weight);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;
}
// Dijkstra's algorithm using an adjacency list representation
void dijkstraList(struct Graph* graph, int src) {
    int dist[V];
    int visited[V];
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }
    dist[src] = 0;
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, visited);
        visited[u] = 1;
        struct Node* temp = graph->array[u].head;
        while (temp) {
            int v = temp->dest;
            if (!visited[v] && dist[u] != INT_MAX &&
                dist[u] + temp->weight < dist[v]) {
                dist[v] = dist[u] + temp->weight;
            }
            temp = temp->next;
        }
    }
}
int main() 
{
    // Adjacency matrix for the graph
    int matrix[V][V] = {
        {0, 10, 20, 0, 0},
        {10, 0, 0, 50, 10},
        {20, 0, 0, 20, 33},
        {0, 50, 20, 0, 2},
        {0, 10, 33, 2, 0},
    };
    // Creating the adjacency list representation of the same graph
    struct Graph* graph = createGraph(V);
    addEdge(graph, 0, 1, 10);
    addEdge(graph, 0, 2, 20);
    addEdge(graph, 1, 3, 50);
    addEdge(graph, 1, 4, 10);
    addEdge(graph, 2, 3, 20);
    addEdge(graph, 2, 4, 33);
    addEdge(graph, 3, 4, 2);
    addEdge(graph, 4, 3, 2);
    // Measure time for adjacency matrix representation
    clock_t start = clock();
    dijkstraMatrix(matrix, 0);
    clock_t end = clock();
    double time_used_matrix = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken by adjacency matrix: %f seconds\n", time_used_matrix);
    // Measure time for adjacency list representation
    start = clock();
    dijkstraList(graph, 0);
    end = clock();
    double time_used_list = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken by adjacency list: %f seconds\n", time_used_list);

    return 0;
}


