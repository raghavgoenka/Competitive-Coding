#include<stdio.h>
void insertionSort(int *a,int n)
{
  for(int i=1;i<n;i++)
  {
      int val=a[i];
      int j=i-1;
      while(j>=0 && a[j]>val)
      {
          a[j+1]=a[j];
          j=j-1;
      }
      a[j+1]=val;}}
int binary_search(int a[], int low, int high, int key){
    if(low<=high){
        int mid = (low + high)/2;
        if(a[mid]==key){
            return mid;
        }if(a[mid] >= key){
            return binary_search(a, low, mid-1, key);
        }return binary_search(a, mid+1, high, key);
    }return -1;
}
int main()
{
    int n,key,index;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for ( int i=0; i<n ;i++)
    {
       scanf("%d",&a[i]);
    }
    insertionSort(a,n);
  
    printf("Enter the element to be searched\n");
    scanf("%d",&key);
    index = binary_search(a,0,n-1,key);
    if (index != -1)
    { printf( "Element  %d  is present at index  %d\n",key,index);}
    else
        {printf("Element %d is not present\n",key);}
    return 0;
}