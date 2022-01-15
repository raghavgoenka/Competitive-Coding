//https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1#
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	void permutations(string nums, vector<string>& res, string value,map<char,int>mp)
    {
        if(value.size()==nums.size())
        {
            res.push_back(value);//pushing the value vector in resut array!
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]==0){
            
                mp[nums[i]]=1;
                value+=(nums[i]);
                permutations(nums,res,value,mp);
                value.pop_back();//after recursion call returns this will  pop the element from the value vector
                mp[nums[i]]=0;//and this will set the element value to 0 in map
            }
            
        }
    }
	
	    
		vector<string>find_permutation(string S)
		{
		    vector<string> res;
        map<char,int>mp;
        string value="";
        permutations(S,res,value,mp);
        sort(res.begin(),res.end());
        return res;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends

  class Solution {
    
public:
    void permutations(int ind,vector<int>& nums, vector<vector<int>>& res)
    {
        if(ind>=nums.size())
        {
            res.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++)
        {
            
            swap(nums[ind],nums[i]);
            permutations(ind+1,nums,res);
            swap(nums[i],nums[ind]);
               
            
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        
        permutations(0,nums,res);
        return res;
    }
};