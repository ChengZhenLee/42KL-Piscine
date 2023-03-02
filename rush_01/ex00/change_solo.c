char	check_solo(int x, int y, char ***table);

char	***ft_solo(char ***table, int n, int ind, char mod)
{
	int	i;
	int	z;

	i = 0;
	while (i < 4)
	{
		if (i != ind && mod = '-')
		{
			z = 0;
			while (table[ind][i][z++] == n)
				table[ind][i][z] = '0';
		}
		else if (i != ind && mod = '|')
		{
			z = 0;
			while (table[i][ind][z++] == n)
				table[i][ind][z] = '0';
		}
		i++;
	}
	return (table);
}

char	***change_solo(char ***table)
{
	int	soln;
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			soln = check_solo(x, y, table);
			if (soln == 0)
				y++;
			if (soln != 0)
			{
				table = ft_solo(table, soln, x, '-');
				table = ft_solo(table, soln, y, '|');
				y++;
			}
		}
		x++;
	}
}
