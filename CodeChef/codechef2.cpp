#include <iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t-->0)
	{
		int h,p;
		cin>>h>>p;

		while(p>=1)
		{	if(h<=0)
				break;
			h=h-p;
			p=p/2;
		}
		if(h<=0)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;	

	}

}