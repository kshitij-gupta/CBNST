#include<stdio.h>
#include<conio.h>
#define inf 999999
int Extract_min(int *dist,int n,int *visit)
{
      int i,min=inf,x;
      for(i=0;i<n;i++)
      {
            if(visit[i]==0&&min>dist[i])
            {
                   min=dist[i];
                   x=i;                     
            }          
      }
      return x;
}
void prims(int g[6][6],int n,int *dist,int *part,int *visit,int s)
{
     int Q[20],j,i,u;
     int count=n;
     for(i=0;i<n;i++)
     {
          dist[i]=inf;
          part[i]=0;
          visit[i]=0;           
     }
     dist[s]=0;
     while(count>0)
     {
            u=Extract_min(dist,n,visit);
            for(i=0;i<n;i++) 
            {
                  if(visit[i]==0&&dist[i]>g[u][i])
                  {
                        dist[i]=g[u][i];
                        part[i]=u;                    
                  }           
            }      
            visit[u]=1;
            count--;
     }
}
int main()
{
    int g[6][6]={{inf,4,inf,inf,8,inf},
                 {4,inf,7,inf,11,inf},
                 {inf,7,inf,6,5,9},
                 {inf,inf,6,inf,3,2},
                 {8,11,5,3,inf,10},
                 {inf,inf,9,2,10,inf} };
    int n=6,i;
    int dist[6];
    int part[6];
    int visit[6];
    
    prims(g,n,dist,part,visit,0);
    
    printf("Final tree\n");
    
    printf("\n");
    for(i=0;i<n;i++)
         printf("%c  ",i+65);
    
         
    printf("\n");
    for(i=0;i<n;i++)
         printf("%c  ",part[i]+65);
         
    printf("\n");
    for(i=0;i<n;i++)
         printf("%d  ",dist[i]);
         
    getch();
    return 0;
}
