#include <iostream>
#include<string>
using namespace std;
int main()
{	int n,k;
	string s;
	cin>>n>>s>>k;
	k=k%26;
	for(int i=0;i<n;i++)
	{	int asc=int(s[i]);
		

		if(asc>=65 && asc<=90)
		 if(asc+k>90)
		    if(asc!=90)
					s[i]=char(int('A')-1+asc+k-90);
				else
		            s[i]=char(int('A')+k-1);
		 else
		 	s[i]=char(asc+k);
		else if(asc>=97 && asc<=122)
			if(asc+k>122)
				if(asc!=122)
					s[i]=char(int('a')-1+asc+k-122);
				else
		            s[i]=char(int('a')+k-1);
            else
               s[i]=char(asc+k);		   
		
	}
cout<<s<<" ";



}