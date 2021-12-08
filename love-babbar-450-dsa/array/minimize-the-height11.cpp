//https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
         sort(arr, arr+n);
       int res=arr[n-1]-arr[0];
       int large=arr[n-1]-k, small=arr[0]+k;
       int min_, max_;
       
       for(int i=0; i<n-1; i++){
           
               max_ = max(arr[i]+k,large);
               min_ = min(arr[i+1]-k,small);
               if(min_<0)
                   continue;
               else
                   res = min(res, max_-min_);
           
       }
       return res;
  
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends