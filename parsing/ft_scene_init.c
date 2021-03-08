/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scene_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:41:01 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 15:56:28 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

void                 ft_scene_init(t_scene **scene)
{
	(*scene)->alight = NULL;
	(*scene)->camera = NULL;
	(*scene)->n_cameras = 0;
	(*scene)->cylinder = NULL;
	(*scene)->light = NULL;
	(*scene)->plane = NULL;
	(*scene)->resolution = NULL;
	(*scene)->sphere = NULL;
	(*scene)->square = NULL;
	(*scene)->triangle = NULL;
	(*scene)->save = 0;
	(*scene)->mlx = (t_mlx *) malloc(sizeof(t_mlx));
}
