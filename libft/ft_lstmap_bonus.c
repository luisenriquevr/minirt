/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 17:30:12 by lvarela           #+#    #+#             */
/*   Updated: 2020/10/16 16:21:33 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *map;
	t_list *tmp;

	if (lst)
	{
		tmp = lst;
		if (!(new = ft_lstnew(f(tmp->content))))
			return (NULL);
		tmp = tmp->next;
		while (tmp)
		{
			if (!(map = ft_lstnew(f(tmp->content))))
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			ft_lstadd_back(&new, map);
			tmp = tmp->next;
		}
		return (new);
	}
	return (NULL);
}
