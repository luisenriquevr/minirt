/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_to_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:03:52 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 10:09:27 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

int			ft_colour_to_int(t_colour colour)
{
	int     rgb;

	rgb = (int)colour.r;
	rgb = (rgb << 8) + (int)colour.g;
	rgb = (rgb << 8) + (int)colour.b;
	return (rgb);
}
