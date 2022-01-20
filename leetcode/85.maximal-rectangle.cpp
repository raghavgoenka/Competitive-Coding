/*
 * @lc app=leetcode id=85 lang=cpp
 *
 * [85] Maximal Rectangle
 */

// @lc code=start
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& mat) {
        int n=mat.size(),m=mat[0].size();
        int cal[n][m];
         int maxa=0;
        for(int i=0;i<m;i++){cal[0][i]=mat[0][i]-'0';}
        for(int i=1;i<n;i++)
        {  for(int j=0;j<m;j++){if(mat[i][j]!='0')
            { 
              cal[i][j]=1+cal[i-1][j];
            }
         else{cal[i][j]=0;}                      
      }
        }
       
        
        for(int j=0;j<n;j++)
        {
            int lb[m],rb[m];
            stack<int>s;
            s.push(m-1);
            rb[m-1]=m;
            for(  int i=m-2;i>=0;i--)
            {
                while(!s.empty() && cal[j][i]<=cal[j][s.top()])
                {s.pop();}
                 if(s.empty()){rb[i]=m;}
                 else{rb[i]=s.top();}
                 s.push(i);
            }
            while(!s.empty()){s.pop();}

            s.push(0);
            lb[0]=-1;

            for(  int i=1;i<m;i++)
            {
                while(!s.empty() && cal[j][i]<=cal[j][s.top()])
                {s.pop();}
                 if(s.empty()){lb[i]=-1;}
                 else{lb[i]=s.top();}
                 s.push(i);
            }
       
            for(  int i=0;i<m;i++){
                  int width=rb[i]-lb[i]-1;
                maxa=max(maxa,(cal[j][i]*width));}
     }
        return maxa;

    }
};
// @lc code=end

