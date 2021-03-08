/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_constant_values.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:11:06 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 11:11:35 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_vector	ft_v_false(void)
{
	return (ft_vector_set(-INFINITY, -INFINITY, -INFINITY));
}

t_vector	ft_v_true(void)
{
	return (ft_vector_set(INFINITY, INFINITY, INFINITY));
}
