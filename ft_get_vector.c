/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 19:22:31 by lvarela           #+#    #+#             */
/*   Updated: 2020/12/07 18:47:34 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_vector		ft_get_vector(char *line)
{
	t_vector	vector;
	int			i;

	i = 0;
	vector.x = ft_atof(&(line)[i]);
	while (line[i] != ',' && line[i])
		i++;
	i++;
	vector.y = ft_atof(&line[i]);
	while (line[i] != ',' && line[i])
		i++;
	i++;
	vector.z = ft_atof(&line[i]);
	return(vector);
}