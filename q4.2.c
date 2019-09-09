#include<stdio.h>

int main()
{
    int ch,sum=0;
    char c;
    scanf("%c",&c);
    while(c != 'q')
        {
            c = c-48;
            if (c%2==0)
            {
            sum += 1;
            }
             while ((ch = getchar()) != '\n' && ch != EOF);
            scanf("%c",&c);
        }
    printf("%d",sum);
return 0;
}