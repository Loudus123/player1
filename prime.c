#include<stdio.h>
#include<coni.h>
void main()
{
int i,count=0,n;
printf("enterthe number");
scanf("%d",&n);
for(i=1;i<=n;i++);
{
if(n%i==0)
count=count++;
}
if(count==2)
printf("it is prime number=%d",n);
getch();
}
