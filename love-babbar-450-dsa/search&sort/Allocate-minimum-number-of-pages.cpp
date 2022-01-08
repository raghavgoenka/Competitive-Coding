//https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1#

// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++
class Solution 
{
    bool is_valid(int A[],int M,int mid,int N)
    {
        int student=1;
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            if(sum>mid)
            {
                student++;
                sum=A[i];
            }
            if(student>M)
                return false;
        }
        return true;
    }
    public:
    int findPages(int A[], int N, int M) 
    {
        int hi=0;
        int lo=0;
        int ans=-1;
        for(int i=0;i<N;i++)
        {
            lo=max(lo,A[i]);
            hi+=A[i];
        }
       
        while(lo<=hi)
        {
             int mid=lo+(hi-lo)/2;
           
            if(is_valid(A,M,mid,N))
            {
                ans=mid;
                hi=mid-1;
            }
            else
            lo=mid+1;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends