/*
 * @lc app=leetcode id=875 lang=cpp
 *
 * [875] Koko Eating Bananas
 */

// @lc code=start
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();    
        int mx=INT_MIN; long long int sum=0;
       for(int i=0;i<n;i++){
           sum+=piles[i];
           mx=max(mx,piles[i]);
       }
       int l=sum/h,r=mx;  // range of hours in which koko can finish 
        while(l<r)
        {
            int mid=l+(r-l)/2;
            
            int num_h=0;
            if(mid!=0){
            for(int i=0;i<n;i++)
            {
                if(piles[i]%mid!=0){num_h++;}
                num_h+=piles[i]/mid;            
            }
            }
            if(mid==0){num_h=INT_MAX;}
            
            if(num_h>h){l=mid+1;}
            else{r=mid;}
            
            
        }
        return r;
    }
};
// @lc code=end

