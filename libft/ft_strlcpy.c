/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:36:13 by jocaetan          #+#    #+#             */
/*   Updated: 2021/10/18 13:36:15 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The ft_strlcpy() function copies up to size - 1 characters from the 
NUL-terminated string src to dst, NUL-terminating the result.
RETURN VALUES
The ft_strlcpy() return the total length of src.
*/

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = -1;
	if (size != 0)
	{
		while (src[++i] && i < size - 1)
			dst[i] = src[i];
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
