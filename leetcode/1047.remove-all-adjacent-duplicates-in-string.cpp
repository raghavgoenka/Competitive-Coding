/*
 * @lc app=leetcode id=1047 lang=cpp
 *
 * [1047] Remove All Adjacent Duplicates In String
 */

// @lc code=start
class Solution {
public:
    string removeDuplicates(string s) {
       int i=0;
        while(s.length()>1&&i<s.length())
        {
            if(s[i]==s[i+1]){s.erase(i,2);if(i>0){i=i-1;}}
            else{i++;}
            
            if(s.length()==2&&s[0]!=s[1]){break;}
        }
        return s;
            
    }
};
// @lc code=end

