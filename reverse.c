
#include<stdio.h>
#include<string.h>
int main()
{
        char s[50];
        int len,i;
        printf("Enter a string : ");
        scanf("%s",s);
        len= strlen(s);
        printf("String reversed: ");
        for (i = len -1 ; i>=0; i--)
        {
                printf("%c",s[i]);
        }
   }


