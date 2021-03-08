/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 18:23:59 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/28 18:24:41 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

static void	make_header(int fd, int w, int h)
{
	static unsigned char	header[54] = {66, 77, 0, 0, 0, 0, 0, 0, 0, 0, 54, \
		0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 24};
	unsigned int			*sizeoffileentry;
	unsigned int			*widthentry;
	unsigned int			*heightentry;

	sizeoffileentry = (unsigned int *)&header[2];
	*sizeoffileentry = 54 + (w * sizeof(char) + (4 - \
						((w * sizeof(char)) % 4)) % 4) * h;
	widthentry = (unsigned int *)&header[18];
	*widthentry = w;
	heightentry = (unsigned int *)&header[22];
	*heightentry = h;
	write(fd, header, 54);
}

static void	writedata(int w, int h, char **img_data, int fd)
{
	char					*ro;
	int						i;
	int						ln;
	static unsigned char	zeroes[3] = {0, 0, 0};

	ln = 0;
	i = 0;
	ro = (char *)malloc(sizeof(char) * (w * 4 * h + 1));
	while (ln++ < w)
	{
		(*img_data)--;
		*ro++ = *(*img_data)--;
		*ro++ = *(*img_data)--;
		*ro++ = *(*img_data)--;
	}
	ro--;
	while (i++ < w)
	{
		write(fd, ro--, sizeof(char));
		write(fd, ro--, sizeof(char));
		write(fd, ro--, sizeof(char));
	}
	write(fd, zeroes, (4 - ((w * sizeof(char)) % 4)) % 4);
	free(++ro);
}

static void	save_image(int w, int h, char *img_data)
{
	int	fd;
	int	row;

	img_data--;
	row = 0;
	fd = open("save_image.bmp", O_WRONLY);
	if (fd == -1)
		fd = open("save_image.bmp", O_WRONLY | O_CREAT);
	make_header(fd, w, h);
	while (row++ < h)
	{
		writedata(w, h, &img_data, fd);
	}
	close(fd);
}
