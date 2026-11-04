cat > _putchar.c << 'EOF'
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1. On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
EOF

cat > 10-main.c << 'EOF'
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_triangle(2);
	print_triangle(10);
	print_triangle(1);
	print_triangle(0);
	return (0);
}
EOF

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
./10-triangles | tr ' ' . | cat -e#ifndef MAIN_H
#define MAIN_H

int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
int _putchar(char c);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);

#endif
void print_triangle(int size);
