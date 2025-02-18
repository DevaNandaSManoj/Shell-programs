#include<stdio.h>
void main()
{
  int memblock,n,i,j;
  printf("Enter the number of memory blocks and no of process\n");
  scanf("%d%d",&memblock,&n);
  struct memory
  {
    int size,alloc;
  }m[memblock];
struct process
{
  int ps,flag;
}p[n];
printf("Enter the size of memory block\n");
for(i=0;i<memblock;i++)
{
  scanf("%d",&m[i].size);
  m[i].alloc=0;
}
for(i=0;i<memblock;i++)
{
  for(j=i+1;j<memblock;j++)
    {
      if(m[i].size>=m[j].size)
      {
        int temp=m[i].size;
        m[i].size=m[j].size;
        m[j].size=temp;
      }
    }
}
printf("Enter the size of the processes\n");
for(i=0;i<n;i++)
{
  scanf("%d",&p[i].ps);
  p[i].flag=0;
}
printf("\nPROCESS\tPROCESS SIZE\tBLOCKS\t\n");
for(i=0;i<n;i++)
{
  for(j=0;j<memblock;j++)
{
  if(p[i].flag==0)
{
  if(p[i].ps<=m[j].size)
{
  if(m[j].alloc==1)
{
  continue;
}
else
{
  m[j].alloc=1;
  p[i].flag=1;
  printf("\n%d\t%d\t\t%d\n",i,p[i].ps,m[j].size);
}
}
}
}
}
for(i=0;i<n;i++)
{
  if(p[i].flag==0)
{
  printf("There is no space for %d process\n",p[i].ps);
}
}
}
