/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_the_values.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcayne <jalcayne@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:47:16 by lvarela           #+#    #+#             */
/*   Updated: 2020/11/27 11:24:54 by jalcayne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void				ft_get_the_values(t_scene **scene, char **line)
{
	if ((*line)[0] == 'R')
		ft_get_resolution(scene, line);
	else if ((*line)[0] == 'A')
		ft_get_alight(scene, line);
	return ;
}
