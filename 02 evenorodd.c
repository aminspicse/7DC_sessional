/*
    2)	 Write a program which will take integer number input infinite times
         and as an output it will show this number is even or odd.
*/
#include<stdio.h>

int main()
{
    int num, cont=1;

    for(int i=1; i<=cont; i++)
    {
        printf("\nEnter a Number: ");
        scanf("%d",&num);

        if(num % 2 == 0)
        {
            printf("%d is even number.",num);
        }
        else
        {
            printf("%d is odd number.",num);
        }

        ++cont;
    }

    return 0;
}
