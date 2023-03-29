#include "main.h"

int is_lower(char c)
{
    return (c >= 'a' && c <= 'z');
}

char *cap_string(char *str)
{
    int i = 0;
    int j;

    if (is_lower(str[i]))
        str[i] -= 32;
    char *spe = ",;.!?\"(){}\t\n "; 
    while (str[i])
    {
        for (j = 0; spe[j] != '\0'; j++)
        {
            if (str[i] == spe[j])
            {
                if (is_lower(str[i + 1]))
                    str[i + 1] -= 32;
            }
        }
        i++;
    }
    return (str);
}
