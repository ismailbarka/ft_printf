SRCS =  ft_print_c.c\
		ft_print_i.c\
		ft_print_p.c\
		ft_print_s.c\
		ft_print_u.c\
		ft_print_x.c\
		ft_print_XX.c\
		ft_printf_utils.c\
		ft_printf.c\
		ft_put_d.c\

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all