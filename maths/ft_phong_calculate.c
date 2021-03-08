/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phong_calculate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:16:49 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 10:52:32 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

static t_phong	ft_phong_calculate(t_scene *scene)
{
	t_phong		phong;

	phong.alight = ft_vector_mul(ft_colour_to_vector(
				ft_colour_to_vector_struct(scene->alight->colour)),
					scene->alight->ratio);
	phong.distance = ft_vector_set(0, 0, 0);
	phong.surface = ft_vector_set(0, 0, 0);
	return (phong);
}