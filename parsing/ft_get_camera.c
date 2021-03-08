/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_camera.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 19:08:28 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/05 17:57:25 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../minirt.h"

static int	ft_error_camera(t_camera *camera)
{
	if ((camera->fov < 0.0 || camera->fov > 180.0)
	|| (camera->orientation.x < -1.0 || camera->orientation.x > 1)
	|| (camera->orientation.y < -1.0 || camera->orientation.y > 1)
	|| (camera->orientation.z < -1.0 || camera->orientation.z > 1))
	{
		perror("Los parametros de la camara son incorrectos\n");
		return (0);
	}
	return (1);
}

static void		ft_add_camera(t_scene **scene, t_camera *camera)
{
	t_list		*new_camera;

	new_camera = ft_new_list((camera));
	if ((*scene)->camera == NULL)
		(*scene)->camera = new_camera;
	else
		ft_lstadd_back(&(*scene)->camera, new_camera);
}


void			ft_get_camera(t_scene **scene, char *line)
{
	t_camera	*camera;
	int			i;

	camera = (t_camera *) malloc(sizeof(t_camera) * 1);
	i = 1;
	camera->position = ft_get_vector(&line[i]);
	i += ft_next_value(&line[i]);
	camera->orientation = ft_get_vector(&line[i]);
	i += ft_next_value(&line[i]);
	camera->fov = ft_atoi(&line[i]);
	if (ft_error_camera(camera))
		ft_add_camera(scene, camera);
	return ;
}