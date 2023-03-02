/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:51:51 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/16 15:33:00 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	counter;

	counter = 0;
	len_dest = str_len(dest);
	len_src = str_len(src);
	if (size == 0)
		return (len_src);
	if (size <= len_dest)
		return (size + len_src);
	while (src[counter] != '\0' && counter < size - 1 - len_dest)
	{
		dest[len_dest + counter] = src[counter];
		counter++;
	}
	return (len_src + len_dest);
}
