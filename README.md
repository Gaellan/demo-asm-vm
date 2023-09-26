# Demo Assembler and Virtual Machine
This is a simplified assembler and virtual machine used in a classrooms setting to teach the principle of assembly and memory.

## Registers

The program has 4 registers available. Each are readable and writable.

- reg1
- reg2
- reg3
- reg4

## Assembler instructions

All instructions start with an instruction number, starting from 1.
Instructions are read and executed from top to bottom, except if a `jump` or `zjump` instruction is called.

Values are numbers between 0 and 9 (included).

### Write

`[Instruction number] write [register] [value]`

That instruction will write the value of the specified `register` at cursor position.

### Jump

`[Instruction number] jump [Instruction to jump to]`

That instruction will jump to the specified `Instruction to jump to`.

### ZJump

`[Instruction number] zjump [Instruction to jump to] [register] [value]`

That instruction will jump to the specified `Instruction to jump to` if the specified `register` has the specified `value`.

### Add

`[Instruction number] add [register] [value]`

That instruction will add `value` to the specified `register`. If the sum is more than 9, 9 will be written.

### Sub

`[Instruction number] add [register] [value]`

That instruction will add `value` to the specified `register`. If the diffrence is less than 0, 0 will be written.


### Move

`[Instruction number] move [value]`

That instruction will move the program cursor `value` blocks in the memory. 
Value must be between -5 and 5.
