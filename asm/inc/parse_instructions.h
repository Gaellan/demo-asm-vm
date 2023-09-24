//
// Created by Gaëllan Sifflepignon on 24/09/2023.
//

#ifndef DEMO_ASM_VM_PARSE_INSTRUCTIONS_H
#define DEMO_ASM_VM_PARSE_INSTRUCTIONS_H

char * parse_instructions(char **cmds);
char * parse_write(char * write_instruction);
char * parse_jump(char * jump_instruction);
char * parse_zjump(char * zjump_instruction);
char * parse_add(char * add_instruction);
char * parse_sub(char * sub_instruction);
char * parse_move(char * move_instructions);

#endif //DEMO_ASM_VM_PARSE_INSTRUCTIONS_H
