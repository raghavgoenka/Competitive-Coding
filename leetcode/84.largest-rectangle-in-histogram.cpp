/*
 * @lc app=leetcode id=84 lang=cpp
 *
 * [84] Largest Rectangle in Histogram
 */

// @lc code=start
class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
      int n =h.size();
       int lb[n],rb[n];
    stack<int>s;
    s.push(n-1);
    rb[n-1]=n;
    for(  int i=n-2;i>=0;i--)
    {
        while(!s.empty() && h[i]<=h[s.top()])
        {s.pop();}
         if(s.empty()){rb[i]=n;}
         else{rb[i]=s.top();}
         s.push(i);
    }
    while(!s.empty()){s.pop();}
    
    s.push(0);
    lb[0]=-1;
    
    for(  int i=1;i<n;i++)
    {
        while(!s.empty() && h[i]<=h[s.top()])
        {s.pop();}
         if(s.empty()){lb[i]=-1;}
         else{lb[i]=s.top();}
         s.push(i);
    }
int maxa=0;
    for(  int i=0;i<n;i++){
          int width=rb[i]-lb[i]-1;
        maxa=max(maxa,h[i]*width);}
return maxa;
    }
};
// @lc code=end

