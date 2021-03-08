/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:04:50 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/07 20:30:01 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHS_H
# define MATHS_H

# ifndef M_PI
#  define M_PI 3.14159265358979323846
# endif

# include "../v_operations/v_operations.h"
# include "../parsing/parsing.h"

typedef	struct		s_hit
{
	float			t;
	t_vector		normal;
	t_sphere	   	*sphere;
	t_plane			*plane;
	t_square		*square;
	t_cylinder		*cylinder;
	t_triangle		*triangle;
	t_vector        phit;
}                   t_hit;

typedef struct		s_phong
{
	t_vector		alight;
	t_vector		surface;
	t_vector		distance;
}					t_phong;


int				ft_scene_creator(t_scene *scene);
static void		ft_scene_calc(t_scene *scene, t_ray ray, char **img_data);
int				ft_compute_ray(t_ray *ray, int x, int y, t_scene *secene);
t_colour		ft_get_colour(t_scene *scene, t_ray ray);
t_vector		ft_rotation(t_vector pos, t_vector dir, t_vector rot);
t_hit			ft_get_hit(t_scene *scene, t_ray ray);
t_vector		ft_get_hit_colour(t_hit hit);
static t_phong	ft_phong_calculate(t_scene *scene);
t_vector		ft_v_false(void);
t_vector		ft_v_true(void);
void			ft_init_hit(t_hit *hit);
t_hit			ft_get_hit_sphere(t_scene *scene, t_ray ray, t_hit hits);
t_hit			ft_get_hit_plane(t_scene *scene, t_ray ray, t_hit hits);


#endif