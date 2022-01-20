/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */

// @lc code=start
class Solution {
public:
   
    
    
    string minWindow(string s, string t) {
               
       vector<int> a(128,0); 
        int n=s.size(),n2=t.size();
        
       
    if(n2>n){return "";}
        
    if(s==t){return s;}
        
       
        for(int i=0;i<n2;i++)
        {
            a[t[i]]++;}
      
        int j=0,i=0,a1=INT_MAX,b1=0;;
        string res=s+t;
      while(j<n)
       {
          if(a[s[j]]>0){n2--;}
          a[s[j]]--;
          j++;
          while(n2==0)
          {
              if(j-i<a1)
              {
                  a1=j-i;
                  b1=i;
              }
               a[s[i]]++;
                if(a[s[i]] > 0){  
                    n2++;
                }
                i++; 
          }
          
       }
        
       if(a1==INT_MAX){res="";}
        return res.substr(b1,a1);
        
        
        
    }
};
// @lc code=end

