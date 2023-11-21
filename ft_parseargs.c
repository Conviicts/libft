/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parseargs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 23:18:54 by jode-vri          #+#    #+#             */
/*   Updated: 2023/11/21 23:58:03 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_parseargs(t_argsArray args, char *option) {
    for (size_t i = 0; i < args.len; i++) {
        if (ft_strncmp(option, args.mappings[i].option, strlen(option)) == 0) {
            args.mappings[i].function();
            return true;
        }
    }
    return false;
}