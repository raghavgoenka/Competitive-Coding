//https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int>v;
    int row=0,col=c-1,row1=r-1,col1=0;
  
    while(v.size()< r*c)
    {
        for(int i=col1;i<=col&&v.size()<r*c;i++){v.push_back(matrix[row][i]);}
        row++;
        for(int j=row;j<=row1&&v.size()<r*c;j++){v.push_back(matrix[j][col]);}
       col--;
        for(int p=col;p>=col1&&v.size()<r*c;p--){v.push_back(matrix[row1][p]);}
        row1--;
        for(int k=row1;k>=row&&v.size()<r*c;k--){v.push_back(matrix[k][col1]);}
        col1++;
        
        
    }
    return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends