//
// Created by Gaëllan Sifflepignon on 24/09/2023.
//

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int count_chars(char *str, char c)
{
    int i = 0;
    int counter = 0;

    while(str[i] != '\0')
    {
        if(str[i] == c)
        {
            counter++;
        }

        i++;
    }

    return(counter);
}

int next_char(char *str, int start, char c)
{
    int i = start;

    while(str[i] != '\0')
    {
        if(str[i] == c)
        {
            return(i);
        }

        i++;
    }

    return(i);
}

char * sub_str(char *str, int start, int end)
{
    int length = end - start;
    char * sub = malloc(length * sizeof(char));
    sub[length - 1] = '\0';
    int i = 0;
    int j = start;

    while(j < end)
    {
        sub[i] = str[j];
        i++;
        j++;
    }

    return(sub);
}

char * str_tok(char *str, int start, char c, int * next)
{
    int end = next_char(str, start, c);
    *next = end;
    char * tok = sub_str(str, start, end);

    return(tok);
}

char * str_cpy(char * str)
{
    int length = strlen(str);
    char * cpy = malloc(length * sizeof(char));
    cpy[length - 1] = '\0';

    int i = 0;
    while(str[i] != '\0')
    {
        cpy[i] = str[i];
        i++;
    }

    return(cpy);
}
