#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
#include<vector>
int main()
{
	long int n;
	cin>>n;
	vector<int>arr;
	int sum=0;
    while(n>0)
	{
		int n1=n%10;
		arr.push_back(n1);
		n=n/10;
	}
	if(arr.size()==1)
	{
		cout<<arr[0]<<":"<<"1"<<"-"<<"1";
	}
	else{
	reverse(arr.begin(), arr.end()); 
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	int s=arr.size();
	int freq[s]={0};
	int i=0,j=1,p=i;
	while(i<s-1)
	{
		if(arr[j]>arr[i])
		{	
			freq[p+1]=freq[p+1]+1;
			i++;
			j++;

		}
		else{
			
			i++;j++;
			p=i;
		}
	}
	int max=0;
	int index=0;
	for(int i=0;i<s;i++)
	{	
		if(freq[i]>0)
		{	int p1=i-1;
			for(int x=freq[i]+1;x>0;x--)
			{	
				sum=sum+arr[p1];
				p1++;
			}
			if(sum>max)
				{
					max=sum;
					index=i;

				}
			sum=0;	
		}
	}
	if(max==0)
	{	int in = max_element(arr.begin(),arr.end()) - arr.begin();
		cout<<*max_element(arr.begin(), arr.end())<<":"<<in+1<<"-"<<in+1;
	}
	else{
	cout<<max<<":"<<index<<"-"<<index+freq[index];
}
}
}