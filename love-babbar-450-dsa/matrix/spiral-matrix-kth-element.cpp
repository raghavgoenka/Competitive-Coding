//https://practice.geeksforgeeks.org/problems/cd61add036272faa69c6814e34aa7007d5a25aa6/1#
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        int row=0,col=m-1,row1=n-1,col1=0;
       
        int p=0,res;
        while(p<k)
        {
            for(int i=col1;i<=col&&p<k;i++){p++;if(p==k){res=a[row][i];break;}}
            row++;
            for(int i=row;i<=row1&&p<k;i++){p++;if(p==k){res=a[i][col];break;}}
            col--;
            for(int i=col;i>=col1&&p<k;i--){p++;if(p==k){res=a[row1][i];break;}}
            row1--;
            for(int i=row1;i>=row&&p<k;i--){p++;if(p==k){res=a[i][col1];break;}}
            col1++;
     }
        
        return res;
    }

};

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}  // } Driver Code Ends