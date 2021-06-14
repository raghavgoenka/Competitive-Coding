/*
 * @lc app=leetcode id=1647 lang=cpp
 *
 * [1647] Minimum Deletions to Make Character Frequencies Unique
 */

// @lc code=start
class Solution {
public:
    int minDeletions(string s) {
        vector<int>v(26,0);
        
        for(int i=0;i<s.length();i++){v[s[i]-'a']++;}
         sort(v.begin(),v.end());
         int mn=0,count=0;
        mn=v[25];
        for(int i=25;i>=0;i--)
        {
            if(v[i]==0){break;}
            else if(v[i]>mn)
            {
                count+=v[i]-mn;
            }
            else{
                mn=v[i];
            }
            if(mn>0){mn--;}
           
        }
        return count;
            
    }
};
// @lc code=end

