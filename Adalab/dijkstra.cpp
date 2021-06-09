#include <bits/stdc++.h>
using namespace std;

int minDist(int dist[], int visited[], int n){
    int min = 999;
    int min_index{};
    for(int i=0; i<n; i++){
        if(visited[i]==0 && dist[i]<min){
            min = dist[i];
            min_index = i;
        }
    }
    return min_index;
}

int main(){
    cout <<"Enter the number of nodes: ";
    int n; cin >> n;
    int input[n][n];
    cout << "\nEnter the adjacency matrix\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> input[i][j];
        }
    }
    int visited[n];
    int dist[n];
    for(int i=0; i<n; i++){
        visited[i] = 0;
        dist[i] = 999;
    }
    cout << "Enter the source vertex: ";
    int src; cin >> src;
    dist[src] = 0;
    for(int count=0; count<n-1; count++){
        int u = minDist(dist, visited, n);
        visited[u] = 1;
        for(int v=0; v<n; v++){
            if(visited[v]==0 && input[u][v] && dist[u]!=999 && dist[u]+input[u][v]<dist[v]){
                dist[v] = dist[u] + input[u][v];
            }
        }
    }
    cout << "\nVertex\t" << "Distance from source\n";
    for(int i=0; i<n; i++){
        cout << i << "\t\t" << dist[i] << "\n";
    }
}
/*
0 3 1 6 0 0
3 0 5 0 3 0
1 5 0 5 6 4
6 0 5 0 0 2
0 3 6 0 0 6
0 0 4 2 6 0
*/