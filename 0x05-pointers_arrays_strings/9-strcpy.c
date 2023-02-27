#include "main.h"
#include <string.h>

/**
 * *_strcpy - copies the string
 * @dest: pointer to type char
 * @src: pointer to type char
 *
 * description -  function that copies the string pointed to by src, including
 * the terminating null byte o the buffer pointed to by dest
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
