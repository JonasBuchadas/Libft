/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:32:17 by jocaetan          #+#    #+#             */
/*   Updated: 2021/10/18 13:32:19 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The  ft_memchr()  function scans the initial n bytes of the memory area pointed
to by s for the first instance of c. Both c and the bytes of the memory area 
pointed to by s are interpreted as unsigned char.
RETURN VALUE
The ft_memchr() function return a pointer to the matching byte or NULL if the 
character does not occur in the given memory area.
*/

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
