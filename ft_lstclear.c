/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 22:49:29 by convicts          #+#    #+#             */
/*   Updated: 2020/11/15 12:25:12 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst && *lst && del)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
		if (temp)
			while (temp)
			{
				temp = (*lst)->next;
				ft_lstdelone(*lst, del);
				*lst = temp;
			}
	}
}
