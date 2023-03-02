/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 08:11:26 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/17 09:45:39 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

char	**ft_sort_params(int argc, char **argv)
{
	int		outer;
	int		inner;
	char	*temp;

	outer = argc;
	while (outer > 0)
	{
		inner = 1;
		while (inner < outer - 1)
		{
			if (ft_strcmp(argv[inner], argv[inner + 1]) > 0)
			{
				temp = argv[inner];
				argv[inner] = argv[inner + 1];
				argv[inner + 1] = temp;
			}
			inner++;
		}
		outer--;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	argv = ft_sort_params(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
