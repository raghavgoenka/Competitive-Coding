//https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int X)
    {
         sort(a,a+n);
     for(int i=0;i<n-2;i++)
     {
         int j=i+1,k=n-1;
         while(j<k)
         {
             if(a[i]+a[j]+a[k]==X){return 1;}
             else if(a[i]+a[j]+a[k]>X){k--;}
             else {j++;}
         }
     }
     return 0; 
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends