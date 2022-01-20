/*
 * @lc app=leetcode id=1283 lang=cpp
 *
 * [1283] Find the Smallest Divisor Given a Threshold
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
    
      int smallestDivisor(vector<int>& q, int n) {
         p=n;
        int l=1,h=*max_element(q.begin(),q.end());

        while(l<=h)
        {
            int mid=l+(h-l)/2;
            
            
          
            if(check(q,mid)<=n){h=mid-1;}
            else{l=mid+1;}
        }
        return l;
 
    }
};
// @lc code=end

