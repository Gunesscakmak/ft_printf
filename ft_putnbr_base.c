/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucakmak <gucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:43:29 by username          #+#    #+#             */
/*   Updated: 2026/09/10 16:53:08 by gucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include "libft.h"

int	ft_putnbr_base(unsigned long n, char *base_chart)
{
	unsigned long	base;
	int				counter;

	base = ft_strlen(base_chart);
	counter = 0;
	if (n >= base)
	{
		counter += ft_putnbr_base(n / base, base_chart);
		counter += ft_putchar(base_chart[n % base]);
	}
	else
	{
		counter += ft_putchar(base_chart[n]);
	}
	return (counter);
}
