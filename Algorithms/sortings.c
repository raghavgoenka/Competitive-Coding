#include<stdio.h>
#define n 10
void printArray(int arr[]);
void selectionSort(int arr[]);
void insertionSort(int arr[]);
void shellSort(int arr[]);
void radixSort(int arr[]);
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
} 
void printArray(int arr[])
{
    for(int i=0;i<n;i++){printf("%d ",arr[i]);}
    printf("\n");
}
void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
 
  
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 

    int i = 0;
 
   
    int j = 0;
 
    
    int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
  
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
  
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    int m = (l+r-1)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}
int getMax(int arr[]) 
{ 
    int mx = arr[0]; 
    for (int i = 1; i < n; i++) 
        if (arr[i] > mx) 
            mx = arr[i]; 
    return mx; 
} 
void countSort(int arr[], int exp) 
{ 
    int output[n];  
    int i, count[10] = { 0 }; 
  
   
    for (i = 0; i < n; i++) 
        count[(arr[i] / exp) % 10]++; 
  
   
    for (i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
  
 
    for (i = n - 1; i >= 0; i--) { 
        output[count[(arr[i] / exp) % 10] - 1] = arr[i]; 
        count[(arr[i] / exp) % 10]--; 
    } 
  
   
    for (i = 0; i < n; i++) 
        arr[i] = output[i]; 
} 
 
void radixSort(int arr[])
{
 int m = getMax(arr); 
   for (int exp = 1; m / exp > 0; exp *= 10) 
        countSort(arr,exp); 
}
void shellSort(int arr[])
{

    for(int gap=n/2;gap>0;gap=gap/2)
    {
        for(int i=gap;i<n;i++)
        {
            int temp=arr[i];

          int j;
        for( j=i;j>=gap && arr[j-gap]>temp;j=j-gap)
        {
            arr[j]=arr[j-gap];
        }
        arr[j]=temp;
        }
    }
}
void selectionSort(int arr[])
{ 	int i, j, minindex; 

  for( i=0;i<n-1;i++)
  {
       minindex=i;
     
      for( j=i+1;j<n;j++)
      
          {if(arr[j]<arr[minindex]){minindex=j;}}
      
     
     swap(&arr[minindex],&arr[i]);
     
     
  }
}
void insertionSort(int arr[])
{
  for(int i=1;i<n;i++)
  {
      int val=arr[i];
      int j=i-1;
      while(j>=0 && arr[j]>val)
      {
          arr[j+1]=arr[j];
          j=j-1;
      }
      arr[j+1]=val;
  }
}

int main()
{
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    // insertionSort(arr);
    // printf("Using Insertion Sort\n");
    // printArray(arr);
    
    mergeSort(arr,0,10);
    printf("Using Radix Sort\n");
    printArray(arr);
}

