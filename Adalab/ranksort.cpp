#include<iostream>
using namespace std;
void ranksort(int arr[],int n)
{
    int i,j;
   int rank[n],sort[n];
    for(i=0;i<n;i++)
       rank[i]=0;
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]>=arr[j])
                rank[i]++;
            else
                rank[j]++; }}
    for(i=0;i<n;i++)
        sort[rank[i]]=arr[i];
    for(i=0;i<n;i++)
        arr[i]=sort[i];}
int main()
{
    int n,i;
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;
  int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    ranksort(arr,n);
    cout<<"The elements after sorting are\n";
    for(i=0;i<n;i++)
     {  cout<<arr[i]<<" ";}
     cout<<endl;
    return 0;
}