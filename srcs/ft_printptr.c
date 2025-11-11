/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:06:22 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/07 16:41:30 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printptr(t_format *sformat)
{
	size_t	p;
	char	*s;
	size_t	len;

	p = (size_t)va_arg(sformat->args, void *);
	s = ft_utoa_base(p, "0123456789abcdef");
	if (p == 0)
	{
		ft_putstr_fd("(nil)", 1);
		len = ft_strlen("(nil)");
	}
	else
	{
		ft_putstr_fd("0x", 1);
		ft_putstr_fd(s, 1);
		len = ft_strlen(s) + 2;
	}
	free(s);
	sformat->print_len += len;
}
