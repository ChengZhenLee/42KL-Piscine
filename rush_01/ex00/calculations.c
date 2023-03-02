#include <stdlib.h>
#include <unistd.h>

char	check_solo(int x, int y, char ***table)
{
	int		z;
	int		total;
	char	res;

	total = 0;
	z = 0;
	while (z < 4)
	{
		if (table[x][y][z] != '0')
		{
			res = table[x][y][z];
			total++;
		}
		z++;
	}
	if (total != 1)
		return (0);
	return (res);
}

int	*find_unique__row(char ***table, int x)
{
	int	temp[4];
	int	y;
	int	z;

	temp = {0, 0, 0, 0};
	y = 0;
	while (y++ < 4)
	{
		z = 0;
		while (z < 4)
		{
			if (table[x][y][z] != '0')
				temp[z] += 1;
			z++;
		}
		y++;
	}
	return (temp);
}

int	*find_unique_col(char ***table, int y)
{
	int	temp[4];
	int	x;
	int	z;

	temp = {0, 0, 0, 0};
	x = 0;
	while (x < 4)
	{
		z = 0;
		while (z < 4)
		{
			if (table[x][y][z] != '0')
				temp[z] += 1;
			z++;
		}
		x++;
	}
	return (temp);
}

char	***check_unique(char ***table)
{
	int	x;
	int	i;
	int	tempc[4];
	int	tempr[4];

	x = 0;
	while (x < 4)
	{
		tempr = find_unique_row(table, x);
		tempc = find_unique_col(table, x);
		i = 0;
		while (i < 4)
		{
			if (tempr[i] == 1)
				table = remove_num(table, i, x, '-');
			if (tempc[i] == 1)
				table = remove_num(table, i, x, '|');
			i++;
		}
		x++;
	}
	return (table);
}

char	***remove_num(char ***table, int n, int ind, char mod)
{
	int	i;
	int	z;

	i = 0;
	while (i < 4)
	{
		if (mod = '-')
		{
			if (table[ind][i][n] != '0')
			{
				z = 0;
				while (table[ind][i][z++] != n + 49)
					table[ind][i][z] = '0';
			}
		}
		else if (mod = '|')
		{
			if (table[i][ind][n] != '0')
			{
				z = 0;
				while (table[i][ind][z++] != n + 49)
					table[i][ind][z] = '0';
			}
		}
		i++;
	}
	return (table);
}
