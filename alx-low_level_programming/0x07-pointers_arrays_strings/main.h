#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);  /* Fill memory with a constant byte */
int _putchar(char c);  /* Write a character to stdout */
char *_memcpy(char *dest, char *src, unsigned int n);  /* Copy memory area */
char *_strchr(char *s, char c);  /* Locate character in string */
unsigned int _strspn(char *s, char *accept);  /* Get the length of a prefix substring */
char *_strpbrk(char *s, char *accept);  /* Search a string for any of a set of bytes */
char *_strstr(char *haystack, char *needle);  /* Locate a substring in a string */
void print_chessboard(char a[8][8]);  /* Print a chessboard */
void print_diagsums(int *a, int size);  /* Print the sums of the diagonals in a matrix */
void set_string(char **s, char *to);  /* Set the value of a pointer to a string */
