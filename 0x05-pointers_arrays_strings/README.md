#***C- Pointer, Arrays and Strings***
This directory is created as part of the Alx low level programming repo, to text 
out knowledge of pointer, strings and arrays in c programming.

##***PROJECT REQUIREMENTS***
- [x] A Header file 'main.h' containing all function prototypes
- [x] Use of '_putchar' for stdout. its prototype available in 'main.h'
- [x] Test examples 'main.c' provided by the project(not pushed to github)
- [x] The '_putchar.c' file made available in the project.
- [x] Code must pass Betty style check.
- [x] Compiled on Ubuntu 20.04LTS gcc, using the options -Wall -Werror -Wextra
 -pedantic -std=gnu89

Each file in this directory are function that perform specific tasks and meet 
certain criterials as instructed by the alx material.
The tasks are divided into two sections with different level of difficulty.
- **Mandatory Task**
- **Advance Tasks**

The list of files and what they do are highlighted below;
##**MANDATORY TASK**
-###**0-reset_to_98.c**
The function takes a pointer to an int as parameter and updates the value 
it points to to 98 with the Prototype:'void reset_to_98(int *n);'

-###**1-swap.c**
The function swaps the values of two integers. 
Using the Prototype:'void swap_int(int *a, int *b);'

-###**2-strlen.c**
The function returns the length of a string, with the 
Prototype:'int _strlen(char *s);'

-###**3-puts.c**
The function prints a string, followed by a new line, to stdout, using the 
Prototype:'void _puts(char *str);'

-###**4-print_rev.c**
The function prints a string, in reverse, followed by a new line. With the 
Prototype:'void print_rev(char *s);'

-###**5-rev_string.c**
The function reverses a string with the Prototype:'void rev_string(char *s);'

-###**6-puts2.c**
The function prints every other character of a string, starting with the first 
character, followed by a new line. Using the Prototype:'void puts2(char *str);'

-###**7-puts_half.c**
The function prints half of a string, followed by a new line. It makes use of 
the Prototype:'void puts_half(char *str);'. It prints the second half of the 
string. If the number of characters is odd, the function should print the last n 
characters of the string, where 'n = (length_of_the_string - 1) / 2'

-###**8-print_array.c**
The function prints n elements of an array of integers, followed by a new line. 
It uses the Prototype:'void print_array(int *a, int n);'.Where 'n' is the number 
of elements of the array to be printed. Numbers are separated by comma, followed 
by a space.The numbers are be displayed in the same order as they are stored in 
the array. The use of 'printf' is allowed.

-###**9-strcpy.c**
The function  copies the string pointed to by 'src', including the terminating 
null byte (\0), to the buffer pointed to by 'dest'.
Return Value: Pointer to 'dest'
FYI: The standard library provides a similar function: strcpy.[^1] 
Run man strcpy to learn more.[^2]

##**ADVANCE TASK**
-###**100-atoi.c**
The function converts string to an integer using Prototype:'int _atoi(char *s);' 
The number in the string can be preceded by an infinite number of characters 
taking into account all the '-' and '+' signs before the number. If there are no 
numbers in the string, the function must return 0. using 'long' is prohibited,
declaring new variables of “type” array is not allowed, hard-code special values
are not allowed. We will use the -fsanitize=signed-integer-overflow gcc flag to
compile the code.

-###**101-keygen.c**
The Program generates random valid passwords for the program '101-crackme'. 
The use of standard library is allowed. The betty-style tests can be ignored 
(you still need to pass the betty-doc tests).