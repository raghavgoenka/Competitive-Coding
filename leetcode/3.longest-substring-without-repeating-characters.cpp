/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */


// @lc code=start



class Solution {
public:
     int lengthOfLongestSubstring(string s) {
        if(s.length()==0){return 0;}
        int n=s.length();
        
        int i=0,j=0,res=1;
        vector<int> v(300,0);
        v[s[0]]++;
        while(j!=n-1)
        {
            if(v[s[j+1]]==0)
            {
                j++;
                v[s[j]]=1;
                res=max(res,j-i+1);
                
            }
            else{
                v[s[i]]--;
                i++;
                
            }
        }
        return res;
    }
};
// @lc code=end

