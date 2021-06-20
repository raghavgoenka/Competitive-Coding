/*
 * @lc app=leetcode id=473 lang=cpp
 *
 * [473] Matchsticks to Square
 */

// @lc code=start
class Solution {
public:
    bool mattosquare(vector<int>& mat,int i,vector<int>& si)
    {
        if(i==mat.size())
        {
            if(si[0]==0&&si[1]==0&&si[2]==0&&si[3]==0){return true;}
            else{return false;}
        }
        
        for(int p=0;p<4;p++)
        {
            if(mat[i]>si[p]){continue;}//when mat side is greater than perimeter;
            si[p]=si[p]-mat[i];
           if( mattosquare(mat,i+1,si)){return true;}
            si[p]=si[p]+mat[i];
        }
        return false;
    }
public:
    bool makesquare(vector<int>& mat) {
        int n=mat.size(),sum=0;
        if(n<4){return false;}
        for(int i=0;i<n;i++)
        {
            sum+=mat[i];
        }
        if(sum%4!=0){return false;}
        sort(mat.begin(),mat.end(),greater<int>());
        int s=sum/4;
        vector<int>si(4,s);
    return mattosquare(mat,0,si);
       
        
        
    }
};
// @lc code=end

