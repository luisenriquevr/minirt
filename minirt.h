/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:04:50 by lvarela           #+#    #+#             */
/*   Updated: 2020/12/18 14:30:53 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif
# define FD_SIZE 4096

# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <math.h>
# include <errno.h>
# include <fenv.h>

/*
** ESTRUCTURAS
*/
typedef struct		s_vector
{
	float			x;
	float			y;
	float			z;
}					t_vector;

typedef struct		s_color
{
	int				r;
	int				g;
	int				b;
}					t_color;

typedef struct		s_resolution
{
	int				x;
	int				y;
}					t_resolution;;

typedef struct		s_alight
{
	float			ratio;
	t_color			color;
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
	t_color			color;
}					t_light;

typedef struct		s_sphere
{
	t_vector		position;
	float			diameter;
	t_color			color;
}					t_sphere;

typedef struct		s_plane
{
	t_vector		position;
	t_vector		orientation;
	float			high;
	t_color			color;
}					t_plane;

typedef struct		s_square
{
	t_vector		position;
	t_vector		orientation;
	float			high;
	t_color			color;
}					t_square;

typedef struct		s_cylinder
{
	t_vector		position;
	t_vector		orientation;
	float			diameter;
	float			high;
	t_color			color;
}					t_cylinder;

typedef struct		s_triangle
{
	t_vector		one;
	t_vector		two;
	t_vector		three;
	t_color			color;
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


/*
**  FUNCIONES GET_NEXT_LINE
*/
size_t				ft_strlen(char *str);
char				*ft_strdup(char *s1);
char				*ft_substr(char *s, unsigned int start, size_t len);
char				*ft_strchr(char *s, int c);
char				*ft_strjoin(char *s1, char *s2);
int					get_next_line(int fd, char **line);

/*
** FUNCION MADRE
*/
int					main(int argc, char *argv[]);

/*
** FUNCIONES RECOGIDA DE VALORES
*/
void				ft_get_the_values(t_scene **scene, char **line);
void				ft_get_alight(t_scene **scene, char **line);
t_color				ft_get_rgb(char *line);
float				ft_atof(const char *str);
t_vector			ft_get_vector(char *line);
void				ft_get_camera(t_scene **scene, char **line);
void				ft_get_light(t_scene **scene, char **line);

/*
** FUNCION PARA INICIAR LA ESTRUCTURA
*/
void				ft_scene_init(t_scene **scene);

#endif