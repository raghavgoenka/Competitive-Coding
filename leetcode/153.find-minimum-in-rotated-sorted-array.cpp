/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& arr) {
         int lo=0, hi=arr.size()-1;
    int mid;
    int prev, next;
    int n=arr.size();
    if(arr[0]<arr[n-1])
        return arr[0];
    while(lo<=hi){
        
        mid=lo+(hi-lo)/2;

        prev=(mid-1+n)%n;
        next=(mid+1)%n;
        
        if(arr[mid]<=arr[prev] and arr[mid]<=arr[next])
            return arr[mid];
        
        if(arr[0]<=arr[mid])
            lo=mid+1;
        
        else if(arr[mid]<=arr[n-1])
                hi=mid-1;
    }
    
    return -1;
    
    }
};
// @lc code=end

