/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_plane.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 12:39:59 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/04 15:22:15 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void            ft_get_plane(t_scene **scene, char **line)
{
    t_plane     *plane;
    int         i;

    plane = (t_plane *) malloc(sizeof(t_plane) * 1);
    i = 2;
    plane->position = ft_get_vector(&(*line)[i]);
    while ((*line)[i] && (*line)[i] == ' ')
		i++;
    while ((*line)[i] != ' ' && (*line)[i])
        i++;
    plane->orientation = ft_get_vector(&(*line)[i]);
    while ((*line)[i] && (*line)[i] == ' ')
		i++;
    while ((*line)[i] != ' ' && (*line)[i])
        i++;
    plane->colour = ft_get_rgb(&(*line)[i]);
    (*scene)->plane = plane;
    return ;
}