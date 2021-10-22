/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:37:14 by jocaetan          #+#    #+#             */
/*   Updated: 2021/10/22 14:22:46 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The calloc() function contiguously allocates enough space for nmemb objects that
are size bytes of memory each and returns a pointer to the allocated memory. 
The allocated memory is filled with bytes of value zero.
*/

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
