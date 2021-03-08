/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colour_mul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:10:20 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 10:11:02 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_colour        ft_colour_mul(t_colour colour, float f)
{
	t_colour    new_colour;

	new_colour.r = colour.r * f;
	new_colour.g = colour.g * f;
	new_colour.b = colour.b * f;
	return (new_colour);
}
