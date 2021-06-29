#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the number of vertices: ";
    int n; cin >> n;
    int input[n][n];
    cout << "\nEnter the matrix\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> input[i][j];
        }
    }
    int visited[n] = {0};
    queue<int> Queue;
    cout << "Enter the source vertex: ";
    int src; cin >> src;
    visited[src] = 1;
    Queue.push(src);
    while(!Queue.empty()){
        int s = Queue.front();
        cout << s << " ";
        Queue.pop();
        for(int v=0; v<n; v++){
            if(visited[v]==0 && input[s][v]){
                visited[v] = 1;
                Queue.push(v);
            }
        }
    }
    cout << endl;
    return 0;
}
// 0 1 1 0
// 0 0 1 0
// 1 0 0 1
// 0 0 0 1