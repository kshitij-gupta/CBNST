#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x1,x2;
	printf("enter a\n");
	scanf("%f",&a);
	printf("enter c\n");
	scanf("%f",&b);
	printf("enter c\n");
	scanf("%f",&c);
	d=pow(a,2)-(4*a*c);
	if(d==0)
	{
		printf("roots are equal");
		x1=x2=(-b/2*a);
		printf("roots are %f %f",x1,x2);
	}
	else if(d>0)
	{
		printf("roots are distinct");
		x1=(-b+(sqrt(d)))/(2*a);
		x2=(+b+(sqrt(d)))/(2*a);
		printf("roots are %f %f",x1,x2);
		
	}
	else
	{
	printf("roots are imaginary");
	x1=(-b/2*a);
	x2=(sqrt(d)/2*a);
	printf("\nroots are %f+i%f",x1,x2);
	printf("\nroots are %f-i%f",x1,x2);
}
getch();
return 0;	
}
