
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in an array\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
    printf("Leaders are\n");
    int i=0,j=n-1;
    while(i<n-1)
    { 
        if(arr[j]>arr[i])
        {
        	
            i++;

            j=n-1;
        }
        else{
         
            if(j==i)
            {
            	   

            	printf("%d\n",arr[i]);
                
                i++;j=n-1;
            }
        else{j--;}
            
        }
    }
    printf("%d",arr[n-1]);
    
    return 0;
}