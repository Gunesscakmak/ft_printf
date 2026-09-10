/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucakmak <gucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:44:34 by username          #+#    #+#             */
/*   Updated: 2026/09/10 16:50:00 by gucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include "libft.h"

int	print_string(va_list *args)
{
	size_t	len;
	char	*str;

	str = va_arg(*args, char *);
	if (str == NULL)
		return (write(1, "(null)", 6));
	else
	{
		len = ft_strlen(str);
		return (write(1, str, len));
	}
}
