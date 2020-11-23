/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scene_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:41:01 by lvarela           #+#    #+#             */
/*   Updated: 2020/11/23 10:46:20 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void                 ft_scene_init(t_scene **scene)
{
	(*scene)->alight = NULL;
	(*scene)->camera = NULL;
	(*scene)->cylinder = NULL;
	(*scene)->light = NULL;
	(*scene)->plane = NULL;
	(*scene)->resolution = NULL;
	(*scene)->sphere = NULL;
	(*scene)->square = NULL;
	(*scene)->triangle = NULL;
}
