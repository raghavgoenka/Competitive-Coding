//https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1#
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	   long long res=arr[0],mx=arr[0],mn=arr[0];
	   if(res==0){res=0,mx=1,mn=1;}
	   for(int i=1;i<n;i++)
	   {
	       if(arr[i]<0)
	       {
	           swap(mx,mn);
	       }
	      if(arr[i]>(arr[i]*mx)){mx=arr[i];}
	      else{mx=arr[i]*mx;}
	       
	     if(arr[i]<arr[i]*mn){mn=arr[i];}
	     else{mn=arr[i]*mn;}
	       res=max(mx,res);
	   }
	   
	   return res;
	   
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends