#include <stdio.h>
int main()
{
int a,n;
scanf("%d",&n);
for(a=1;a<=n;a++)
{
if(a%5 == 0)
{
printf("%d ",a);
}
}
return 0;
}