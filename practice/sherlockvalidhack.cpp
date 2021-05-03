#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	
		string s;
		cin>>s;
		vector <int> res(26,0);
		int c=0;
		for(int i=0;i<s.length();i++)
		{
			res[s[i]-'a']+=1;
		}
		for(int i=0;i<26;i++)
		{
			if(res[i]!=0)
				c=res[i];
				break;
		}
		int count,ops=1;
		for(int i=0;i<26;i++)
		{	
			if(c!=res[i] && res[i]>0)
			{	if(ops==1)
				{	if(res[i]>c )
					 { res[i]=res[i]-1;
					  ops++;}
					else
						{c=c-1;
						ops++;}  
				}
			if(c!=res[i])

					{
						count=0;
						cout<<count<<"";
						break;
					}
			}
		}
	if(count==0)
	{
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}

}