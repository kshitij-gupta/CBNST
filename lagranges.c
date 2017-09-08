//PROGRAM TO FIND ROOTS OF A GIVEN EQUATION BY LAGRANGE'S INTERPOLATION METHOD
/*Name:-KSHITIJ GUPTA
  Btech CSE 4th sem SEC A
  Roll No:-58
*/

 #include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
 {
      int i,j,b;
      float sum,x,n,d,ax[20],ay[20];;
      printf("\n Enter the size of array:");
      scanf("%d",&b);
      printf("\n Enter  values of X arrray:\n\n");
      for(i=0;i<b;++i)
      scanf("%f",&ax[i]);
      
      printf("\n Enter  values of Y arrray:\n\n");
      for(i=0;i<b;++i)
      scanf("%f",&ay[i]);
       printf("\n Enter the value of the x to find the respective value of y\n\n");
      scanf("%f",&x);
	     
   for(i=0;i<b;++i)
   {
   	n=d=1;
   	for(j=0;j<b;++j)
   	{
   		if(j!=i)
   		{
   			n*=(x-ax[j]);
   			d*=(ax[i]-ax[j]);
		   }
	   }
	   sum=sum+(n/(d*1.0))*ay[i];
   }
      printf("\n the value of f(x) at x=%f is:%.4f",x,sum);
      getch();
      return 0;
  }



