/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:38:16 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/05 11:45:44 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int				ft_next_value(char *line)
{
	int			i;
	
	i = 0;
	while (line[i] == ' ' && line[i])
		i++;
	while (line[i] != ' ' && line[i])
		i++;
	return (i);
}