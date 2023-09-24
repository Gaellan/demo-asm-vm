# Demo Assembler and Virtual Machine
This is a simplified assembler and virtual machine used in a classrooms setting to teach the principle of assembly and memory.

## Registers

The program has 5 registers available. Each are readable and writable.

- reg0
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

That instruction will write the `value` to the specified `register`.

### Jump

`[Instruction number] jump [Instruction to jump to]`

That instruction will jump to the specified `Instruction to jump to`.

### ZJump

`[Instruction number] zjump [Instruction to jump to] [register] [value]`

That instruction will jump to the specified `Instruction to jump to` if the specified `register` has the specified `value`.

### Add

`[Instruction number] add [register] [value]`

That instruction will add `value` to the specified `register`. If the sum is more than 127, 127 will be written.

### Sub

`[Instruction number] add [register] [value]`

That instruction will add `value` to the specified `register`. If the sum is more than 127, 127 will be written.


### Move

`[Instruction number] move [value]`

That instruction will move the program cursor `value` blocks in the memory.
Value must be between -5 and 5.


## Command costs

### Write

1 cycle.

### Jump

1 cycle.

### ZJump

2 cycles.

### Add

2 cycles.

### Sub

2 cycles.

### Move

From 1 to 5 cycles depending on the move length.