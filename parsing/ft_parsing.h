/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:00:15 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/18 19:39:55 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSING_H
# define FT_PARSING_H

# include "../v_operations/v_operations.h"
# include "../utils/utils.h"

typedef struct		s_colour
{
	int				r;
	int				g;
	int				b;
}					t_colour;

typedef struct		s_resolution
{
	int				x;
	int				y;
}					t_resolution;

typedef struct		s_alight
{
	float			ratio;
	t_colour		colour;
}					t_alight;

typedef struct		s_camera
{
	t_vector		position;
	t_vector		orientation;
	int				fov;
}					t_camera;

typedef struct		s_light
{
	t_vector		position;
	float			ratio;
	t_colour		colour;
}					t_light;

typedef struct		s_sphere
{
	t_vector		position;
	float			diameter;
	t_colour		colour;
}					t_sphere;

typedef struct		s_plane
{
	t_vector		position;
	t_vector		orientation;;
	t_colour		colour;
}					t_plane;

typedef struct		s_square
{
	t_vector		position;
	t_vector		orientation;
	float			high;
	t_colour		colour;
}					t_square;

typedef struct		s_cylinder
{
	t_vector		position;
	t_vector		orientation;
	float			diameter;
	float			high;
	t_colour		colour;
}					t_cylinder;

typedef struct		s_triangle
{
	t_vector		a;
	t_vector		b;
	t_vector		c;
	t_colour		colour;
}					t_triangle;

typedef struct		s_scene
{
	t_resolution	*resolution;
	t_alight		*alight;
	t_camera		*camera;
	t_light			*light;
	t_sphere		*sphere;
	t_plane			*plane;
	t_square		*square;
	t_cylinder		*cylinder;
	t_triangle		*triangle;
}					t_scene;

void				ft_get_the_values(t_scene **scene, char *line);
void				ft_get_resolution(t_scene **scene, char *line);
void				ft_get_alight(t_scene **scene, char *line);
t_colour			ft_get_rgb(char *line);
t_vector			ft_get_vector(char *line);
int					ft_next_value(char *line);
void				ft_get_camera(t_scene **scene, char *line);
void				ft_get_light(t_scene **scene, char *line);
void				ft_get_plane(t_scene **scene, char *line);
void				ft_get_sphere(t_scene **scene, char *line);
void				ft_get_square(t_scene **scene, char *line);
void				ft_get_cylinder(t_scene **scene, char *line);
void				ft_get_triangle(t_scene **scene, char *line);
void				ft_scene_init(t_scene **scene);

#endif