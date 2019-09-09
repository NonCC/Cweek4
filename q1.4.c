#include <stdio.h>
int main()
{
int a=1,n;
scanf("%d",&n);
while(a<=n)
{
if(a%5 ==0)
{
printf("%d ",a);
}
a++;
}
return 0;
}