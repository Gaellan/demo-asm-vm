//
// Created by Gaëllan Sifflepignon on 24/09/2023.
//

#ifndef DEMO_ASM_VM_STRINGS_H
#define DEMO_ASM_VM_STRINGS_H

char * str_cpy(char * str);
int next_char(char *str, int start, char c);
char * str_tok(char *str, int start, char c, int * next);
char * sub_str(char *str, int start, int end);
int count_chars(char *str, char c);

#endif //DEMO_ASM_VM_STRINGS_H
