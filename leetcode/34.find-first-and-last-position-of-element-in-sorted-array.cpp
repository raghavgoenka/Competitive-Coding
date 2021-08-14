/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v(2);
        if(n==0){v[0]=-1;v[1]=-1;return v;}
        
        int i=0,j=n-1,pos=-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]==target){pos=mid;j=mid-1;}
            else if(nums[mid]>target){j=mid-1;}
            else if(nums[mid]<target){i=mid+1;}
        }
        v[0]=pos;
        i=pos,j=n-1,pos=-1;
         while(i<=j&&i!=-1)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]==target){pos=mid;i=mid+1;}
            else if(nums[mid]>target){j=mid-1;}
            else if(nums[mid]<target){i=mid+1;}
        }
        v[1]=pos;
        return v;
        
    }
};
// @lc code=end

