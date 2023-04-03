#include "main.h"
/**
*_memset - To fill a block of memory with specific value
*@s: To start addressing the memory to be filled
*@b: To filed the desired value
*@n: To determine the number of bytes to be changed
*
*Return: To chnage array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
