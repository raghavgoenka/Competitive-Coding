/*
 * @lc app=leetcode id=2134 lang=cpp
 *
 * [2134] Minimum Swaps to Group All 1's Together II
 */

// @lc code=start
class Solution {
public:
    int minSwaps(vector<int>& num) {
        int one=0,n=num.size();
        string s="";
        for(int i=0;i<n;i++){if(num[i]==1){one++;}s+=to_string(num[i]);}
        
        if(one==n||one==0){return 0;}
        
        int mx=INT_MAX;
        
        int j=0,c=0;
        one--;
        for(int i=0;i<s.size()+one;i++)
        {
             
           if(s[i%n]=='0'){c++;}
           
           if(i>=one)
            { 
               mx=min(mx,c);
                if(s[j]=='0'){c--;}
               j++;
             
            }
            
            
        }
        return mx;
        
        
    }
};
// @lc code=end

