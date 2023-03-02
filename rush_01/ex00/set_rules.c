#include <stdlib.h>

int	valid_combs(char *nm)
{
	int	c;
	int	d;

	c = 0;
	while (c < 16)
	{
		if (c < 4 || (c >= 8 && c < 12))
			d = c + 4;
		else
			d = c - 4;
		if (nm[c] == '4' && nm[d] != '1')
			return (0);
		if (nm[c] == '2' && nm[d] == '4')
			return (0);
		if (nm[c] == '3' && (nm[d] == '3' || nm[d] == '4'))
			return (0);
		if (nm[c] == '1' && nm[d] == '1')
			return (0);
		c++;
	}
	return (1);
}

int	valid_edge(char *nm, char ***table)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i < 4)
			tedge(nm[i], table, i, 0);
		if (i >= 4 && i < 8)
			tedge(nm[i], table, (i - 4), 3);
		if (i >= 8 && i < 12)
			tedge(nm[i], table, 0, (i - 8));
		if (i >= 12 && i < 16)
			tedge(nm[i], table, 3, (i - 12));
		i++;
	}
}

int	tedge(char i, char ***table, int x, int y)
{
	int	z;

	z = 0;
	while (i == '1' && z < 3)
		table[x][y][z++] = '0';
	if (i == '2')
	{
		z = 3;
		table[x][y][z] = '0';
	}
	if (i == '3')
	{
		z = 2;
		while (z < 4)
			table[x][y][z++] = '0';
	}
	if (i == '4')
	{
		z = 1;
		while (z < 4)
			table[x][y][z++] = '0';
	}
}
