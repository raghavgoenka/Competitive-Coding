//ebox i-apply//
//snake ladder game//
#include<stdio.h>

int main(void)
{
   int lfoot,lhead,shead,stail,n;
   scanf("%d %d ",&lfoot,&lhead);
   scanf("%d %d ",&shead,&stail);
   scanf("%d",&n);
   int count =0,sum=0;
   for(int i=0;i<n;i++)
   {
   	int p;scanf("%d",&p);
   	if(count==0 && p==1)
   	{
   		sum+=p;
   		count++;
   	}
   	else if(count>0)
   	{
   		sum=sum+p;
   		if(sum==lfoot)
   		{
   			sum=lhead;
   		}
   		if(sum==shead)
   		{ 
   			sum=stail;
   		}
   	}
   }
   printf("\n %d",sum);


}