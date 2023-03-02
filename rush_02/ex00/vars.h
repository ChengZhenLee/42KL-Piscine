/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vars.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asingh-s <asingh-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:54:53 by asingh-s          #+#    #+#             */
/*   Updated: 2023/02/26 18:39:09 by asingh-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VARS_DEFS
# define VARS_DEFS 1
#ifndef VARS_DECLS
# define _DECL extern
# define _INIT(x)
#else
# define _DECL
# define _INIT(x)  = x
#endif

// GO TRHOUGH ALL FUCTIONS
// PLZ MAKE IT IN ORDER

_DECL void ft_putchar(char c);
_DECL void ft_putstring(char *str);
_DECL void error(void);
_DECL int	numcheck(char *str);
_DECL int nbrchk(char *c);
_DECL unsigned int * numconv(char *c);
_DECL void endict(void);
_DECL void chozer(char *c);
_DECL void instruct(unsigned int numarr[32], char wordarr[32][15]);
_DECL char *findword (unsigned int num);
_DECL char *ft_strjoin(char **strs);
_DECL void input(int argc);
_DECL void logic(char *c);
_DECL int	getlen(unsigned int	*num);
_DECL int	getlen(unsigned int	*num);
_DECL int	getlenc(char *c);
_DECL int	powerof(int nb, int power);
_DECL unsigned int	*ft_strcpy(unsigned int *dest, char *src);

typedef struct dict
{
	unsigned int	num;
	char 			word[15];
} ndict;

_DECL ndict g_res[32];
_DECL unsigned int g_q[18];
_DECL unsigned int **g_ans;
#endif
