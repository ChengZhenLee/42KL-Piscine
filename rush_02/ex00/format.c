/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asingh-s <asingh-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:23:18 by asingh-s          #+#    #+#             */
/*   Updated: 2023/02/26 18:37:42 by asingh-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "vars.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return(0) ;
		a++;
	}
	return (1);
}

int ft_strstr(char *str, char *to_find)
{
	int	b;


	while (*str != '\0' )
	{
		if (*str == *to_find)
		    return(1);
		str++;
	}
	return (0);
}

char *ft_strjoin(char **strs)
{
	int      j;
	int     k;
    int		i;
	int     z;
	char	*a;
	char    *b;
	char *sep;

    j = 0;
	k = 0;
	b = "and";
	sep = " ,- and";
	a = (char *)malloc(sizeof(char) * 500);
	while (strs[k][0] != '\0')
	{
		i = 0;
		while (strs[k][i])
		    a[j++] = strs[k][i++];
	    if(ft_strcmp(strs[k],"thousand") == 1 || ft_strcmp(strs[k],"million") == 1 || ft_strcmp(strs[k],"billion") == 1)
		    a[j++] = sep[1];

        /*
		if(ft_strcmp(strs[k],"hundred") == 1)
		{
		   z = 3;
		    while (sep[z] != '\0')
		        a[j++] = sep[z++];
		}
        */
		if(ft_strstr(strs[k], "y"))
		    a[j++] = sep[2];
		else
		a[j++] = sep[0];
	    k++;
	}
	a[j] = '\0';
	return (a);
}
/*
int main()
{
    char *strs[] = {"one", "million", "two","fourty","seven","thousand","one","hundred","sixty","four"};
	char *join;
	join = ft_strjoin(strs);
	printf(" %s\n",  join);
}
*/