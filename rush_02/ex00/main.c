/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asingh-s <asingh-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:55:02 by asingh-s          #+#    #+#             */
/*   Updated: 2023/02/26 18:26:45 by asingh-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define VAR_DECLS
#include "vars.h"

ndict g_res[32];
unsigned int g_q[18];
unsigned int **g_ans;


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        if (argc == 3)
        {
            chozer(argv[1]);
            if (numcheck(argv[2]))
                error();
        }
        else
            error();
    }
    else
    {
        if (numcheck(argv[2]))
            error();
    }
}