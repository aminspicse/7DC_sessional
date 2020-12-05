/*
    3)	Write a program which will take birth date as input and will show current age as output.
        Input sample: 27:12:1990
        Output sample: 30Year10Months12Days
*/

#include <windows.h> // use to define SYSTEMTIME , GetLocalTime() and GetSystemTime()
#include<stdio.h>

int main()
{
    SYSTEMTIME t; // Declare SYSTEMTIME struct

    GetLocalTime(&t); // Fill out the struct so that it can be used
    int currentDate, currentMonth, currentYear, birthDate, birthMonth, birthYear;
    currentDate = t.wDay;
    currentMonth = t.wMonth;
    currentYear = t.wYear;

    printf("Enter your Birth Date dd:mm:yyyy: ");
    scanf("%d:%d:%d",&birthDate,&birthMonth,&birthYear);

    printf("\nCurrent Date: dd:mm:yyyy: %d:%d:%d",currentDate,currentMonth,currentYear);
    //printf("Date: %d\tMonth: %d \t Year: %d \n", birthDate, birthMonth, birthYear);

    // function call to print age
    FindAge(currentDate, currentMonth, currentYear,birthDate, birthMonth, birthYear);

    return 0;
}


// function to calculate current age
void FindAge(int current_date, int current_month, int current_year, int birth_date, int birth_month, int birth_year)
{
    // days of every month
    int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // if birth date is greater then current birth
    // month then do not count this month and add 30
    // to the date so as to subtract the date and
    // get the remaining days
    if (birth_date > current_date) {
        current_date = current_date + month[birth_month - 1];
        current_month = current_month - 1;
    }

    // if birth month exceeds current month, then do
    // not count this year and add 12 to the month so
    // that we can subtract and find out the difference
    if (birth_month > current_month) {
        current_year = current_year - 1;
        current_month = current_month + 12;
    }

    // calculate date, month, year
    int calculated_date = current_date - birth_date;
    int calculated_month = current_month - birth_month;
    int calculated_year = current_year - birth_year;

    // print the present age
    printf("\n\nYour Age = %d Year \t %d Month \t %d Day.\n", calculated_year, calculated_month, calculated_date);
}
