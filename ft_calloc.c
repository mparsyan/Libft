/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparsyan <mparsyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:42:17 by mparsyan          #+#    #+#             */
/*   Updated: 2022/04/23 15:20:34 by mparsyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*buffer;

	buffer = (void *)malloc(size * count);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, size * count);
	return (buffer);
}
