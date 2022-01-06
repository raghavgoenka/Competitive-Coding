//https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1#
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
         map<ll,ll>mp;
         ll sum=0;
         for(int i=0;i<n;i++)
         {
             sum+=arr[i];
             mp[sum]++;
         }
         ll res=0;
         for(auto i:mp)
         {
             if(i.first==0){res+=i.second;}
           
                 
              res+=(i.second*(i.second-1))/2;
            
         }
         return res;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends