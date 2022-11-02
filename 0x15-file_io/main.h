#ifndef MAIN_H
#define MAIN_H

/**
 * File: MAIN_H
 * Desc: Header file containing all prototypes writen
 * under 0x15. C - File I/O directory.
 * Author: Ogedegbe Peace
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif
