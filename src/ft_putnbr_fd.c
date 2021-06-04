#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if(n < 0)
    {
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(n * (-1), fd);
    }

    if(n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd('0' + (n % 10), fd);
    }

    if(n >= 0 && n <=9)
    {
        ft_putchar_fd('0' + n, fd);
    }
}