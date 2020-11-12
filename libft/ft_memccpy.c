/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 17:47:35 by lvarela           #+#    #+#             */
/*   Updated: 2020/10/16 16:21:33 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)src;
	p2 = (unsigned char *)dst;
	while (n-- > 0)
	{
		*p2++ = *p1++;
		if (*(p1 - 1) == (unsigned char)c)
			return (p2);
	}
	return (NULL);
}
