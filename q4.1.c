#include<stdio.h>

int main()
{
    int ch,i,sum;
    char c;
    while ((ch = getchar()) != '\n' && ch != EOF);
    scanf("%c",&c);
    while(c=0 && c<=9)
        {
        if(c != 'q')
            {
            sum += c;
            scanf("%c",&c);
            }
        else if(c == 'q')
            {
            break;
            }
        }
    printf("%d",sum);
return 0;
}