//https://practice.geeksforgeeks.org/problems/b5e2a639b39537ea71e4551a4274383bda1c9a34/1#
	class Solution{
    public:
	int numberOfCells(int n, int m, int r, int c, int u, int d, vector<vector<char>> &mat)
	{
		// Your code goes here
		
		queue<vector<int>>q;
		if(mat[r][c]=='#'){return 0;}
		vector<int>v;
		v.push_back(r);v.push_back(c);v.push_back(0);v.push_back(0);
		q.push(v);
		mat[r][c]='1';
		int dx[4]={0,0,-1,1};
		int dy[4]={-1,1,0,0};
		int count=1;
		while(!q.empty())
		{
		    auto it=q.front();
		    int x=it[0],y=it[1],up=it[2],down=it[3];
		   
		    q.pop();
		    for(int i=0;i<4;i++)
		    {
		         v.clear();
		         int a=x+dx[i],b=y+dy[i];
		        if(a>=0&&b>=0&&a<n&&b<m&&mat[a][b]=='.')
		        {
		            if(i==2&&up!=u){
		           v.push_back(a);v.push_back(b);v.push_back(up+1);v.push_back(down);
		            q.push(v);
		            mat[a][b]='1';
		            count++;
		                
		            }
		            else if(i==3&&down!=d)
		            {v.push_back(a);v.push_back(b);v.push_back(up);v.push_back(down+1);
		              q.push(v);
		             mat[a][b]='1';
		              count++;
		            }
		            else if(i==0||i==1){
		                
		                v.push_back(a);v.push_back(b);v.push_back(up);v.push_back(down);
		                q.push(v);
		                 mat[a][b]='1';
		                  count++;
		            }
		        }
		    }
		}
// 		for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<mat[i][j]<<" ";}cout<<endl;}
// 		count=0;
// 		for(int i=0;i<n;i++){for(int j=0;j<m;j++){if(mat[i][j]=='1'){count++;}}}
		return count;
		
	}

};