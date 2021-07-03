/*
 * @lc app=leetcode id=1004 lang=cpp
 *
 * [1004] Max Consecutive Ones III
 */

// @lc code=start
class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        int n=arr.size();
       int v[n];
        int mx=0;
        int i=0,j=1,c=0,z=0,l=0;
        
      if(arr[i]==0){z++;c++;v[l]=i;l++;}
       while(j<n)
        { 
           
           
            if(arr[j]==1){mx=max(mx,abs(j-i)+1);j++;}
           else if(arr[j]==0 && c<k){
              v[l]=j;l++; mx=max(mx,abs(j-i)+1); z++;j++;c++;
           }
           else 
           { 
               z++;
               v[l]=j;l++;
               int p=z-k;
               i=v[p-1]+1;j++;
            }
        }
        
        return mx;
        
    }
};
// @lc code=end

