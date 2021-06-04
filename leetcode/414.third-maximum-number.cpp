/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */

// @lc code=start
auto speed=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int thirdMax(vector<int>& nums) {
       int n=nums.size();  
        
      long int max1=nums[0],max2=-9999999999,max3=-9999999999;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==max1||nums[i]==max2||nums[i]==max3){continue;}
            if(nums[i]>max1)
            {
                max3=max2;
                max2=max1;
                max1=nums[i];
            }
           else if (nums[i] > max2)
            {
                max3 =max2;
                max2 = nums[i];
            }
 
       
            else if (nums[i] > max3)
            {max3 = nums[i];}
            }
      
        if(n<3||max3==-9999999999){return max1;}
        else{ return max3;}
    
    
    }
};
// @lc code=end

