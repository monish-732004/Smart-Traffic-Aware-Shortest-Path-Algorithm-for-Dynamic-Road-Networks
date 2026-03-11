#include <stdio.h>
#include <limits.h>

#define V 5

int minDistance(int dist[], int visited[])
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
    {
        if (visited[v] == 0 && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

void trafficAwareDijkstra(int distance[V][V], int traffic[V][V], int src)
{
    int dist[V];
    int visited[V];

    for (int i = 0; i < V; i++)
    {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minDistance(dist, visited);
        visited[u] = 1;

        for (int v = 0; v < V; v++)
        {
            int weight = distance[u][v] + traffic[u][v];

            if (!visited[v] && distance[u][v] &&
                dist[u] != INT_MAX &&
                dist[u] + weight < dist[v])
            {
                dist[v] = dist[u] + weight;
            }
        }
    }

    printf("Node \t Cost from Source\n");
    for (int i = 0; i < V; i++)
    {
        printf("%d \t %d\n", i, dist[i]);
    }
}

int main()
{
    int distance[V][V] = {
        {0, 5, 7, 0, 0},
        {5, 0, 3, 4, 0},
        {7, 3, 0, 2, 3},
        {0, 4, 2, 0, 5},
        {0, 0, 3, 5, 0}};

    int traffic[V][V] = {
        {0, 2, 0, 0, 0},
        {2, 0, 3, 1, 0},
        {0, 3, 0, 2, 1},
        {0, 1, 2, 0, 2},
        {0, 0, 1, 2, 0}};

    int source = 0;

    trafficAwareDijkstra(distance, traffic, source);

    return 0;
}
