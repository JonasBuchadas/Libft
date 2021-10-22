/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:35:14 by jocaetan          #+#    #+#             */
/*   Updated: 2021/10/22 14:55:19 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
Allocates (with malloc(3)) and returns an array of strings obtained by splitting 
’s’ using the character ’c’ as a delimiter.  
The array must be ended by a NULL pointer.
*/

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static char		**create_words(char **arr, const char *s, size_t i, char c);
static char		**add_word(char **arr, const char *s, size_t i, size_t n);
static size_t	ft_str2dlen(char **s);
static int		check_c(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	char	strc[2];

	if (!s)
		return (NULL);
	i = -1;
	strc[0] = c;
	strc[1] = 0;
	arr = add_word(NULL, s, 0, 0);
	if (!arr)
		return (NULL);
	if (s[0] == 0)
		return (arr);
	arr = create_words(arr, s, i, c);
	if (!arr)
		return (NULL);
	if (ft_str2dlen(arr) == 0 && check_c(s, c) == 0)
		arr = add_word(arr, ft_strtrim(s, strc), ft_strlen(s), ft_strlen(s));
	if (!arr)
		return (NULL);
	return (arr);
}

static char	**create_words(char **arr, const char *s, size_t i, char c)
{
	size_t	n;

	n = 0;
	while (s[++i])
	{
		if (s[i] != c)
			n++;
		else
		{
			if (n > 0)
			{
				arr = add_word(arr, s, i, n);
				n = 0;
			}
			else
				continue ;
		}
	}
	if (s[i - 1] != c)
		arr = add_word(arr, s, i, n);
	return (arr);
}

static char	**add_word(char **arr, const char *s, size_t i, size_t n)
{
	size_t	size;
	char	**arrdup;
	size_t	j;

	if (arr == NULL)
	{
		arrdup = (void *)malloc(sizeof(char *));
		if (!arrdup)
			return (NULL);
		arrdup[0] = 0;
		return (arrdup);
	}
	else
		size = ft_str2dlen(arr) + 1;
	arrdup = (void *)malloc(sizeof(char *) * (size + 1));
	if (!arrdup)
		return (NULL);
	j = -1;
	while (arr[++j] != 0)
		arrdup[j] = arr[j];
	arrdup[j++] = ft_substr(s, (unsigned int)(i - n), n);
	arrdup[j] = 0;
	free(arr);
	return (arrdup);
}

static size_t	ft_str2dlen(char **s)
{
	size_t	l;

	l = 0;
	while (s[l] != 0)
		l++;
	return (l);
}

static int	check_c(const char *s, char c)
{
	size_t	i;

	i = -1;
	while (s[++i])
		if (s[i] != c)
			return (0);
	return (1);
}