#include<iostream>
using namespace std;

int main()
{
    int n,m,c[20],k=0,j=0;
    int freq[10000]={0};
       
    cout<<"Size of first array:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++)
       { cin>>a[i];freq[a[i]]++;}
      
    cout<<"Size of second array:";
    cin>>m;
    int b[m];
    cout<<"Enter elements:\n";
    for(int i=0;i<m;i++)
       { cin>>b[i];freq[b[i]]--;}
cout<<endl;
    for(int i=0;i<10000;i++)
    {   
        if(freq[i]>0||freq[i]<0){cout<<i<<" ";}
       
    }   
    cout<<endl;


}       