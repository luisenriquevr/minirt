/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_rgb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:49:33 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/04 13:03:36 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_colour         ft_get_rgb(char *line)
{
	int			i;
	t_colour		colour;
	
	i = 0;
	colour.r = ft_atoi(&line[i]);
	while (line[i] && line[i] != ',')
		i++;
	while (line[i] && (line[i] < '0' || line[i] > '9'))
		i++;
	colour.g = ft_atoi(&line[i]);
	while (line[i] && line[i] != ',')
		i++;
	while (line[i] && (line[i] < '0' || line[i] > '9'))
		i++;
	colour.b = ft_atoi(&line[i]);
	return(colour);
}