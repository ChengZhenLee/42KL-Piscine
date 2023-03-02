/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:33:27 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/16 18:14:43 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		haystack;
	int		needle;
	int		len;

	haystack = 0;
	len = 0;
	while (to_find[len] != '\0')
		len++;
	if (len == 0)
		return (str);
	while (str[haystack] != '\0')
	{
		needle = 0;
		while (str[haystack + needle] == to_find[needle])
		{
			if (needle == len - 1)
				return (&str[haystack]);
			needle++;
		}
		haystack++;
	}
	return (0);
}
