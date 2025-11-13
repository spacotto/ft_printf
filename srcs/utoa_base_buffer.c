/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utoa_base_buffer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:40:49 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/12 16:14:39 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	countdigits_base(size_t n, size_t blen)
{
	size_t	counter;

	counter = 1;
	while (n >= blen)
	{
		n /= blen;
		counter++;
	}
	return (counter);
}

void	ft_utoa_base_buffer(size_t n, char *base, t_format *sformat)
{
	size_t		blen;
	size_t		len;

	blen = ft_strlen(base);
	len = countdigits_base(n, blen);
	while (len > 0)
	{
		len--;
		sformat->buffer[len] = base[n % blen];
		n /= blen;
	}
}
