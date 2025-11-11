/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:54:24 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/10 17:04:30 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printunb(t_format *sformat)
{
	size_t	u;
	char	*s;
	size_t	len;

	u = (size_t)va_arg(sformat->args, unsigned int);
	s = ft_utoa_base(u, "0123456789");
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free(s);
	sformat->print_len += len;
}
