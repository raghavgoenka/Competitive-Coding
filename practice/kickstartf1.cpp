
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;cin>>t;
    int a=1;
   while(a<=t)
   {  long int n,x;cin>>n>>x;
     vector<long int> arr,que;
     for(int i=0;i<n;i++)
     {long  int p;cin>>p;arr.push_back(p);
      que.push_back(arr[i]/x);
      arr[i]=que[i];
      }

    sort(que.begin(),que.end());
    cout<<"Case "<<"#"<<a<<":"<<" ";
    for(int i=0;i<n;i++)
    { auto it=find(arr.begin(),arr.end(),que[i]);
      if(it!=arr.end())
      {int index=distance(arr.begin(),it);
       cout<<index+1<<" ";
      arr[index]=-1;
     }


   }
a++;
   }
return 0;

}
