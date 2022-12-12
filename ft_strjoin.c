/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 20:58:07 by jode-vri          #+#    #+#             */
/*   Updated: 2020/11/16 15:16:29 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		length;
	int		i;
	int		j;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	length = ft_strlen(s1);
	length += ft_strlen(s2);
	if ((result = malloc(sizeof(char) * (length + 1))) == NULL)
		return (NULL);
	i = -1;
	while (s1 && s1[++i])
		result[i] = s1[i];
	j = -1;
	while (s2 && s2[++j])
		result[i + j] = s2[j];
	result[i + j] = 0;
	return (result);
}
