//https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &mat, int r, int c){
        // code here 
        int num=(r*c)/2,low=1,high=2000;
        int n=mat.size(),m=mat[0].size();
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                int l=0,h=m-1;
                while(l<=h)    // loop to check how many numbers are smaller than mid
                {
                    int m=l+(h-l)/2;
                    if(mat[i][m]<=mid){l=m+1;}
                    else{h=m-1;}
                }
                cnt+=l;
            }
            
            if(cnt<=num){low=mid+1;}
            else{high=mid-1;}
        }
        return low;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends