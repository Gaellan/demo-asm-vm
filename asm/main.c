//
// Created by Gaëllan Sifflepignon on 24/09/2023.
//

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "./inc/strings.h"
#include "./inc/file.h"
#include "./inc/parse_instructions.h"
#include "./inc/str_to_tab.h"

int main(int argc, char ** argv)
{
    char *contents = get_file_content(argv[1]);
    char ** tab = str_to_tab(contents, '\n');
    char *bytecode = parse_instructions(tab);

    write_bytecode_file(bytecode);

    exit(0);
}
