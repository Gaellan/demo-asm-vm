//
// Created by Gaëllan Sifflepignon on 24/09/2023.
//

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../inc/str_to_tab.h"
#include "../inc/file.h"
#include "../inc/strings.h"

char * parse_write(char *nbr, char *reg, char *val)
{
    int length = strlen(nbr) + strlen(reg) + strlen(val) + 4;
    char *bytecode = malloc(length * sizeof(char));
    sprintf(bytecode, "%s 1 %s %s\n", nbr, reg, val);

    return(bytecode);
}

char * parse_jump(char * nbr, char * to)
{
    int length = strlen(nbr) + strlen(to) + 3;
    char *bytecode = malloc(length * sizeof(char));
    sprintf(bytecode, "%s 2 %s\n", nbr, to);

    return(bytecode);
}

char * parse_zjump(char * nbr, char * to, char * reg, char * value)
{
    int length = strlen(nbr) + strlen(to) + strlen(reg) + strlen(value) + 5;
    char *bytecode = malloc(length * sizeof(char));
    sprintf(bytecode, "%s 3 %s %s %s\n", nbr, to, reg, value);

    return(bytecode);
}

char * parse_add(char * nbr, char * reg, char * value)
{
    int length = strlen(nbr) + strlen(reg) + strlen(value) + 4;
    char *bytecode  = malloc(length * sizeof(char));
    sprintf(bytecode, "%s 4 %s %s\n", nbr, reg, value);

    return(bytecode);
}

char * parse_sub(char * nbr, char * reg, char * value)
{
    int length = strlen(nbr) + strlen(reg) + strlen(value) + 4;
    char *bytecode = malloc(length * sizeof(char));
    sprintf(bytecode, "%s 5 %s %s\n", nbr, reg, value);

    return(bytecode);
}

char * parse_move(char * nbr, char * value)
{
    int length = strlen(nbr) + strlen(value) + 3;
    char *bytecode = malloc(length * sizeof(char));
    sprintf(bytecode, "%s 6 %s\n", nbr, value);

    return(bytecode);
}

char * parse_instructions(char **cmds)
{
    int i = 0;
    char * buffer = NULL;
    char * bytecode;
    char * cmd = NULL;
    char **tab;

    while(cmds[i] != NULL)
    {
        cmd = str_cpy(cmds[i]);
        tab = str_to_tab(cmd, ' ');

        if(strcmp(tab[1], "write") == 0)
        {
            bytecode = parse_write(tab[0], tab[2], tab[3]);
        }
        else if(strcmp(tab[1], "jump") == 0)
        {
            bytecode = parse_jump(tab[0], tab[2]);
        }
        else if(strcmp(tab[1], "zjump") == 0)
        {
            bytecode = parse_zjump(tab[0], tab[2], tab[3], tab[4]);
        }
        else if(strcmp(tab[1], "add") == 0)
        {
            bytecode = parse_add(tab[0], tab[2], tab[3]);
        }
        else if(strcmp(tab[1], "sub") == 0)
        {
            bytecode = parse_sub(tab[0], tab[2], tab[3]);
        }
        else if(strcmp(tab[1], "move") == 0)
        {
            bytecode = parse_move(tab[0], tab[2]);
        }

        buffer = realloc(buffer, strlen(bytecode));
        strcat(buffer, bytecode);

        i++;
    }

    return(buffer);
}
