//https://practice.geeksforgeeks.org/problems/steps-by-knight5927/1#
class Solution{

{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    vector<pair<int,int>> m={
       {2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}
   };
   bool valid(int i,int j,int N){
       return (i>=1 && j>=1 && i<=N && j<=N);
   }
int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
{
    int i=KnightPos[0];
    int j=KnightPos[1];
    int x=TargetPos[0];
    int y=TargetPos[1];
    
    vector<vector<int>> vis(N+1, vector<int> (N+1,0));
    vector<vector<int>> lev(N+1, vector<int> (N+1,-1));
    
    lev[i][j]=0;
    vis[i][j]=1;
    
    queue<pair<int,int>> q;
    q.push({i,j});
    
    while(!q.empty()){
        pair<int,int> p=q.front();
        q.pop();
        int a=p.first,b=p.second;
       
        for(auto mv : m){
            int new_i=a+mv.first;
            int new_j=b+mv.second;
            if(!valid(new_i,new_j,N)) {continue;}
            if(!vis[new_i][new_j]){
                q.push({new_i,new_j});
                vis[new_i][new_j]=1;
                lev[new_i][new_j]=lev[a][b]+1;
               
            }
        }
        if(lev[x][y]!=-1){
            break;
        }
    }
   
    return lev[x][y];

	}
};