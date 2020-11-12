/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:06:31 by lvarela           #+#    #+#             */
/*   Updated: 2020/10/16 16:21:33 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int		i;
	unsigned const char	*p1;
	unsigned const char	*p2;

	p1 = (unsigned const char *)s1;
	p2 = (unsigned const char *)s2;
	i = 0;
	while (i < n && (p1[i] || p2[i]))
	{
		if (p1[i] == p2[i])
			i++;
		else
			return (p1[i] - p2[i]);
	}
	return (0);
}
