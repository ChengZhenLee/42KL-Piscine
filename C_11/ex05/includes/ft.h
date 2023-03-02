/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:35:05 by chenglee          #+#    #+#             */
/*   Updated: 2023/03/01 22:14:43 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

//int		ft_strcmp(char *s1, char *s2);
void	add(int n1, int n2);
void	sub(int n1, int n2);
void	mult(int n1, int n2);
void	divi(int n1, int n2);
void	mod(int n1, int n2);
int		checkarg(char c);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int		strtonum(char *str);
int		ft_strlen(char *str);

#endif
