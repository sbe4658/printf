# printf Clone

Welcome to my printf project, an implementation of the printf function in C. This project represents my efforts to understand and apply various format specifiers. Here's a breakdown of what I've handled so far:

implementation of the printf function in C. This project represents my efforts to understand and apply various format specifiers. This an ongoing project, so I'll be adding more stuff soon.

## Table of content

1. [Project Status](##Project-Status "Ongoing")
1. [Function Description](#Function-Description "_printf")
   1. [Prototype](###Prototype "prototype")
      2. [Description](###Description "description")
         3. [Format specifiers](###Format-Specifiers "Availaible")
	    4. [Return Value](###Return-Value "return")
	    1. [Usage](##Usage "Compile it!")   
## Project Status
	    I've put significant effort into ensuring that there are no memory leaks in the code. I'll be adding more stuff from the standart library printf; including:
	    * the pointer format specifier.
	    * non-custom conversion specifiers (i.e `+`, `#` and `space`, ...).
	    * Handling the field width.
	    * the precision for non-custom conversion specifiers.
	    * `0` & `-` flags.
	    * Custom format specifier for reversing a string `r`.
	    * Custom format specifier for rot13 `R`.

## Function Description

### Prototype
	    ---
	    `int _printf(const char *format, ...)`

### Description
	    ---
	    `_printf` is a custom implementation of the standard `printf` function in C. It takes a format string and optional arguments, processes the format specifiers, and prints the formatted output to the standard output.

#### Format Specifiers
	    ---
	    - `%s`: Prints a string.
	    - `%i`: Print signed integers.
	    - `%d`: Prints dicemals.
	    - `%u`: Print unsigned integers.
	    - `%o`: Print integers in octal format.
	    - `%x`: Print integers in lowercase hexadecimal format.
	    - `%b`: Print integers in binary format.
	    - `%X`: Print integers in uppercase hexadecimal format.
	    - `%S`: Print strings with non-printable characters replaced by their hex values (e.g., `"Test\nHuh?"` -> `"Test\x0AHuh?"`).

#### Return Value

	    `_printf` returns the number of characters printed (excluding the null-terminating character). If an error occurs, it returns a negative value `-1`

## Usage
	    Using `_printf` requires you to all the files in this repository, You can add it to your custom library!

	    I use `gcc` to compile the code:
	    ~~~
	    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output_file`

	    ~~~
## Friendly Reminder
	    I'd like to kindly remind you that this project represents my own learning journey and hard work. While I'm more than happy to share my code and knowledge, I encourage everyone to respect the ALX integrity and originality, `#weDoHardThings`. Please do NOT copy or directly use my code in your own projects otherwise you'll be flagged by Kimba :lion:. Plagiarism not only diminishes the learning experience but can also have serious consequences In your career as a SE.

	    As a responsible member of the coding community, let's embrace the spirit of learning, collaboration, and creativity. If you find my work inspiring , helpful or you have a concern don't hesitate to reach out to me via <a href="mailto:salekbenelhabchi@gmail.com">email</a> or [twitter](https://twitter.com/MrBread46 "MrBread46").

	    Thank you for your understanding !
	    ___
	    This an ALX SE program project.

