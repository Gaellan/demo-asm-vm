//
// Created by Gaëllan Sifflepignon on 24/09/2023.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../inc/str_to_tab.h"
#include "../inc/strings.h"

void print_tab(char **tab)
{
    int i = 0;

    while(tab[i] != NULL)
    {
        printf("[%d] %s\n", i, tab[i]);
        i++;
    }
}

char * get_file_content(char * file)
{
    FILE * fp;
    char * line = NULL;
    char * buffer = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen(file, "r");
    if (fp == NULL)
        exit(-1);

    while ((read = getline(&line, &len, fp)) != -1) {
        buffer = realloc(buffer, len * sizeof(char));
        strcat(buffer, line);
    }
    if (line)
        free(line);

    fclose(fp);

    return(buffer);
}

int write_bytecode_file(char * buffer)
{
    char * filename = "../bytecode-files/test";

    FILE * fp;

    fp = fopen(filename, "w+");

    if(fp != NULL)
    {
        fprintf(fp, "%s", buffer);
    }
    else
    {
        printf("Error opening file : %s\n", filename);
        return(-1);
    }

    fclose(fp);

    return(0);
}
