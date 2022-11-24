#include <stdio.h>
#include <string.h>
#include "main.h"

int _strlen(char *s)
{
    int len = 0;

   
    while (*s !='\0')
    {
        len++;

        s++;

        printf("the length 'n' of %d", len);
    }


    
    return (0); 
}
