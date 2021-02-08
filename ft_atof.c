/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:55:37 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/08 20:29:50 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"
#include <math.h>

float			ft_dot_number(const char *str, int sign, int num)
{
	int			i;
	float		num2;
	int			positions;

	i = 0;
	num2 = 0.0;
	positions = 0;
	if (str[i++] == '.')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			num2 = (num2 * 10) + (str[i++] - 48);
			positions++;
		}
	}
	return ((num + (num2 * powf(0.1, positions))) * sign);
}

float			ft_atof(const char *str)
{
	int			i;
	int			sign;
	int			num;

	i = 0;
	sign = 1;
	num = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
		num = (num * 10) + (str[i++] - 48);
	return (ft_dot_number(&str[i], sign, num));
}