/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:41:52 by jocaetan          #+#    #+#             */
/*   Updated: 2021/10/22 14:25:25 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The isspace() function tests for the white-space characters.  
For any locale, this includes the following standard characters:

``\t''   ``\n''    ``\v''    ``\f''    ``\r''    `` ''

In the "C" locale, isspace() successful test is limited to these characters only.
The value of the argument must be representable as an unsigned char or 
the value of EOF.
*/

int	ft_isspace(int c)
{
	if (c == '\t')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\v')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\r')
		return (1);
	if (c == ' ')
		return (1);
	else
		return (0);
}
