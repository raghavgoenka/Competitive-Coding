/*
 * @lc app=leetcode id=633 lang=cpp
 *
 * [633] Sum of Square Numbers
 */

// @lc code=start
class Solution {
public:
    bool judgeSquareSum(int c) {
        long int j=sqrt(c);
        long int i=0;
        
        while(i<=j)
        {
            long int p=i*i+j*j;
            if(p==c){return true;}
            else if(p>c){j--;}
            else{i++;}
        }
        return false;
    }
};
// @lc code=end

