<a href="image monty"><img src="https://www.vhv.rs/dpng/d/536-5361736_monty-python-and-the-holy-grail-logo-hd.png" align="middle" width="800" height="400"></a>
---

> # 0x19. C - Pilas, Colas - LIFO, FIFO
---
> ## Table of Contents
---
* [Description](#description)
* [Requirements](#requirements)
* [Installation](#installation)
* [Compilation](#Compilation)
* [Example of usage](#Example_of_usage)
---

## Description
---
`Monty 0.98` is a scripting language that is first compiled into `Monty byte codes (Just like Python)`. It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for `Monty ByteCodes files`.
    * `Monty byte code files`: Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode

## Requirements
---
monty is designed to run in the `Ubuntu 14.04 LTS` linux environment and to be compiled using the GNU compiler collection v. `gcc 4.8.4` with flags`-Wall, -Werror, -Wextra, and -pedantic.`

## Installation
---
Clone this repository: `"https://github.com/ricardo1470/monty"`
   * Change directories into the repository: `cd monty`
   * Compile: see installation instructions later
   * Run the scripts: depending on the case you must run the script as follows: after compiling `./filename` + `test file`.
        * for example: `gcc -Wall -Werror -Wextra -pedantic *.c -o monty`. now we execute as follows `./monty bytecodes/00.m`

## Compilation
---
* Compile: ``gcc -Wall -Werror -Wextra -pedantic *.c -o monty``
* Our main files will include your main header file (`monty.h`): `#include monty.h`

## Example of usage
---
```c
cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
./monty bytecodes/00.m
3
2
1
```

---
| **Filename** | **Description** |
|---|---|
| [0. push, pall](./monty_push.c)  | Implement the push and pall opcodes.  |
| [1. pint](./monty_push.c)  | Implement the pint opcode.  |
| [2. pop](./monty_push.c)  | Implement the pop opcode.  |
| [3. swap](./monty_push.c)  | Implement the swap opcode.  |
| [4. add](./monty_add.c)  | Implement the add opcode.  |
| [5. nop](./)  | Implement the nop opcode.  |
| advanced |
| [6. sub](./monty_add.c)  | Implement the sub opcode.  |
| [7. div](./monty_add.c)  | Implement the div opcode.  |
| [8. mul](./monty_add.c)  | Implement the mul opcode.  |
| [9. mod](./monty_add.c)  | Implement the mod opcode.  |
| [10. comments](./monty_main.c)  | Every good language comes with the capability of commenting. When the first non-space character of a line is #, treat this line as a comment (don’t do anything).  |
| [11. pchar](./monty_pchar.c)  | Implement the pchar opcode.  |
| [12. pstr](./monty_pchar.c)  | Implement the pstr opcode.  |
| [13. rotl](./monty_pchar.c)  | Implement the rotl opcode.  |
| [14. rotr](./)  | Implement the rotr opcode.  |
| [15. stack, queue ](./)  | Implement the stack and queue opcodes.  |
| [16. Holberton](./bf/1000-holberton.bf)  | Write a `Brainf*ck` script that prints Holberton, followed by a new line.  |
| [17. Add two digits](./bf/1001-add.bf)  | Add two digits given by the user.  |
| [18. Multiplication](./bt/1002-mul.bf)  | Multiply two digits given by the user.  |
| [19. Multiplication level up](./bf/1003-mul.bf)  | Multiply two digits given by the user. and print the result, followed by a new line  |
| **install brainf*ck**  | `sudo apt-get install bf`  |
|   |   |

---
> ## contact 💬

### | [twitter](https://twitter.com/RICARDO1470) | [linkedin](https://www.linkedin.com/in/ricardo-alfonso-camayo/) | [mail](1466@holbertonschool.com) | [github](https://github.com/ricardo1470/README/blob/master/README.md) |

---
