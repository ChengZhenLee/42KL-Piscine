#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *check_input(char *str);
int	check_valid(char *str);

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	int *test = check_input(argv[1]);
	if (test == NULL )
		return (0);
	int counter = 0;
	while (counter < 16)
	{
		printf("%c", test[counter]);
		counter++;
	}
}
