/**
 * _strspn - Entry to code
 * @s: where we llooking for
 * @accept: what we looking for
 *
 * Return: Always number of  c (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int nbr = 0;
	int i = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				nbr++;
				break;
			}
			if (accept[i + 1] == '\0')
				return (nbr);
		}
		j++;
	}
	return (nbr);
}
