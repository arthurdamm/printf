# An implementation of printf() function in pure C programming language

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://github.com/narnat/printf)

## Overview

**_printf()** - is a Holberton school group project. The task is to write a custom version of printf() from standard library.

Table of contents
=================

<!--ts-->
   * [Overview](#overview)
   * [Table of contents](#table-of-contents)
   * [General Requirements](#general-requirements)
   * [Authorized functions and macros](#authorized-functions-and-macros)
   * [Compilation](#compilation)
   * [Format Specifiers](#format-specifiers)
   * [Tasks](#tasks)
   * [Installation](#installation)
   * [Examples](#examples)
   * [Authors](#authors)
<!--te-->


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

## Format Specifiers
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

<li>- 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life <i>mandatory</i>
</li><li> - 1. Education is when you read the fine print. Experience is what you get if you don't  <i>mandatory</i>
</li><li> - 2. Just because it's in print doesn't mean it's the gospel  <i>mandatory</i>
</li><li> - 3. With a face like mine, I do better in print <i>#advanced</i>
</li><li> - 4. What one has not experienced, one will never understand in print <i>#advanced</i>
</li><li> - 5. Nothing in fine print is ever good news <i>#advanced</i>
</li><li> - 6. My weakness is wearing too much leopard print <i>#advanced</i>
</li><li> - 7. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print <i>#advanced</i>
</li><li> - 8. The big print gives and the small print takes away <i>#advanced</i>
</li><li> - 9. Sarcasm is lost in print <i>#advanced</i>
</li><li> - 10. Print some money and give it to us for the rain forests <i>#advanced</i>
</li><li> - 11. The negative is the equivalent of the composer's score, and the print the performance <i>#advanced</i>
</li><li> - 12. It's depressing when you're still around and your albums are out of print <i>#advanced</i>
</li><li> - 13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection <i>#advanced</i>
</li><li> - 14. Print is the sharpest and the strongest weapon of our party <i>#advanced</i>
</li><li> - 15. The flood of print has turned reading into a process of gulping rather than savoring <i>#advanced</i>
</li><li> - 16. All of the above functionality should work flawlessly <i>#advanced</i>
</ul>
</details>

## Installation

In order to use this custom `_printf` function you need only `<unistd.h>` library
First, clone this repository to your local machine:
```
$ git clone https://github.com/narnat/printf.git
```

After cloning go to the printf folder

```
$ cd printf
```
You can compile it with your your C source code

```
$ gcc *.c your_C_source_code -o output
```
But the simplest solution is to make it portable, in other words to create a static library:
```
gcc *.c
ar -rc libprintf.a *.o
ranlib libprintf.a
```
Now you will have `printf.a` static library, and all you have to do is compile your code with this library:
```
gcc your_C_source_code -L. -lprintf
```

## Authors
(Arthur Damm)[https://github.com/arthurdamm]
(Farrukh Akhrarov)[https://github.com/narnat]