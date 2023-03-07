/**
 * _strstr - Entry to code
 * @haystack: where we looking for
 * @needle: what we looking for
 *
 * Return: address of first occurence substring needle
 * Or NULL if nothing found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int t = 0;
	int count = 1;

	if (*needle == 0)
		return (haystack);
	while (needle[t] != '\0')
		t++;
	while (haystack[j + t - 1] != '\0')
	{
		count = 0;
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[j + i] == needle[i])
				count++;
			else
				break;
		}
		if (count == t)
			return (haystack + j);
		j++;
	}
	return ('\0');
}
