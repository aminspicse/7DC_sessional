/*
    1)	Write a C program which will find out all primes numbers from 400 to 10000.
        All Primes numbers should be stored in an array.
*/
#include<stdio.h>
int main()
{
    int arr[10000], lower=400, higer = 10000, cnt=0, flag;
    //printf("Prime Numbers are: \n");
    for(int i=lower; i<=higer; i++)
    {
        flag=0;
        for(int j=1; j<=higer; j++)
        {
            if(i%j == 0)
                flag++;
        }

        if(flag==2)
        {
            //printf("%d\n",i);
            arr[cnt] = i;
            cnt++;
        }
            //printf("%d " ,i);
    }

    printf("Prime Number is \n");
    for(int i=0; i < cnt; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
