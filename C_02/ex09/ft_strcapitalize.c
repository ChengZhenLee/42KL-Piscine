/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:57:11 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/14 20:55:28 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isupalpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	islowalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	isnumeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*temp;
	int		isfirst;

	isfirst = 1;
	temp = str;
	while (*temp != '\0')
	{
		if (islowalpha(*temp) && isfirst)
			*temp = *temp - 'a' + 'A';
			isfirst = 0;
		if (isnumeric(*temp) && isfirst)
			isfirst = 0;
		if (isupalpha(*temp) && isfirst == 0)
			*temp = *temp - 'A' + 'a';
		if (!(isupalpha(*temp) || islowalpha(*temp) || isnumeric(*temp)))
			isfirst = 1;
		temp++;
	}
	return (str);
}
