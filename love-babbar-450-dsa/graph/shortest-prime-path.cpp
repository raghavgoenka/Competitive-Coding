//https://practice.geeksforgeeks.org/problems/2b9978653b4d905d12c04387a60e16464ef40733/1/#
#define N 9999
bool isPrime[N+1];

void seive()
{
    for(int i = 0; i <= N;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i * i <= N; ++i) {
             if(isPrime[i] == true) {                    
                 for(int j = i * i; j <= N ;j += i)
                     isPrime[j] = false;
            }
        }
}


class Solution{   
public:


    int solve(int n1,int n2)
    {   
      //code here
      if(n1==n2){return 0;}
      seive();
     
      vector<int>vis(10001,0);
      queue<int>q;
      q.push(n1);
      vis[n1]=1;
      int res=0;
      while(!q.empty())
      {
          queue<int>t;
          while(!q.empty()){
          int node=q.front();
          q.pop();
         if(node==n2){return res; }
         for(int i=0;i<4;i++)
         {     int j=0;
             if(i==0){j=1;}
                
                 for(;j<10;j++)
                 {
                     string s=to_string(node);
                     s[i]=j+'0';
                     int temp=stoi(s);
                    
                     if(temp==n2){return res+1;}
                     if(isPrime[temp]&&vis[temp]==0){vis[temp]=1;t.push(temp);}
                 }
             
         }
          }
          q=t;
         res++;
         
         
      }
      
      return res;
      
      
    }
};