/* Program to find roots of a quardratic equation using Newton Forward Difference Interpolation  method*/
/*Name:-KSHITIJ GUPTA
  Btech CSE 4th sem SEC A
  Roll No:-58
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int n)
{   int c,fact=1;
	  for (c = 1; c <= n; c++)
    fact = fact * c;
    return fact;
}
int main()
{
 	int i,j,n;
	float X,a,sum=0,p,x[5],y[5],diff[5][5];
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
	sum=sum+y[0];
	p=(X-x[0])/(x[1]-x[0]);
	for(i=1;i<n;i++)
	{
	a=1.0;
	for(j=0;j<i;j++)
	{
		a=a*(p-j);
	}	
	sum=sum+a*diff[0][i]/fact(i);
	}
	printf("\n value at %f = %f",X,sum);
	getch();
    return 0;
}
