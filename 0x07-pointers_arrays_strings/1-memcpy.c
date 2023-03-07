/**
 * _memcpy - Entry to code
 * @dest: where we want to copy
 * @src: where we copy
 * @n: number of bytes
 *
 * Return: Always s (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
