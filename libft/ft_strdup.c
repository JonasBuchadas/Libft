/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:35:39 by jocaetan          #+#    #+#             */
/*   Updated: 2021/10/25 16:18:00 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The strdup() function allocates sufficient memory for a copy of the string s1, 
does the copy, and returns a pointer to it.  The pointer may subsequently be 
used as an argument to the function free(3).
If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
The strndup() function copies at most n characters from the string s1 always NUL 
terminating the copied string.
*/

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*d;
	
	if (!s)
		return (NULL);
	d = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!d)
		return (NULL);
	i = -1;
	while (s[++i])
		d[i] = s[i];
	d[i] = '\0';
	return (d);
}
