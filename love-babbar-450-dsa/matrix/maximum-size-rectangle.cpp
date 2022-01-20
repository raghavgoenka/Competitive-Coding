//https://practice.geeksforgeeks.org/problems/max-rectangle/1
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


 // } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    int maxArea(int cal[MAX][MAX], int n, int m) {
         
       
         int maxa=0;
      
        for(int i=1;i<n;i++)
        {  for(int j=0;j<m;j++){if(cal[i][j]!=0)
            { 
              cal[i][j]=1+cal[i-1][j];
            }
                             
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


// { Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
  // } Driver Code Ends