/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 21:56:24 by jode-vri          #+#    #+#             */
/*   Updated: 2020/09/06 22:02:35 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*result;
	size_t			i;

	if ((result = (unsigned char *)malloc(count * size)) == NULL)
		return (NULL);
	i = -1;
	while (++i < count * size)
		result[i] = 0;
	return (result);
}
