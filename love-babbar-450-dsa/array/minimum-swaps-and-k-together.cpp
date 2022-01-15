//https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1#
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
       int p=0;
       for(int i=0;i<n;i++){if(arr[i]<=k){p++;}}
       if(p==0||p==n){return 0;}
       int j=0,c=0;
       p--;
       int mn=INT_MAX;
       
       for(int i=0;i<n;i++)
       { 
           if(arr[i]>k){c++;}
           
           if(i>=p)
           {
               mn=min(mn,c);
               if(arr[j]>k){c--;}
               j++;
           }
           
       }
       return mn;
        
        
    }
};


// { Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends