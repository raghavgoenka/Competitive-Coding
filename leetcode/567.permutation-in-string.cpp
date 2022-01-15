/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start
class Solution {
public:
    bool mat(int a[],int b[])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i]){return false;}
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
      
        
        int a[26]={0},b[26]={0};
        int n=s1.size(),n2=s2.size();
    if(n>n2){return false;}
        for(int i=0;i<n;i++)
        {a[s1[i]-'a']++;b[s2[i]-'a']++;}
       for(int i=0;i<n2-n;i++)
       {
           if(mat(a,b)){return true;}
           b[s2[i]-'a']--;
           b[s2[i+n]-'a']++;
       }
        return mat(a,b);
    }
};
// @lc code=end

