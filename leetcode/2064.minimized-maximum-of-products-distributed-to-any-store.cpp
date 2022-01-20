/*
 * @lc app=leetcode id=2064 lang=cpp
 *
 * [2064] Minimized Maximum of Products Distributed to Any Store
 */

// @lc code=start
class Solution {
public:
    int p;
    int check(vector<int>& q,int k)
    { int a=0;
       if(k==0){return INT_MAX;}
       for(int i=0;i<q.size();i++)
       {
           if(q[i]%k!=0){a++;}
           
           a+=q[i]/k;
           if(a>p){return INT_MAX;}
       }
     return a;
         
    }
    
    int minimizedMaximum(int n, vector<int>& q) {
     p=n;
        long long int sum=0;
        int mx=0;
      
        
        int l=0,h=100000;
        
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            
            int ans=check(q,mid);
            if(ans>n){l=mid+1;}
            else{h=mid-1;}
        }
        return l;
    }
};
// @lc code=end

