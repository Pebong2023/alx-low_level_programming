#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * DEcription: print a quote using write function
 * size_t write(int fd, const void *buf, size_t count);
 *
 * Return: Always 1
 */

int main(void)
{
fputs("and the piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
