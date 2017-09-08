#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
   return ((x*x*x)-(4*x)-9);
}
float f2(float x)
{
   return ((3*x*x)-4);
}
int main()
{
    printf("|*NEWTON RAPSON METHOD*|\n");
    printf("------------------------\n");
    int i;
    float x,a,b,t,y;
    x=1;
    while(1)
    {
        if(f(x)*(f(x+1))<0)
       {
         break;
       }
       x++;
    }
    printf("|**Intital Roots Are **|\n");
    printf("------------------------\n");
    printf("|i\t         ROOTS |\n");
    i=1,t=0;
    while(1)
    {
      if(i>=1)
      t=x;
      x=x-f(t)/f2(t);
      if(f(x)==0)
      {
        getch();
        return 0;
      }
      y=fabs(t-x);
      printf("-----------------------\n");
      if(y<=0.0001)
      {
        printf("| Final Root =%f |\n",x);
        printf("-----------------------\n");
        break;
      }     
	  printf("|%d\t       %f|\n",i,x);            
      i=i+1;
    }
    getch();
    return 0;
}
