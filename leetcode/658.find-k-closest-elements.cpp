/*
 * @lc app=leetcode id=658 lang=cpp
 *
 * [658] Find K Closest Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int i=0,j=arr.size()-1;
        while((j-i)>=k)
        {
            if(abs(arr[i]-x)>abs(arr[j]-x)){i++;}
               else{j--;}
        }
     vector<int>v;    
     for(int p=i;p<=j;p++){v.push_back(arr[p]);}
               return v;
                   
}
};
// @lc code=end

