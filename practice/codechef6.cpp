#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
    long int n;
     cin>>n;
     string s="";
     while(n>0)
     {     
         int n1=n%10;
         s=to_string(n1-2)+s;
         n=n/10;
     }
     cout<<s<<endl;
     
	}


return 0;
}
