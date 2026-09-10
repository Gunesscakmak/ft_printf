/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucakmak <gucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:43:49 by username          #+#    #+#             */
/*   Updated: 2026/09/10 16:49:29 by gucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_format(char specifier, va_list *args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(args);
	else if (specifier == 's')
		count += print_string(args);
	else if (specifier == 'd' || specifier == 'i')
		count += print_nb(args);
	else if (specifier == 'u')
		count += print_unsigned_nb(args);
	else if (specifier == 'X' || specifier == 'x')
		count += print_hex(args, specifier);
	else if (specifier == 'p')
		count += print_pointer(args);
	else if (specifier == '%')
		count += write(1, "%", 1);
	return (count);
}
