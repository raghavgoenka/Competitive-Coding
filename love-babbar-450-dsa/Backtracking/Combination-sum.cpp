//https://practice.geeksforgeeks.org/problems/combination-sum-1587115620/1#
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  
  public:
  void combination(int ind,int target,vector<int>& arr,set<vector<int>>&s,vector<int>&value)
    {
        if(ind==arr.size())
        { if(target==0){
            s.insert(value);
        }
         return ;
        }
           else if(target==0){
             
            s.insert(value);
                return;
        }
        else if(arr[ind]<=target)
        {
            value.push_back(arr[ind]);
            combination(ind,target-arr[ind],arr,s,value);
            value.pop_back();
            
        }
        combination(ind+1,target,arr,s,value);
    }
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>>  res;
          set<vector<int> > s;
        vector<int>value,A1;
        sort(A.begin(),A.end());
        A1.push_back(A[0]);
        for(int i=1;i<A.size();i++){
            if(A[i]!=A[i-1])
            {
                 A1.push_back(A[i]);
            }
        }
        
        combination(0,B,A1,s,value);
         for (auto itr = s.begin(); itr != s.end(); itr++)
    {
       res.push_back(*itr);
    }
      
        return res;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends