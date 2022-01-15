/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
    
public:
    void combination(int ind,int target,vector<int>& arr,vector<vector<int>>&res,vector<int>&value)
    {
        if(ind==arr.size())
        { if(target==0){
            res.push_back(value);
        }
         return ;
        }
           else if(target==0){
             
            res.push_back(value);
                return;
        }
        else if(arr[ind]<=target)
        {
            value.push_back(arr[ind]);
            combination(ind,target-arr[ind],arr,res,value);
            value.pop_back();
            
        }
        combination(ind+1,target,arr,res,value);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>  res;
        vector<int>value;
        
        combination(0,target,candidates,res,value);
        return res;
    }
};
// @lc code=end

