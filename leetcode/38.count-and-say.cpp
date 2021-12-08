/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        if(n==1){return "1";}
        // if(n==2){return "11";}
        // if(n==3){return "21";}
        // if(n==4){return "1211";}
        string t="1",res="",g="";
        
       n-=1;
        while(n-->0)
        {
            int i=0;
            while(i<t.size())
            {
                
                 int c=1;
                int j=i+1;
                while(j<t.size()&&t[j]==t[i])
                {
                    c++;
                    j++;
                }
                res+=to_string(c);
                res+=t[i];
                
               i=j;
            }
            t=res;
            g=res;
            res="";
            
            
        }
        
        return g;
        
    }
};
// @lc code=end

