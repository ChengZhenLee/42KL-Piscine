int	input_sides(char *nm, char ***table)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i < 4)
			colu(nm[i], table, i, 0);
		if (i >= 4 && i < 8)
			cold(nm[i], table, (1 - 4), 3);
		if (i >= 8 && i < 12)
			rowl(nm[i], table, 0, (i - 8));
		if (i >= 12 && i < 16)
			rowr(nm[i], table, 3, (i - 12));
		i++;
	}
}

int	colu(char i, char ***table, int x, int y)
{
    int z;
    z = 0;
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
        table[x][y + 1][z] =
        table[x][y + 2][z]
        table[x][y + 3][z]
	}
}