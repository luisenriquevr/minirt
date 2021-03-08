/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colour_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:07:29 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 10:09:33 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_colour		ft_colour_set(float r, float g, float b)
{
	t_colour	new_colour;

	new_colour.r = r;
	new_colour.g = g;
	new_colour.b = b;
	return (new_colour);
}