/*
 * @lc app=leetcode id=1015 lang=cpp
 *
 * [1015] Smallest Integer Divisible by K
 */

// @lc code=start
class Solution {
public:
    int smallestRepunitDivByK(int k) {
         if(k==1){return 1;}
        if(k%2==0||k%5==0||k%10==0){return -1;}
        unsigned long long int num;
        
        int rem=1,c=1;
        num=1;
        while(rem%k!=0)
        {
           num=(rem*10)+1;
            rem=num%k;
            c++;
          
           
        }
        
      
        return c;
    }
};
// @lc code=end

