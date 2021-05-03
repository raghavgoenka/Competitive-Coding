#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t-->0)
	{
		int n,a,b,c,d,p,q,y;
		cin>>n>>a>>b>>c>>d>>p>>q>>y;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int walk,train;
		walk=abs(arr[b-1]-arr[a-1])*p;
		
		  if(abs(arr[c-1]-arr[a-1])*p<=y)
		{
			train=y+abs(arr[c-1]-arr[d-1])*q+abs(arr[d-1]-arr[b-1])*p;
			cout<<min(walk,train)<<endl;
		}

		else
			cout<<walk<<endl;

	}

}