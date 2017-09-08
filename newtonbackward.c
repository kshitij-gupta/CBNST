#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 	int i,j,n;
	float X,a,sum=0,Y,p,x[5],y[5],diff[5][5];
	printf("Enter the size of List\n");
	scanf("%d",&n);
	printf("Enter The X Array\n");
	for(i=0;i<n;i++)
	scanf("%f",&x[i]);
	printf("Enter The Y Array\n");
	for(i=0;i<n;i++)
	scanf("%f",&y[i]);
    for(i=0;i<n-1;i++)
    diff[i][1]=y[i+1]-y[i];
    for(i=2;i<n-1;i++)
    {
    	for(j=0;j<n-1;j++)
    	{
    		diff[j][i]=diff[j+1][i-1]-diff[j][i-1];
		}
	}
	 printf("/*......................FDT......................*/\n");
	 
	 for(i=0;i<n;i++)
    {
    	for(j=1;j<n-i;j++)
    	{
    		printf("%.3f\t   ",diff[i][j]);
		}
		printf("\n");
	}
	printf("Enter the Value of X\n");
	scanf("%f",&X);
	sum=sum+y[n-1];
	p=(X-x[n])/(x[1]-x[n-1]);
	a=p;
	p=1;
	for(i=1,j=n-2;j>=0;j--,i++)
	{
		p=p*(a+i-1)/i;
		sum+=p*diff[0][j];
	}
	printf("\n value at %.3f = %f",X,sum);
	getch();
    return 0;
}

