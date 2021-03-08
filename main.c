/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 14:12:30 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/28 18:53:29 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int				main(int argc, char *argv[])
{
	if (argc < 2 || argc > 3)
		return(printf("Argumentos incorrectos\n"));
	if (argc == 3 && !ft_strncmp(argv[2], "--save", sizeof("--save")))
		return (ft_minirt(argv[1], 1));
	else
		return (ft_minirt(argv[1], 0));
}