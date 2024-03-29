/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_operations.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:56:01 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 10:48:06 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef V_OPERATIONS_H
# define V_OPERATIONS_H

typedef struct	s_vector
{
	float		x;
	float		y;
	float		z;
}				t_vector;

typedef struct	s_ray
{
	t_vector	origin;
	t_vector	direction;
}				t_ray;

t_vector		ft_vector_set(float x, float y, float z);
t_vector		ft_vector_plus(t_vector v1, t_vector v2);
t_vector		ft_vector_min(t_vector v1, t_vector v2);
t_vector		ft_vector_mul(t_vector v, float t);
t_vector		ft_vector_mul_vec(t_vector v1, t_vector v2);
t_vector		ft_vector_div(t_vector v, float t);
t_vector		ft_vector_div_vec(t_vector v1, t_vector v2);
float			ft_vector_dot(t_vector v1, t_vector v2);
t_vector		ft_vector_cross(t_vector v1, t_vector v2);
float			ft_vector_magnitude(t_vector v);
t_vector		ft_vector_normalize(t_vector v);
t_vector		ft_vector_invert(t_vector v);
float			ft_vector_distance(t_vector v1, t_vector v2);
void			ft_vector_rotation(t_vector *vector, t_vector *angle);
void			ft_vector_anti_rotation(t_vector *vector, t_vector *angle);
t_vector		ft_vector_clamp(t_vector vec);

#endif