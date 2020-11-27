/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_rgb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:49:33 by lvarela           #+#    #+#             */
/*   Updated: 2020/11/27 11:37:02 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_color         ft_get_rgb(char *line)
{
	int			i;
	t_color		color;
	
	i = 0;
	color.r = ft_atoi(&line[i]);
	while (line[i] && line[i] != ',')
		i++;
	while (line[i] && (line[i] < '0' || line[i] > '9'))
		i++;
	color.g = ft_atoi(&line[i]);
	while (line[i] && line[i] != ',')
		i++;
	while (line[i] && (line[i] < '0' || line[i] > '9'))
		i++;
	color.b = ft_atoi(&line[i]);
	return(color);
}