/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_hit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:26:25 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 11:30:03 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

void			ft_init_hit(t_hit *hit)
{
	(*hit).normal = ft_v_false();
	(*hit).t = INFINITY;
	(*hit).sphere = NULL;
	(*hit).triangle = NULL;
	(*hit).square = NULL;
	(*hit).plane = NULL;
	(*hit).cylinder = NULL;
}