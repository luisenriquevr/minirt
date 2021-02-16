/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_invert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 17:08:04 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/16 17:11:08 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_vector		ft_vector_invert(t_vector v)
{
	t_vector	new_vec;
	
	new_vec.x = v.x * -1;
	new_vec.y = v.y * -1;
	new_vec.z = v.z * -1;
	return (new_vec);
}