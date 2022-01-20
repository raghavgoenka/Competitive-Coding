/*
 * @lc app=leetcode id=131 lang=cpp
 *
 * [131] Palindrome Partitioning
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string> > res;
        int len=s.size();
        vector<string> path;
         vector<vector<bool>> dp (len, vector <bool> (20, false));
        func(0, s, path, res,dp);
        return res;
    }
    
    void func(int index, string s, vector<string> &path,vector<vector<string> > &res,vector<vector<bool>> &dp) {
        if(index == s.size()) {
            res.push_back(path);
            return;
        }
        for(int i = index; i < s.size(); ++i) {
            if (s[index] == s[i] && (i - index <= 2 || dp[index + 1][i - 1])) {
                path.push_back(s.substr(index, i - index + 1));
                dp[index][i]=true;
                func(i+1, s, path, res,dp);
                path.pop_back();
            }
        }
    }
    
    bool isPalindrome(string s, int start, int end) {
       
        while(start <= end) {
            if(s[start++] != s[end--])
             
                return false;
        }
       
         
        return true;
    }
};
// @lc code=end

