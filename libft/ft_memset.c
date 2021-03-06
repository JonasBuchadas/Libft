/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:34:02 by jocaetan          #+#    #+#             */
/*   Updated: 2021/10/28 11:53:13 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   DESCRIPTION
   The  ft_memset() function fills the first 'len' bytes of the memory area 
   pointed to by 'b' with the constant byte 'c' (converted to unsigned char).

   RETURN VALUE
   The ft_memset() function returns a pointer to the memory area s.
 */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*temp;

	if (b == 0)
		return (NULL);
	temp = b;
	while (len--)
	{
		*temp++ = c;
	}
	return (b);
}
