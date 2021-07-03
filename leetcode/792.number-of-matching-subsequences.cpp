/*
 * @lc app=leetcode id=792 lang=cpp
 *
 * [792] Number of Matching Subsequences
 */

// @lc code=start
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int res=0;
        map<string,int>mp;
        for(int i=0;i<words.size();i++){mp[words[i]]++;}
        int len1=s.length();
        
        for(auto i:mp)
        {
            int j=0;
             string a=i.first;
          int len2=a.length();
           for(int p=0;p<len1;p++)
            {    
                if(s[p]==a[j]){j++;}
                if(len1-(p+1)<(len2-j)){break;}
                 if(j==a.length()){break;}
            }
            if(j==len2){res+=mp[a];}
        
            
        }
        return res;
    }
};
// @lc code=end

