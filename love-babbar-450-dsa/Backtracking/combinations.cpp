//https://leetcode.com/problems/combinations/submissions/
class Solution {
public:
    vector<int>temp;
     void combinations(int ind,int n, vector<vector<int>>& res,int k)
    {
        if(temp.size()==k)
        {
            res.push_back(temp);
            return;
        }
        for(int i=ind;i<=n;i++)
        {
            temp.push_back(i);
            combinations(i+1,n,res,k);
            temp.pop_back();
            
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        
        combinations(1,n,res,k);
        return res;
    }
};