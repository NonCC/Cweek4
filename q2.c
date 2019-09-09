#include<stdio.h>

int main()
{
int a,i,s;
scanf("%d",&a);
for(i=1;i<=12;i++)
{
s=a*i;
printf("%dx%d=%d\n",a,i,s);
}
    return 0;
}