#include "libft.h"

int get_int_length(int n)
{
    int temp = n;
    int length = 1;

    if (temp < 0)
    {
        temp *= -1;
        length = 2;
    }

    while ((temp / 10) > 0)
    {
        temp = temp / 10;
        length++;
    }
    return length;
}

char *ft_itoa(int n)
{
    char *s;
    int length = get_int_length(n);
    printf("The length of int is %d", length);
    
    s = (char*)malloc(length * sizeof(char));
    if(s == NULL)
    {
        printf("\nMemory nicht bin");
    }

    if(n < 0)
    {
        n *= -1;
        s[length] = '\0';
        while(n > 0)
        {
            s[length - 1] = '0' + (n % 10);
            n = n / 10;
            length--;
        }
        printf("\nlength is now %d", length);
        s[length - 1] = '-';
        return s;
    }

    if(n >= 0 && n <= 9)
    {
        *s = '0' + n;
        return s;
    }

    if(n > 9)
    {
        s[length] = '\0';
        while((length) > 0)
        {
            s[length - 1] = '0' + (n % 10);
            n = n / 10;
            length--;
        }
    }
    return s;
} 
