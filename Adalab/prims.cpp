#include<stdio.h>

int cost[10][10];
int visited[10] = {0};
int min=0, min_cost=0;

int n, ne=1, a=0, b=0, u=0, v=0, i, j;
int main()
{

	printf("Enter the number of nodes:");
	scanf("%d", &n);
	
	printf("Enter the cost matrix:\n");
	for(i=1 ; i<=n ; i++)
	{
		for(j=1 ; j<=n ; j++)
		{
			scanf("%d", &cost[i][j]);
			if(cost[i][j]==0)
			{
				cost[i][j] = 999;
			}
		}
	}
	for(i=1; i<=n; i++)
	visited[i]=0;
	printf("Enter the root node:");
	scanf("%d",&i);
	visited[i]=1;
	printf("minimun cost spanning tree:\n");
	
	visited[1] = 1;
	while(ne < n)
	{
		for(i=1, min=999 ; i<=n ; i++)
		{
			for(j=1 ; j<=n ; j++)
			{
				if(cost[i][j] < min)
				{
					if(visited[i] != 0)
					{
						min = cost[i][j];
						a=u=i;
						b=v=j;
					}
				}
			}
		}
		if(visited[u]==0 || visited[v]==0)
		{
			printf("\nEdge %d : (%d -> %d) cost = %d \n", ne++, a, b, min);
			min_cost = min_cost + min;
			visited[b]=1;
		}
		cost[a][b] = cost[b][a] = 999;
	}
	printf("\nMinimum cost : %d \n", min_cost);
		
}

