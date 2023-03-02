/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:17:57 by chenglee          #+#    #+#             */
/*   Updated: 2023/03/02 18:07:04 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_copystr(char *s1, char *s2);
int		ft_strlen(char *s1);
int		puterror(char *fname, char *str, char *strerror, int mode);
void	intdec_to_hex(int num, int flag);
void	ft_readfile(int infile, int totalbytes, int flag);
void	ft_putascii(char *str, int flag);
void	ft_putword(char *str, int flag);

#endif
