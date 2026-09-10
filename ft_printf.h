/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucakmak <gucakmak@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:50:39 by username          #+#    #+#             */
/*   Updated: 2026/09/10 16:54:13 by gucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int		ft_printf(const char *format, ...);
int		handle_format(char specifier, va_list *args);
int		print_char(va_list *args);
int		print_string(va_list *args);
int		print_nb(va_list *args);
char	*ft_itoa(int n);
int		ft_putnbr_base(unsigned long n, char *base_chart);
int		ft_putchar(char a);
int		print_unsigned_nb(va_list *args);
int		print_hex(va_list *args, char specifier);
int		print_pointer(va_list *args);
size_t	ft_strlen(char *a);
int		ft_putchar(char a);
