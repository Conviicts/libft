/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parseargs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 23:18:54 by jode-vri          #+#    #+#             */
/*   Updated: 2023/11/22 00:12:25 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

bool	ft_parseargs(t_argsArray args, char *option, ...) {
    for (size_t i = 0; i < args.len; i++) {
        if (ft_strncmp(option, args.mappings[i].option, ft_strlen(option)) == 0) {
            va_list vargs;
            va_start(vargs, option);
            args.mappings[i].function(vargs);
            va_end(vargs);
            return true;
        }
    }
    return false;
}