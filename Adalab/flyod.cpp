#include <bits/stdc++.h>
using namespace std;
#define N 100
void floyd(int graph[N][N], int n)
{
    int dist[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            dist[i][j] = graph[i][j];
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dist[i][k] == 999 || dist[k][j] == 999)
                    continue;
                else if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    cout << "Shortest Path Graph :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, graph[N][N];
    cout << "Enter number of vertices : ";
    cin >> n;
    cout << "Enter the Adjacency Matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }
    floyd(graph, n);
}
/*
999 999 3 999
2 999 999 999
999 7 999 1
6 999 999 999
*/