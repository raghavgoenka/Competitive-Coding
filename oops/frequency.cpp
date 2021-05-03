#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements ";
    for(int i=0;i<n;i++){cin>>arr[i];}
    int x;
    cout<<"Enter element to get its frequency ";
    cin>>x;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x){c++;}
    }
    if(c>0){cout << "The Frequency of "<< x << " is: " << c << endl;}
    else{cout<<"Element "<<x<<" is not present in the array "<<endl;}
}