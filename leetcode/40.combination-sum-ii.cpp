/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
 */

// @lc code=start
class Solution {
    
public:
    void combination(int ind,int target,vector<int>& arr,vector<vector<int>>&res,vector<int>&value)
    {
        if(target==0){
            res.push_back(value);
            return ;
        }
         
        for(int i=ind;i<arr.size();i++)
        {
            if(i>ind&&arr[i]==arr[i-1]){continue;}
            if(arr[i]>target){break;}
            value.push_back(arr[i]);
            combination(i+1,target-arr[i],arr,res,value);
            value.pop_back();
        }

    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>  res;
        vector<int>value;
        sort(candidates.begin(),candidates.end());
        
        combination(0,target,candidates,res,value);
        
        return res;
    }
};
// @lc code=end

