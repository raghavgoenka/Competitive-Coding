#include<stdio.h>
int n;
int linearsearch(int a[], int l,int x)
{
  
    if(l>=n){return -1;}
    if (a[l] == x)
       { return l;}
   
   return  linearsearch(a, l + 1,x);
  
}

int main()
{
    int key,result;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: \n");
    for ( int i=0; i<n ;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched : \n");
    scanf("%d",&key);
    int index = linearsearch(a, 0, key);
    if (index != -1)
    { printf( "Element  %d  is present at index  %d\n",key,index);}
    else
        {printf("Element %d is not present\n",key);}
}