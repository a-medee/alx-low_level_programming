#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */


int main(void)
{

	char *n = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(STDERR_FILENO, n, strlen(n));
	return (1);
}
