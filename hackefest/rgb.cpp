#include <bits/stdc++.h>
using namespace std;
int main(void)
{
   int n,q;
    cin>>n>>q;
     int r[n]={0},b[n]={0},g[n]={0};
    for( int i=0;i<n;i++)
    {
       int r1,b1,g1;
        cin>>r1>>b1>>g1;
        r[i]=r1;
        b[i]=b1;
        g[i]=g1;
    }
   for(int i=0;i<q;i++){
        int x,y,z;
        cin>>x>>y>>z;
        int count=0,mx=INT_MIN,my=INT_MIN,mz=INT_MIN;
        int i=0,j=1;
        while(i<n-1)
        {
        	if(r[i]==x && b[i]==y && g[i]==z){count=3;break;}
        	
        	mx=max(r[i],r[j])
        	{
        		if(mx==x){count+=1;break;}
        		else{i++;j=i+1;}
        	}
        }
        i=0;j=1;
         while(i<n-1)
        {
        	
        	
        	my=max(b[i],b[j])
        	{
        		if(my==y){count+=1;break;}
        		else{i++;j=i+1;}
        	}
        }
        i=0;j=1;
         while(i<n-1)
        {
        	
        	
        	mz=max(g[i],g[j])
        	{
        		if(mz==z){count+=1;break;}
        		else{i++;j=i+1;}
        	}
        }
        

        if(count==3){cout<<"Yes"<<endl;}
        else{cout<<"No"<<endl;}
     }


}