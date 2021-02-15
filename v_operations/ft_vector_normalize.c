/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_normalize.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 21:26:33 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/15 21:53:04 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_vector        ft_vector_normalize(t_vector v)
{
    double      invl;
    
    invl = 1 / ft_vector_magnitude(v);
    return (ft_vector_set(v.x * invl, v.y * invl, v.z * invl));
}