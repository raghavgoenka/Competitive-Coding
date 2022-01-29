//https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    void check(vector<vector<int>> &m,int n,int x,int y,string move, vector<string>&res,   vector<vector<bool>> vis)
    
    {
        
        if(x<0||x>=n||y<0||y>=n||vis[x][y]==1||m[x][y]==0){return;}
        if(x==n-1&&y==n-1){
           
            res.push_back(move);
           
            return;
        }
        
        vis[x][y]=true;
        check(m,n,x+1,y,move+"D",res,vis);
        check(m,n,x,y-1,move+"L",res,vis);
        check(m,n,x,y+1,move+"R",res,vis);
       check(m,n,x-1,y,move+"U",res,vis);
        
        
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
    
        vector<string>res;
            if(m[n-1][n-1]==0){return  res;}
        vector<vector<bool>> vis(n, vector<bool>(n, false));
            check(m, n, 0, 0, "", res, vis);
            return res;

    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends