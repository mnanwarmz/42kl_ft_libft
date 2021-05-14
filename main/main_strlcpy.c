#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    printf("START PROGRAM OUTPUT\n");
    char str[] = "abcdefghijklmnopqrst";
    char dest[] = "ABCDEFGHIJKLMNOPQRST";
    printf("Before: %s ->\n%s\n", str, dest);
    printf("Copying 10 characters, returns length of source: %zu\n", ft_strlcpy(dest, str, 10));
    printf("After: %s ->\n", str);
    for(int i = 0; i < 20; i++)
    {
        printf("%c", dest[i]);
    }
    printf("\nEND PROGRAM OUTPUT\n");
}
