#include "../includes/pile.h"

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1,str++,1);
    }
}

long ft_atoi(char *str)
{
    int sign;
    long result;

    sign = 1;
    result = 0;

    while(*str == ' ' || (*str >= 9 && *str <= 13))
            str++;
    if (*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
            str++;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return (result * sign);
}