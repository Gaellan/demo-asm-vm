//
// Created by Gaëllan Sifflepignon on 24/09/2023.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../inc/strings.h"

int count_spaces(char *str)
{
    int spaces = 0;
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            spaces++;
        }
        i++;
    }

    return(spaces);
}

char ** str_to_tab(char *str, char c)
{
    int next = 0;
    int start = 0;
    int length = strlen(str);
    char *buf = str_cpy(str);
    int size = count_chars(buf, c) + 1;
    char **tab = malloc(size * sizeof(*tab));
    tab[size - 1] = NULL;
    int i = 0;

    while(next < length)
    {
        char * tmp = str_tok(buf, start, c, &next);
        tab[i] = str_cpy(tmp);
        start = next + 1;
        i++;
    }

    return(tab);
}
