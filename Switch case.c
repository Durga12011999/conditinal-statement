#include<stdio.h>
void main()
{
    int ch;
    printf("enter the value either 1 or 0:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 0:
        printf("0\n");
        break;
    case 1:
        printf("1\n");
        break;
    default:
        printf("It is not in the list");

    }
}
