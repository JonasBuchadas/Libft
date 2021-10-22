/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:35:03 by jocaetan          #+#    #+#             */
/*   Updated: 2021/10/22 14:53:15 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
Reverses the order of elements in the tab array.
*/

#include <stddef.h>

void	ft_revtab(void *tab, size_t size)
{
	size_t	start;
	size_t	end;
	char	temp;

	start = -1;
	end = size;
	while (++start < --end)
	{
		temp = *(char *)(tab + start);
		*(char *)(tab + start) = *(char *)(tab + end);
		*(char *)(tab + end) = temp;
	}
}
