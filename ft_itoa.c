/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-ansa <eel-ansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:44:12 by eel-ansa          #+#    #+#             */
/*   Updated: 2023/12/29 11:17:08 by eel-ansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_d(int size)
{
	int	i;

	i = 0;
	if (size < 0)
		i++;
	while (size)
	{
		size = size / 10;
		i++;
	}
	return (i);
}

static char	*result(char *str, unsigned int nmb, int sign, int i)
{
	str[i--] = '\0';
	while (i >= 0 && nmb != 0)
	{
		str[i] = nmb % 10 + '0';
		nmb = nmb / 10;
		i--;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	nmb;
	int				sign;
	char			*str;

	if (n == 0)
		return (ft_strdup("0"));
	i = count_d(n);
	sign = 0;
	if (n < 0)
	{
		nmb = n * -1;
		sign++;
	}
	else
		nmb = n;
	str = malloc(i + 1 * sizeof(char));
	if (!str)
		return (NULL);
	str = result(str, nmb, sign, i);
	return (str);
}

	// int main()
	// {
	//     int i = -2;
	//     printf("%s", ft_itoa(i));
	// }
