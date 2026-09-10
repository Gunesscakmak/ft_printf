/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucakmak <gucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:44:19 by username          #+#    #+#             */
/*   Updated: 2026/09/10 16:49:48 by gucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include "libft.h"

int	print_nb(va_list *args)
{
	int		n;
	char	*p;
	size_t	len;
	int		counter;

	n = va_arg(*args, int);
	p = ft_itoa(n);
	len = ft_strlen(p);
	counter = write(1, p, len);
	free(p);
	return (counter);
}
