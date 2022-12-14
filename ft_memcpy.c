/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 21:57:23 by jode-vri          #+#    #+#             */
/*   Updated: 2020/09/06 22:01:50 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*u_dst;
	unsigned char	*u_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	u_dst = (unsigned char *)dst;
	u_src = (unsigned char *)src;
	i = -1;
	while (++i < n)
		u_dst[i] = u_src[i];
	dst = u_dst;
	return (dst);
}
