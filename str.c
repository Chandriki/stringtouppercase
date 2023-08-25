#include<stdio.h>
#include<string.h>
void main()
{
    int k;
    char str[20];
    printf("enter the string:");
     gets(str);
     printf("enter the position to make the character in uppercase");
    scanf("%d",&k);
    str[k-1]=str[k-1]-32;
    puts(str);
getch();
}
