# An implementation of printf() function in pure C programming language

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://github.com/narnat/printf)

## Overview

**_printf()** - is a Holberton school group project. The task is to write a custom version of printf() from standard library.

*************************************************************************

## General Requirements

Here are the general requirements:

  - Allowed editors: vi, vim, emacs
  - All your files will be compiled on Ubuntu 14.04 LTS
  - Your programs and functions will be compiled with gcc 4.8.4 using the flags **-Wall -Werror -Wextra** and **-pedantic**
  - All your files should end with a new line
  - *A README.md* file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
  - You are not allowed to use global variables
  - No more than 5 functions per file
  - In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
  - The prototypes of all your functions should be included in your header file called **holberton.h**
  - Don’t forget to push your header file
  - All your header files should be include guarded
  - Note that we will not provide the **_putchar** function for this project

******************************************************************************

## Authorized functions and macros

  - `write (man 2 write)`
  - `malloc (man 3 malloc)`
  - `free (man 3 free)`
  - `va_start (man 3 va_start)`
  - `va_end (man 3 va_end)`
  - `va_copy (man 3 va_copy)`
  - `va_arg (man 3 va_arg)`

******************************************************************************

## Compilation
  -  Your code will be compiled this way:
  ```$ gcc -Wall -Werror -Wextra -pedantic *.c```
  - As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
  - Our main files will include your main header file (`holberton.h`): `#include holberton.h`
  - You might want to look at the `gcc` flag `-Wno-format` when testing with your `_printf` and the standard `printf`.

*******************************************************************************

### Format Specifiers
Function name | Description | Format Specifier
--- | --- | ---
`print_char` | Prints a character | `%c`
`print_percent` | Prints a % | `%%`
`print_int` | Prints an integer | `%d` & `%i`
`print_string` | Prints a string | `%s`
`print_binary` | Prints a binary, custom specifier | `%b`
`print_octal` | Prints number in base 8 | `%o`
`print_hex` | Prints hexadecimal in lowercase | `%x`
`print_HEX` | Prints hexadecimal in uppercase | `%X`
`print_unsigned` | Prints unsigned integer | `%u`
`print_S` | Prints string, prints hex value of non visible characters | `%S`
`print_address` | Prints a pointer | `%p`
`print_rev` | Prints string in reverse, custom specifier | `%S`


*******************************************************************************

### Tasks
<details>
<summary>
Click here to expand
</summary>
<ul>

<li>- 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life *mandatory*
</li><li> - 1. Education is when you read the fine print. Experience is what you get if you don't *mandatory*
</li><li> - 2. Just because it's in print doesn't mean it's the gospel *mandatory
</li><li> - 3. With a face like mine, I do better in print *#advanced*
</li><li> - 4. What one has not experienced, one will never understand in print *#advanced*
</li><li> - 5. Nothing in fine print is ever good news *#advanced*
</li><li> - 6. My weakness is wearing too much leopard print *#advanced*
</li><li> - 7. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print *#advanced*
</li><li> - 8. The big print gives and the small print takes away *#advanced*
</li><li> - 9. Sarcasm is lost in print *#advanced*
</li><li> - 10. Print some money and give it to us for the rain forests *#advanced*
</li><li> - 11. The negative is the equivalent of the composer's score, and the print the performance *#advanced*
</li><li> - 12. It's depressing when you're still around and your albums are out of print *#advanced*
</li><li> - 13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection *#advanced*
</li><li> - 14. Print is the sharpest and the strongest weapon of our party *#advanced*
</li><li> - 15. The flood of print has turned reading into a process of gulping rather than savoring *#advanced*
</li><li> - 16. All of the above functionality should work flawlessly *#advanced*
</ul>


</details>
