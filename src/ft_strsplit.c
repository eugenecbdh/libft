#include "libft.h"

int num_words(char *s, char del)
{
    int n = 0;
    int i = 0;

    while(s[i] != '\0')
    {
       if(s[i] == del)
       {
           i++;
       }
       if(s[i] != del && s[i+1] == del || s[i+1] == '\0')
       {
           n++;
       }
       i++;
    }
    return n;
}

int *num_chars(char *s, int num_words, char del)
{   
    int *arr;
    arr = (int*)malloc(num_words * sizeof(int));
    if(arr == NULL)
    {
        printf("Memory error: num_chars");
    }
    int i = 0;
    int j = 0;
    int length = 0;

    while(s[i] != '\0')
    {
        while(s[i] == del && s[i] != '\0')
        {
            i++;
        }
        while(s[i] != del && s[i] != '\0')
        {
            i++;
            length ++;
        }
        arr[j] = length;
        //printf("Number of letters: %d \n", length);
        j++;
        length = 0;
        i++;
    }

    return arr;
} 

char **ft_strsplit(char *s, char del)
{
    char ** arr;
    int words = num_words(s, del);
    int *chars = num_chars(s, words, del);
    int i = 0;
    int j = 0;
    int k = 0;

    arr = ((char**)malloc(words * sizeof (char*)));
    if(arr == NULL)
    {
        printf("\nMemory not allocated");
    }

    while(s[i] != '\0')
    {
        while(s[i] == del && s[i] != '\0')
            {
                i++;
            }
            arr[j] = (char*)malloc((chars[j] + 1) * sizeof(char)); // 0 word == size_of chars[0] = sizeof 3 chars 
            if(arr[j] == NULL)
            {
                printf("\nMemory not ...");
            }
            k = 0;

            while(s[i] != del && s[i] != '\0')
            {
                arr[j][k] = s[i];  // arr[0][0] = letter , arr[0][1] = next letter
                //printf("%c", arr[j][k]);
                i++;
                k++;
            }
            arr[j][k] = '\0';
            j++;
    }
    return arr;
}