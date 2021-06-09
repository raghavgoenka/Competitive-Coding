/*
 * @lc app=leetcode id=41 lang=cpp
 *
 * [128]  Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        
        int n=arr.size();
        if(n==0){return 0;}
        sort(arr.begin(),arr.end());
        int p=arr[0],count=1,mx=0;
        for(int i=1;i<n;i++)
        {   
            if(arr[i]==p){continue;}
           else if(arr[i]==p+1){count++;p=arr[i];}
            else if(arr[i]!=p+1){mx=max(count,mx);p=arr[i];count=1;}
        }
        return max(mx,count);
    }
};
// @lc code=end

