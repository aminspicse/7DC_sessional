/*
    5)	Write a program to print out the below pattern.
        sample input: 3
        1
        21
        321
*/
#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);

    for(int i=1; i <= num; i++)
    {
        for(int j = i; j >= 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
