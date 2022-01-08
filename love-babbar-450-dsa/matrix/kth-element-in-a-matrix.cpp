//https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1#
// kth largest element in a 2d array sorted row-wise and column-wise
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}
// } Driver Code Ends



int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    
   int low=mat[0][0],high=10000;
      if(k==1){return low;}
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                int l=0,h=n-1;
                while(l<=h)    // loop to check how many numbers are smaller than mid
                {
                    int m=l+(h-l)/2;
                    if(mat[i][m]<=mid){l=m+1;}
                    else{h=m-1;}
                }
                cnt+=l;
            }
        
            // if(cnt==k){return mid;}
             if(cnt<=(k-1)){low=mid+1;}
            else{high=mid-1;}
        }
        return low;
        
}
