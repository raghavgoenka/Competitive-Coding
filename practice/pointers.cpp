#include <iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n-->0)
	{
	    int num;
	   
	    cin>>num;
	    int freq[11]={0},res[10001]={0};
	    for(int i=0;i<num;i++)
	    {   int temp;
	        cin>>temp;
	        freq[temp]+=1;
	    }
	    int count=0;
	    
	    
	    for(int p=1;p<11;p++)
	    {if(freq[p]!=0)
	       res[freq[p]]+=1;
	    }
	    
	    int max=0,index=0;
	    for(int x=1;x<10001;x++)
	    {
	        if(res[x]>max)
	        {
	        	max=res[x];
	        	index=x;
	        }
	    }
	    	cout<<index<<endl;
	 
	}
	return 0;
}