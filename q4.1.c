#include<stdio.h>

int main()
{
    int ch,sum=0;
    char c;
    scanf("%c",&c);
    while(c != 'q')
        {
            c = c-48;
            sum += c;
             while ((ch = getchar()) != '\n' && ch != EOF);
            scanf("%c",&c);
        }
    printf("%d",sum);
return 0;
}