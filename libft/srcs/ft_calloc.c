/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:06:05 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/20 13:59:33 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*t;

	t = malloc(nmemb * size);
	if (t)
	{
		ft_memset(t, '\0', nmemb * size);
		return (t);
	}
	return (NULL);
}
