#include <stdlib.h>

char	***create_table(void)
{
	char	***table;
	int		x;
	int		y;
	int		z;

	table = malloc(sizeof(char **) * 4);
	x = 0;
	while (x < 4)
	{
		table[x] = malloc(sizeof(char *) * 4);
		y = 0;
		while (y < 4)
		{
			table[x][y] = malloc(sizeof(char) * 4);
			z = 0;
			while (z < 4)
			{
				table[x][y][z] = z + 1 + 48;
				z++;
			}
			y++;
		}
		x++;
	}
	return (table);
}
