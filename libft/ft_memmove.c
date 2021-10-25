/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:33:03 by jocaetan          #+#    #+#             */
/*   Updated: 2021/10/25 11:38:08 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The ft_memmove() function copies n bytes from memory area src to memory area
dest. The memory areas may overlap.
RETURN VALUE
The ft_memmove() function returns a pointer to dest.
*/

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL && n != 0)
		return (NULL);
	if (dest > src)
	{
		i = n;
		while (i-- > 0)
			*(unsigned char *)(dest + i) = *(const unsigned char *)(src + i);
	}
	else
	{
		i = -1;
		while (++i < n)
			*(unsigned char *)(dest + i) = *(const unsigned char *)(src + i);
	}
	return (dest);
}
