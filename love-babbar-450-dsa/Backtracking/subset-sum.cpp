//https://practice.geeksforgeeks.org/problems/subset-sums2234/1#
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
     void Sum(int ind,int sum,vector<int>&arr,int n,vector<int>&res)
     {
         if(ind==n){res.push_back(sum);return;}
         
         Sum(ind+1,sum+arr[ind],arr,n,res);
         Sum(ind+1,sum,arr,n,res);
     }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>res;
        Sum(0,0,arr,N,res);
        sort(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends