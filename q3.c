#include<stdio.h>
#include<math.h>

int main()
{
    int i=0,n,m,p,sum=0;
    scanf("%d %d",&n,&m);
    if(n<=9)
    {
        for(p=0;p<=m;p++)
        {
            i=n*(pow(2,p));
            sum +=i;
        }
        printf("%d",sum);
    }
    return 0;
}