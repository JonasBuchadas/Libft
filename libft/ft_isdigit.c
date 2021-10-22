/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:41:25 by jocaetan          #+#    #+#             */
/*   Updated: 2021/10/18 12:41:27 by jocaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
These  functions  check  whether c, which must have the value of an unsigned 
char or EOF, falls into a certain character class according to the  specified  
locale. The functions without the "_l" suffix perform the check based on the 
current locale.
*/

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
