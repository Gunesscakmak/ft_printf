/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucakmak <gucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:44:28 by username          #+#    #+#             */
/*   Updated: 2026/09/10 16:49:58 by gucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(va_list *args)
{
	void	*p;
	int		counter;

	counter = 0;
	p = va_arg(*args, void *);
	counter += write(1, "0x", 2);
	counter += ft_putnbr_base((unsigned long) p, "0123456789ABCDEF");
	return (counter);
}
