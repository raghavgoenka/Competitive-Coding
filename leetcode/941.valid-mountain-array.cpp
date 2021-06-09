/*
 * @lc app=leetcode id=941 lang=cpp
 *
 * [941] Valid Mountain Array
 */

// @lc code=start
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3){return false;}
        int p=arr[0],flag=0,c=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==p){return false;}
              else if(arr[i]<p&&flag==0){p=arr[i];flag=1;}
            else if(flag==0)
            {
                if(arr[i]<p){return false;}
                else if(arr[i]>p){p=arr[i];c++;}
            }
          
            else if(flag==1)
            {
                if(arr[i]<p){p=arr[i];}
                else{return false;}
            }
            
        }
        if(flag==0||c==0){return false;}
        return true;
    }
};
// @lc code=end

