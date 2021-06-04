/*
 * @lc app=leetcode id=1465 lang=cpp
 *
 * [1465] Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts
 */

// @lc code=start
class Solution {
public:
    int mod=1000000007;
    int maxArea(int hor, int wwe, vector<int>& h, vector<int>& v) {
        sort(h.begin(),h.end());
        sort(v.begin(),v.end());
//         vector<int> h_height,v_height;
       
       
        long  int n=h.size(),n1=v.size();
     
      long  int h_height[n+1],v_height[n1+1];
           h_height[0]=h[0];
        long long  int max1=h_height[0];
        long long int max2=0;
        for(int i=1;i<n;i++)
        {
            h_height[i]=h[i]-h[i-1];
            if(h_height[i]>max1){max1=h_height[i];}
        }
        h_height[n-1]=hor-h[n-1];
        
        if(h_height[n-1]>max1){max1=h_height[n-1];}
         v_height[0]=v[0];
        max2=v_height[0];
        for(int i=1;i<n1;i++)
        {
            v_height[i]=v[i]-v[i-1];
              if(v_height[i]>max2){max2=v_height[i];}
        }
        v_height[n1-1]=wwe-v[n1-1];
      if(v_height[n1-1]>max2){max2=v_height[n1-1];}        
       
        return (int)(max1%mod*max2%mod)%mod;        
    }
};
// @lc code=end

