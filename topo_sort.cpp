#include<stdio.h>
int a[10][10],n,indegre[10];
void find_indegre()
{
int j,i,sum;
for(j=0;j<n;j++)
{
sum=0;
for(i=0;i<n;j++)
sum+=a[i][j];
indeg[j]=sum;
}
}
void topology()
{
int i,u,v,t[10],top=-1,k=0;
find_indegre();
for(i=0;i<n;i++)
{
if(indeg[i]==0)
s[++top]=i;
}
while(top!=-1)
{
u=s[top--];
t[k++]=u;
for(v=0;v<n;v++)
{
if(a[u][v]==1)
{
indegre[v]--;
if(indeg[v]==0)
s[++top]=v;
}}}
printf("The topological sorting is:");
for(i=0;i<n;i++)
printf("%d",t[i]);

void main()
{
int i,j;
clrscr();
printf("Enter number of jobs");
scanf("%d",&n);
printf("Enter adjacency matrix");
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
topology();
}
