/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:34:02 by jocaetan          #+#    #+#             */
/*   Updated: 2021/10/18 13:34:04 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   DESCRIPTION
   The  ft_memset() function fills the first n bytes of the memory area pointed
   to by s with the constant byte c (converted to unsigned char).

   RETURN VALUE
   The ft_memset() function returns a pointer to the memory area s.
 */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		*(unsigned char *)(s + i) = c;
	return (s);
}
