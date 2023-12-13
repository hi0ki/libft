/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 01:30:22 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/13 10:38:20 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *str;

    str = malloc(count * size);
    if (!str)
        return (NULL);
    ft_bzero(str, sizeof(str));
    return ((str));
}
