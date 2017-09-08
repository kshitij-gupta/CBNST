//PROGRAM TO FIT A STRAIGHT LINE USING LEAST SAUARE METHOD
/*Name:-KSHITIJ GUPTA
  Btech CSE 4th sem SEC A
  Roll No:-58
*/
#include<conio.h>
#include<stdio.h>
int main()
 {
      int i,n,m,x;
      float a,b,X[100],Y[100],Sx,Sy,Sxy,Sx2;
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
      	Sx=Sx+X[i];
      	Sy=Sy+Y[i];
      	Sxy=Sxy+(X[i]*Y[i]);
      	Sx2=Sx2+(X[i]*X[i]);
	  }
	  b=((Sx*Sy)-m*Sxy)/((Sx*Sx)-m*Sx2);
	  a=(Sy-b*Sx)/m;
	  printf("Line is y=%.2f+%.2fx",a,b);
	  getch();
	  return 0;
}

