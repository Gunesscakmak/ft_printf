/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucakmak <gucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:44:11 by username          #+#    #+#             */
/*   Updated: 2026/09/10 16:49:53 by gucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(va_list *args, char specifier)
{
	unsigned int	n;
	char			*base_chart_upper;
	char			*base_chart_smaller;

	base_chart_upper = "0123456789ABCDEF";
	base_chart_smaller = "0123456789abcdef";
	n = va_arg(*args, unsigned int);
	if (specifier == 'X')
		return (ft_putnbr_base(n, base_chart_upper));
	else
		return (ft_putnbr_base(n, base_chart_smaller));
}
