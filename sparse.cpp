#include<stdio.h>
int main()
{
	int a[10][10],i,j,r1,c1,count=0;
	printf("Enter the no. of rows and columns of the 1st matrix:\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter the elements of the 1st matrix:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("The 1st matrix is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
    } 
    for(i=0;i<r1;i++)
    {
    	for(j=0;j<c1;j++)
    	{
    		 
    		if(a[i][j]==0)
    		count++;
		}
	}
	if(count>((r1*c1)/2))
	{
		printf("The entered matrice is a sparse matrice");
	}
	else
	printf("The entered matrix is not a sparse matrice");
	
	return 0;
}
