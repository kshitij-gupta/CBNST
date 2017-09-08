//PROGRAM TO FIT A EXPONENTIAL CURVE USING LEAST SQUARE METHOD
/*Name:-KSHITIJ GUPTA
  Btech CSE 4th sem SEC A
  Roll No:-58
*/
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
 {
      int i,n,m,x;
      float a,b,X[100],Y[100],Sx,Sy,Sxy,Sx2,A,B;
      printf("\n Enter the size of array:");
      scanf("%d",&n);
      printf("\n Enter  values of \n\n");
      printf("X	Y\n");
      for(i=0;i<n;++i)
      scanf("%f	%f",&X[i],&Y[i]);
      m=n;
      Sx=Sy=Sxy=Sx2=0;
      for(i=0;i<n;i++)
      {
      	Y[i]=log(Y[i]);
      	Sx=Sx+X[i];
      	Sy=Sy+Y[i];
      	Sxy=Sxy+(X[i]*Y[i]);
      	Sx2=Sx2+(X[i]*X[i]);
	  }
	  B=((Sx*Sy)-m*Sxy)/((Sx*Sx)-m*Sx2);
	  A=(Sy-B*Sx)/m;
	  b=B/log(2.718282);
	  a=pow(2.718282,A);
	  printf("Line is y=%.4f*e^(%.4fx)",a,b);
	  getch();
	  return 0;
}
      

