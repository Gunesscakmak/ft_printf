
NAME = libftprintf.a

SRCS = ft_itoa.c ft_printf.c ft_putnbr_base.c\
handle_format.c print_char.c print_string.c ft_strlen.c ft_putchar.c\
print_hex.c print_nb.c print_unsigned_nb.c print_pointer.c

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c ft_printf.h //libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re

