// corners must be same for 1
// max of one 2:3 combo per side
// max of two 2:2 combo per side
// max of one 1/4 per side

int	check_corners(char *numbers)
{
	if (numbers[0] == 1)
	{
		if (numbers [8] != 1)
			return (0);
	}
	if (numbers[3] == 1)
	{
		if (numbers[12] != 1)
			return (0);
	}
	if (numbers[4] == 1)
	{
		if (numbers[11] != 1)
			return (0);
	}
	if (numbers[7] == 1)
	{
		if (numbers[15] != 1)
			return (0);
	}
	return (1);
}

int	check_23(char *num)
{
	int	i;
	int	sides[4];

	i = 0;
	sides = {0, 0, 0, 0};
	while (i < 16)
	{
		if (i < 4 && num[i] == '2' && num[i + 4] == '3')
			sides[0] += 1;
		if (i >= 4 && i < 8 && num[i] == '2' && num[i - 4] == '3')
			sides[1] += 1;
		if (i >= 8 && i < 12 && num[i] == '2' && num[i + 4] == '3')
			sides[2] += 1;
		if (i >= 12 && i < 16 && num[i] == '2' && num[i - 4] == '3')
			sides[3] += 1;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (sides[i] > 1)
			return (0);
	}
	return (1);
}

int	check_22(char *num)
{
	int	i;
	int	sides[4];

	i = 0;
	sides = {0, 0};
	while (i < 16)
	{
		if (i < 4 && num[i] == '2' && num[i + 4] == '2')
			sides[0] += 1;
		if (i >= 8 && i < 12 && num[i] == '2' && num[i + 4] == '2')
			sides[1] += 1;
		i++;
	}
	i = 0;
	while (i < 2)
	{
		if (sides[i] > 2)
			return (0);
	}
	return (1);
}

int	check_max1(char *num)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	while (i < 16)
	{
		total = 0;
		j = i;
		while (j < i + 4)
		{
			if (num[j] == '1')
				total++;
			j++;
		}
		if (total > 1)
			return (0);
		i += 4;
	}
	return (1);
}

int	check_max4(char *num)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	while (i < 16)
	{
		total = 0;
		j = i;
		while (j < i + 4)
		{
			if (num[j] == '4')
				total++;
			j++;
		}
		if (total > 1)
			return (0);
		i += 4;
	}
	return (1);
}
