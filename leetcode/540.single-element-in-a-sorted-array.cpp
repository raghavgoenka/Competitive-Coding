/*
 * @lc app=leetcode id=540 lang=cpp
 *
 * [540] Single Element in a Sorted Array
 */

// @lc code=start
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
         int low=0,high=arr.size()-2;
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            if(arr[mid]==arr[mid^1]){low=mid+1;} 
// to check whether mid is even or odd and decinding on that whether //to check in left part or right part
//if mid is even it means that all number behind it forms pair so check one after mid,and if mid is odd it means one number is alone so check one before mid;
            else{high=mid-1;}
        }
        return arr[low];
    }
};
// @lc code=end

