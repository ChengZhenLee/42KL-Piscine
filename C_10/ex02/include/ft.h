/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:13:40 by chenglee          #+#    #+#             */
/*   Updated: 2023/02/28 21:06:00 by chenglee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>

int		ft_filelen(int file);
int		ft_putwholefile(int file);
int		strtonum(char *str);
int		ft_putfile(char *fname, int file, int byte);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
void	ft_puterr(char *pname, char *fname, char *err, int mode);
int		print_file(char *pname, char *fname, int byte);

#endif
