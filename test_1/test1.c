//打印每个月的的天敄1�7

#include<stdio.h>

# define MONTHS 12
int main()
{
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,30};
    int index;
    for (index = 0;index < MONTHS; index++)
    {
        printf("Months %2d has %2d days.\n", index + 1, days[index]);

    }
    return 0;
}