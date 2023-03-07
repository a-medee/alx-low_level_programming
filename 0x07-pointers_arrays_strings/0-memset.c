/**
 * _memset - Entry to code
 * @s:the buffer
 * @b:constant used to fill s
 * @n: number of bytes
 *
 * Return: Always s (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
