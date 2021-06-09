/*
 * @lc app=leetcode id=84 lang=cpp
 *
 * [84] Largest Rectangle in Histogram
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
    int largestRectangleArea(vector<int>& h) {
        long int n =h.size();
 long int lb[n+1],rb[n+1];
    stack<long long int>s;
    s.push(n-1);
    rb[n-1]=n;
    for( long int i=n-2;i>=0;i--)
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
    
    for( long int i=1;i<n;i++)
    {
        while(!s.empty() && h[i]<=h[s.top()])
        {s.pop();}
         if(s.empty()){lb[i]=-1;}
         else{lb[i]=s.top();}
         s.push(i);
    }
long int maxa=0;
    for( long int i=0;i<n;i++){
         long int width=rb[i]-lb[i]-1;
        maxa=max(maxa,h[i]*width);}
return maxa;
    }
};
// @lc code=end

