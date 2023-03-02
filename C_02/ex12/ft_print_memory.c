/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:20:58 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/12 14:28:18 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_puthex(char *n, int depth)
{
	int 	rem;
	int 	rec;
	char	printed;
	
	rem = n % 16;
	rec = n / 16;
	if (depth == 0)
		return ;
	if (rem >= 10)
		printed = rem + 97;
	else
		printed = rem + 48;
	depth--;
	ft_puthex(rec, depth);
	write(1, &printed, 1);
	return ;
}

int main(void)
{
	char temp = 'n';
	
	ft_puthex(&temp, 16);
}
