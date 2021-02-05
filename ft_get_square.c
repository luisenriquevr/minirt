/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:59:45 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/05 11:46:54 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void            ft_get_square(t_scene **scene, char **line)
{
	t_square     *square;
	int         i;

	square = (t_square *) malloc(sizeof(t_square) * 1);
	i = 2;
	square->position = ft_get_vector(&(*line)[i]);
	i += ft_next_value(&(*line)[i]);
	square->orientation = ft_get_vector(&(*line)[i]);
	i += ft_next_value(&(*line)[i]);
	square->high = ft_atof(&(*line)[i]);
	i += ft_next_value(&(*line)[i]);
	square->colour = ft_get_rgb(&(*line)[i]);
	(*scene)->square = square;
	return ;
}