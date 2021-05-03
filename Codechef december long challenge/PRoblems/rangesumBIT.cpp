#include<bits/stdc++.h>
#include <iostream> 
typedef long long int ll;
using namespace std; 



vector<ll> val;
int init(int n)
{
    int  size=1;
    while(size<n)
    size*=2;
    return size*2;
}
void sett(int i,ll v,int x,int l,int r)
{
    if(r-l==1)
    {
        val[x]=v;
        return;
    }
    int m=(l+r)/2;
    if(i<m)
    sett(i,v,2*x+1,l,m);
    else
    sett(i,v,2*x+2,m,r);

    val[x]=max(val[2*x+1],val[2*x+2]); 
}
ll calc(ll lx,ll rx,int x,int l,int r)
{
    if(lx>=r || rx<=l)
    return INT_MIN;
    else if(lx<=l && rx>=r)
    return val[x];
    int m=(l+r)/2;
    ll m1 = calc(lx,rx,2*x+1,l,m);
    ll m2 = calc(lx,rx,2*x+2,m,r);

    return max(m1,m2);

}



ll  getSum(ll  BITree[], ll  x) 
{ 
	ll  sum1 = 0;
     for(; x > 0; x -= x&-x)
     
        sum1 += BITree[x];
     return sum1;
} 

void updateBIT(ll  BITree[], ll  n, ll  index, ll  val) 
{ 
	
	index = index + 1; 
 
	while (index <= n) 
	{ BITree[index] += val; 
      index += index & (-index); 
	} 
} 


ll  *constructBITree(ll  arr[], ll  n) 
{ 

	ll  *BITree = new ll [n+1]; 
	for (ll  i=1; i<=n; i++) 
		BITree[i] = 0; 

	
	for (ll  i=0; i<n; i++) 
		updateBIT(BITree, n, i, arr[i]); 

	return BITree; 
} 
 
int main() 
{
   
    int n,q;scanf("%d %d",&n,&q);
	ll  arr[n];
    int size = init(n);
    val.resize(size);
    for(ll i=0;i<n;i++){scanf("%lld",&arr[i]);sett(i,arr[i],0,0,n);}
    
  
	ll  *BITree = constructBITree(arr, n); 
	
    while(q--)
    { 
        ll  count=0;
	   int type;ll  l,r;scanf("%d %lld %lld",&type,&l,&r);
	   if(type==1)
       {
	updateBIT(BITree, n, l-1, r-arr[l-1]);arr[l-1] = r;  
    // for(ll i=1;i<=n;i++){cout<<BITree[i]<<" ";}
  
    }
	   else if(type==2){
           
		   ll  ss=r-l;
           ll  sum=0;
		    ll  max_val =0;
            ll ab=l-1;
            ll cd=r-1;
             max_val=calc(ab,cd+1,0,0,n);
		   ll es=getSum(BITree, r);
           ll es1=getSum(BITree,l-1);
           sum=es-es1;
        
          
		   sum=sum-(max_val);
		    
		   sum=((ss)*(max_val))-sum;
       
		count=(sum/2) +(sum%2);
 
		
        printf("%lld\n",count);
	
		   
	   }
    }
return 0;

 
} 
