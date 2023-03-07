/**
 * _strpbrk - Entry to code
 * @s: where we looking for
 * @accept: what we looking for
 *
 * Return: address of first occurence substring containing accept's elts
 * Or NULL if nothing found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
				return (s + j);
		}
		j++;
	}
	return (0);
}
