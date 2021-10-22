/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:38:54 by jocaetan          #+#    #+#             */
/*   Updated: 2021/10/22 15:25:30 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The strnstr() function locates the first occurrence of the null-terminated 
string needle in the string haystack, where not more than len characters are 
searched.
Characters that appear after a `\0' character are not searched.  
Since the strnstr() function is a FreeBSD specific API, it should only be used 
when portability is not a concern.
*/

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	const char		*sub;
	size_t			size;

	i = -1;
	sub = big;
	size = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *) big);
	while (sub[++i] && i < len)
	{
		if (sub[i] == little[0])
		{
			if (len < i + size)
				return (0);
			sub = sub + i;
			if (ft_strncmp(sub, little, size) == 0)
				return ((char *)sub);
		}
	}
	return (0);
}
