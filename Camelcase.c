#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[1000000], ch;
    int index,count=1;
    scanf("%s",s);
    for(index=0; index<=strlen(s);index++)
    {
        if(s[index]>='A' && s[index] <= 'Z')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

