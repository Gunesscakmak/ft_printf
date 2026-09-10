/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucakmak <gucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:42:59 by username          #+#    #+#             */
/*   Updated: 2026/09/10 16:52:18 by gucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	digit_counter(int n)
{
	long	num;
	int		counter;

	num = n;
	counter = 0;
	if (num < 0)
	{
		counter++;
		num *= -1;
	}
	else if (num == 0)
		counter = 1;
	while (num > 0)
	{
		num = num / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	long	num;
	int		digit_count;
	char	*p;

	digit_count = digit_counter(n);
	p = malloc((sizeof(char) * digit_count) + 1);
	if (p == NULL)
		return (NULL);
	num = n;
	p[digit_count] = '\0';
	if (num < 0)
	{
		num *= -1;
		p[0] = '-';
	}
	else if (num == 0)
		p[0] = '0';
	while (num > 0)
	{
		p[digit_count - 1] = num % 10 + '0';
		num = num / 10;
		digit_count--;
	}
	return (p);
}
