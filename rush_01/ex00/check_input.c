#include <stdlib.h>

int	check_valid(char *str, int i)
{
	if (i == 0 && str[i] >= '1' && str[i] <= '4')
		return (1);
	if (str[i] >= '1' && str[i] <= '4')
	{
		if (str[i - 1] == ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			return (1);
	}
	return (0);
}

int	*check_input(char *str)
{
	char	*numbers;
	int		i;
	int		counter;

	numbers = malloc(sizeof(char) * 16);
	i = 0;
	counter = 0;
	while (str[counter] != '\0' && i < 16)
	{
		if (check_valid(str, counter))
		{
			numbers[i] = str[counter];
			i++;
		}
		counter++;
	}
	if (i != 16)
		return (0);
	return (numbers);
}
