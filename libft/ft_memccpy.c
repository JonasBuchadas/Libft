/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:32:06 by jocaetan          #+#    #+#             */
/*   Updated: 2021/10/18 15:12:28 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The ft_memccpy() function copies no more than n bytes from memory area src to 
memory area dest, stopping when the character c is found.
If the memory areas overlap, the results are undefined.
RETURN VALUE
The ft_memccpy() function returns a pointer to the next character in dest after
c, or NULL if c was not found in the first n characters of src.
*/

#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;

	i = -1;
	while (++i < n)
	{
		*(unsigned char *)(dest + i) = *(const unsigned char *)(src + i);
		if (*(unsigned char *)(src + i) == (unsigned char)c)
			return (dest + ++i);
	}
	return (NULL);
}
