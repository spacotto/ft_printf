/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base_buffer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:14:07 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/12 16:37:44 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	ft_countdigits(ssize_t n, ssize_t blen)
{
	size_t	counter;

	counter = 0;
	if (n < 0)
	{
		counter++;
		n = -n;
	}
	while (n >= blen)
	{
		n /= blen;
		counter++;
	}
	return (counter);
}

void	ft_itoa_base_buffer(ssize_t n, char* base, t_format *sformat)
{
	ssize_t	blen;
	size_t	len;

	blen = ft_strlen(base);
	len = ft_countdigits(n, blen);
	if (n < 0)
	{
		sformat->buffer[0] = '-';
		n = -n;
	}
	if (n == 0)
		sformat->buffer[0] = '0';
	while (len > 0)
	{
		sformat->buffer[len] = base[n % blen];
		n /= blen;
		len--;
	}
}
