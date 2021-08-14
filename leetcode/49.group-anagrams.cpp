/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<str.size();i++)
        {
            string p=str[i];
            sort(p.begin(),p.end());
            mp[p].push_back(str[i]);
            
        }
       for(auto i:mp)
        {
          
            v.push_back(i.second);
           
        }
        return v;
        
    }
};
// @lc code=end

