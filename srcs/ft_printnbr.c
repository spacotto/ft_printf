/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:36:21 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/07 14:49:54 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printnbr(t_format *sformat)
{
	int		i;
	char	*s;
	size_t	len;

	i = (int)va_arg(sformat->args, int);
	s = ft_itoa(i);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free(s);
	sformat->print_len += len;
}
