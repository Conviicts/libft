/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parseargs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 23:18:54 by jode-vri          #+#    #+#             */
/*   Updated: 2023/11/22 00:57:02 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

bool	ft_parseargs(t_argsArray args, char *option, ...) {
    for (size_t i = 0; i < args.len; i++) {
		if (option && option[0] == '-') {
			if (ft_strlen(option) == 2 ) {
				if (option[1] == args.mappings[i].option) {
					va_list vargs;
					va_start(vargs, option);
					args.mappings[i].function(vargs);
					va_end(vargs);
				}
			} else if (ft_strlen(option) > 2) {
				for (size_t j = 1; j < ft_strlen(option); j++) {
					if (option[j] == args.mappings[i].option) {
						va_list vargs;
						va_start(vargs, option);
						args.mappings[i].function(vargs);
						va_end(vargs);
					}
				}
			}
		}
    }
    return (true);
}