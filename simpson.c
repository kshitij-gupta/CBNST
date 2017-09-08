//PROGRAM TO FIND IMPLEMENT simpson 1/3 RULE 
//NAME: KSHITIJ GUPTA
//SEC: A|ROLL NO: -58
//COURSE: B. Tech   BRANCH:CS
#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
      return 1/(1+(x*x));
      }

int main()
{
    float high,low,h,l=0,sum=0,t=0;     
    int i,n;            
  printf("\n\t\t****Simpson 1/3 Rule****\n\n");
    printf("Enter the no of sub interval:");
    scanf("%d",&n);
if(n%2==0)
{
    printf("\nEnter the low interval:");
    scanf("%f",&low);
    printf("\nEnter the high interval:");
    scanf("%f",&high);
    h=(high-low)/n;
    sum=sum+f(high)+f(low);
     for(i=1;i<n;i++)
     {
        if(i%2==0)
            l=l+f(low+(i*h));
        else
          t=t+f(low+i*h);
      }
             sum=(sum+(2*l)+(4*t))*h/3;
        printf("\nSum is:%f",sum);               
    }
else
  printf("wrong input");
 getch();
 return 0;
}    

