/*
    4)	Write a program to accept 10 values in an integer array. Display the number of odd, even, and negative numbers.
*/
#include<stdio.h>

int main()
{
    int arr[10];
    printf("Enter array element: \n");
    for(int i=0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    //even(arr[10]);

    printf("Even Number: ");
    for(int j=0;j<10; j++)
    {
        if(arr[j] % 2 == 0)
        {
            printf("%d\t",arr[j]);
        }
    }

    printf("\nOdd Number: ");
    for(int j=0;j<10; j++)
    {
        if(arr[j] % 2 != 0)
        {
            printf("%d\t",arr[j]);
        }
    }

    printf("\n Negative Number: ");
    for(int j=0;j<10; j++)
    {
        if(arr[j] < 0)
        {
            printf("%d\t",arr[j]);
        }
    }
    return 0;
}
