/*
 * @lc app=leetcode id=89 lang=cpp
 *
 * [89] Gray Code
 */

// @lc code=start
class Solution {
public:
  
    vector<int> grayCode(int n) {
      
        vector<int> v;
      // last n second last gray cod value differ by pow(2,n-1)
        // eg 4 =[0,1,3,2]   2-0=2,3-1=2 
       int d=1<<n;
        for(int i=0;i<d;i++)
        {  
            v.push_back((i>>1)^i);
        }
        return v;
    }
};
// @lc code=end

