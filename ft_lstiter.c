/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 12:10:15 by jode-vri          #+#    #+#             */
/*   Updated: 2022/12/12 08:47:48 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (lst && f)
	{
		tmp = lst->next;
		f(lst->content);
		if (tmp)
		{
			while (tmp != NULL)
			{
				tmp = lst->next;
				f(lst->content);
				lst = tmp;
			}
		}
	}
}
