/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int N=arr.size();
         for(int i = 0; i < N; i++)
        {
            arr[i] -= 1;
        }
        
        for(int i = 0; i < N; i++)
        {
            arr[arr[i] % N] += N;
        }
        
        for(int i = 0; i < N; i++)
        {
            arr[i] /= N;
            
            if(arr[i] >= 2)
            {
               return i+1;
            }
            
           
        }
        return 0;
    }
};
// @lc code=end

